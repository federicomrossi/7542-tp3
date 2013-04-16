/* ****************************************************************************
 * ****************************************************************************
 * Clase PARSERENTRADA
 * ****************************************************************************
 * ***************************************************************************/


#ifndef PARSER_ENTRADA_H
#define PARSER_ENTRADA_H

#include <string>
#include <iostream>
#include "receptor.h"



class ParserEntrada {
public:

	// Parsea la especificación del tipo de entrada se utilizará.
	// PRE: 'tipoEntrada' es el tipo de entrada que se desea usar. Debe
	// pasársele el nombre de archivo en caso de desear utilizar un archivo de 
	// palabras iniciales o el caracter "-" si se desea recibir las palabras 
	// a través de la entrada estándar.
	// POST: se devuelve un puntero a un Receptor.
	Receptor* parsear(const std::string& tipoEntrada);
};


#endif
