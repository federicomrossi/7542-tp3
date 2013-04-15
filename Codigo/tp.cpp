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


#include "parser_entrada.h"
#include "parser_salida.h"
#include "parser_reglas.h"
#include "word_mangling.h"




/* ****************************************************************************
 * PROGRAMA PRINCIPAL
 * ***************************************************************************/


int main(int argc, char* argv[]) {
	
	// Declaramos parsers
	ParserEntrada pEntrada;
	ParserSalida pSalida;
	ParserReglas pReglas;
	
	// Parseamos argumentos de entrada
	Receptor *rxPalabras = pEntrada.parsear(argv[2]);
	Transmisor *tx = pSalida.parsear(argv[3]);
	Lista< Regla* > lReglas = pReglas.parsear(argv[1], tx);

	// Ejecutamos el proceso de alteración de palabras
	WordMangling wordMangling(lReglas);
	wordMangling.ejecutar(rxPalabras);

	delete rxPalabras;
	delete tx;

	return 0;
}