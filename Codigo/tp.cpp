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
 * Programa que se encarga de....
 *
 *
 * FORMA DE USO
 * ============
 * 
 *
 */



// #include "parser_reglas.h"
#include "parser_entrada.h"
// #include "parser_salida.h"
// #include "word_mangling.h"



/* ****************************************************************************
 * PROGRAMA PRINCIPAL
 * ***************************************************************************/


int main(int argc, char* argv[]) {
	
	// Declaramos parsers
	// ParserReglas pReglas;
	ParserEntrada pEntrada;
	// ParserSalida pSalida;
	
	// Parseamos argumentos de entrada
	Receptor *rxPalabras = pEntrada.parsear(argv[2]);
	// Transmisor& tx = pSalida.parsear(argv[3]);
	// Lista< Regla >& lReglas = pReglas.parsear(argv[1], tx);

	// Ejecutamos el proceso de alteración de palabras
	// WordMangling wordMangling(lReglas);
	// wordMangling.ejecutar(rxPalabras);

	
	// TEMP: RECEPCION DE PALABRAS
	// string x;
	// x = rxPalabras->recibir();

	// while(!x.empty())
	// {
	// 	cout << x << endl;
	// 	x = rxPalabras->recibir();
	// }

	delete rxPalabras;

	return 0;
}