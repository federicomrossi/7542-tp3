/* ****************************************************************************
 * ****************************************************************************
 * Clase PARSERSALIDA
 * ****************************************************************************
 * ***************************************************************************/


#ifndef PARSER_SALIDA_H
#define PARSER_SALIDA_H

#include <iostream>
#include "transmisor.h"

using namespace std;


class ParserSalida {

public:

	// Parsea la especificación de qué tipo de salida se utilizará.
	// PRE: 'tipoSalida' es el tipo de salida que se desea usar. Debe
	// pasársele el nombre de archivo en caso de desear utilizar un archivo de 
	// palabras alteradas o el caracter "-" si se desea enviar las palabras 
	// a través de la salida estándar.
	// POST: se devuelve una referencia a un Transmisor.
	Transmisor* parsear(const string& tipoSalida);

};


#endif
