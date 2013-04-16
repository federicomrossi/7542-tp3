/* ****************************************************************************
 * ****************************************************************************
 * Clase PARSERREGLAS
 * ****************************************************************************
 * ***************************************************************************/


#ifndef PARSER_REGLAS_H
#define PARSER_REGLAS_H

#include <fstream>
#include "lista.h"
#include "regla.h"
#include "transmisor.h"



class ParserReglas {
public:

	// Parsea el archivo de reglas.
	// PRE: 'archivo' es el nombre de archivo que contiene las reglas; 'tx' es
	// un puntero a un Transmisor el cual puede ser usado por alguna regla
	// para emitir palabras.
	// POST: se devuelve una referencia a una lista que contiene, en orden
	// de aparición en el archivo, los objetos que son Regla. La lista se 
	// encontrará vacía de producirse un error en la apertura del archivo o si
	// este último no contenía instrucciones válidas, debiéndose considerarse como
	// erróneo.
	Lista< Regla > parsear(const std::string& nombre_archivo, Transmisor* tx);
};


#endif
