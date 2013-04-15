/* ****************************************************************************
 * ****************************************************************************
 * Clase PARSERREGLAS
 * ****************************************************************************
 * ***************************************************************************/


#include "parser_reglas.h"



// Parsea el archivo de reglas.
// PRE: 'archivo' es el nombre de archivo que contiene las reglas; 'tx' es
// una referencia a un Transmisor el cual puede ser usado por alguna regla
// para emitir palabras.
// POST: se devuelve una referencia a una lista que contiene, en orden
// de aparición en el archivo, los objetos que son Regla.
Lista< Regla >* ParserReglas::parsear(string archivo, Transmisor* tx) {
	
	// Creamos la lista de reglas
	Lista< Regla >* lReglas = new Lista< Regla >();

	

	return lReglas;
}
