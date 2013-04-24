/* ****************************************************************************
 * WORD MANGLING
 * ****************************************************************************
 * 
 * Facultad de Ingeniería - UBA
 * 75.42 Taller de Programación I
 * Trabajo Práctico N°3
 * 
 * ALUMNO: Federico Martín Rossi
 * PADRÓN: 92086
 * EMAIL:  federicomrossi@gmail.com
 *
 * ****************************************************************************
 *
 * Programa que realiza el proceso de word mangling a partir de un conjunto de
 * reglas especificadas por el usuario en un archivo de entrada. El ingreso de
 * palabras puede realizarse a travéz de otro archivo de entrada o mediante la
 * entrada estándar. Por cada palabra leída se le aplicará la serie de reglas
 * modificadoras, emitiendose las palabras resultantes hacia un archivo de 
 * salida, o bien, directamente en la salida estándar.
 *
 *
 * FORMA DE USO
 * ============
 * 
 * Deberá ejecutarse el programa en la línea de comandos de la siguiente 
 * manera:
 *
 *		#	./tp [archivo_reglas] [entrada] [salida]
 *
 * donde,
 * 
 * 		archivo_reglas: nombre del archivo (incluyendo su extensión) en donde
 *						se almacenan las reglas a aplicar;
 *		entrada: especificación de la entrada de palabras. Debe especificarse
 *				 un nombre de archivo o el símbolo '-' si se desea que la
 *				 entrada de palabras sea a través de la entrada estándar;
 *		salida: especificación de la salida de palabras. Debe especificarse
 *				un nombre de archivo o el símbolo '-' si se desea que la 
 *				salida de palabras sea a través de la salida estándar.
 *
 *
 * INSTRUCCIONES DEL ARCHIVO DE REGLAS
 * ===================================
 * 
 * A continuación se muestran las instrucciones válidas para las reglas que
 * se desean aplicar. Cada una de ellas se debe finalizar con un ";".
 *
 * - "uppercase n m": Transforma los caracteres que están en la posición 'n'
 *   hasta la posición 'm' (inclusive) a mayúsculas;
 *
 * - "lowercase n m": Transforma los caracteres que están en la posición 'n'
 *   hasta la posición 'm' (inclusive) a minúsculas;
 *
 * - "repeat n m r i": Copia el substring delimitado por 'n' y 'm', lo repite
 *   'r' veces y lo inserta en la posición 'i';
 *
 * - "rotate n": Mueve los caracteres 'n' lugares hacia la derecha en forma
 *   circular. Si 'n' es negativo, la rotación se hace hacia la izquierda;
 *
 * - "insert i mmm": Agrega el string 'mmm' en la posición 'i'. 'mmm' no
 *   debe contener ningún espacio ni salto de línea ni el caracter ';';
 *
 * - "revert i": Revierte los efectos de las modificaciones de las últimas
 *   'i' reglas. El parámetro 'i' es siempre mayor o igual a 1.
 *
 */


#include "parser_entrada.h"
#include "parser_salida.h"
#include "parser_reglas.h"
#include "word_mangling.h"




/* ****************************************************************************
 * PROGRAMA PRINCIPAL
 * ***************************************************************************/


int main(int argc, char* argv[]) {
	// Si la cantidad de argumentos no es la correcta, lanzamos código de
	// retorno
	if(argc != 4) return 1;

	// Declaramos parsers
	ParserEntrada pEntrada;
	ParserSalida pSalida;
	ParserReglas pReglas;
	
	// Parseamos argumentos de entrada
	Receptor *rxPalabras = pEntrada.parsear(argv[2]);
	Transmisor *tx = pSalida.parsear(argv[3]);
	Lista< Regla > lReglas = pReglas.parsear(argv[1], tx);

	// Verificamos que esten activos el transmisor y el receptor
	if(!rxPalabras->estaActivo() || !tx->estaActivo() || lReglas.estaVacia()) {
		
		// Liberamos memoria
		delete rxPalabras;
		delete tx;

		// Retornamos código de error
		return 2;
	}
	
	// Ejecutamos el proceso de alteración de palabras
	WordMangling wordMangling(lReglas);
	wordMangling.ejecutar(rxPalabras);

	delete rxPalabras;
	delete tx;

	return 0;
}
