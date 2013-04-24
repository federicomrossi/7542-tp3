/* ****************************************************************************
 * ****************************************************************************
 * Clase PARSERSALIDA
 * ****************************************************************************
 * ***************************************************************************/


#ifndef PARSER_SALIDA_H
#define PARSER_SALIDA_H

#include <string>
#include "transmisor.h"



class ParserSalida {
public:

	// Parsea la especificación del tipo de salida que se utilizará.
	// PRE: 'tipoSalida' es el tipo de salida que se desea usar. Debe
	// pasársele el nombre de archivo en caso de desear utilizar un archivo de 
	// palabras alteradas o el caracter "-" si se desea enviar las palabras 
	// a través de la salida estándar.
	// POST: se devuelve un puntero a un Transmisor.
	Transmisor* parsear(const std::string& tipoSalida);
};

#endif
