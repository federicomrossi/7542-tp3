/* ****************************************************************************
 * ****************************************************************************
 * Clase PARSERENTRADA
 * ****************************************************************************
 * ***************************************************************************/


#ifndef PARSER_ENTRADA_H
#define PARSER_ENTRADA_H


#include "receptor.h"



class ParserEntrada {

public:

	// Parsea la especificación de qué tipo de entrada se utilizará.
	// PRE: 'tipoEntrada' es el tipo de entrada que se desea usar. Debe
	// pasársele el nombre de archivo en caso de desear utilizar un archivo de 
	// palabras iniciales o el caracter "-" si se desea recibir las palabras 
	// a través de la entrada estándar.
	// POST: se devuelve una referencia a un Receptor.
	Receptor& parsear(string& tipoEntrada);
};


#endif
