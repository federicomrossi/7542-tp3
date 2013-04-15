/* ****************************************************************************
 * ****************************************************************************
 * Clase PARSERENTRADA
 * ****************************************************************************
 * ***************************************************************************/


#include <iostream>
#include "parser_salida.h"
#include "tx_archivo.h"
#include "tx_salida_estandar.h"


// Parsea la especificación de qué tipo de salida se utilizará.
// PRE: 'tipoSalida' es el tipo de salida que se desea usar. Debe
// pasársele el nombre de archivo en caso de desear utilizar un archivo de 
// palabras alteradas o el caracter "-" si se desea enviar las palabras 
// a través de la salida estándar.
// POST: se devuelve una referencia a un Transmisor.
Transmisor* ParserSalida::parsear(const string& tipoSalida) {

	if(tipoSalida == "-")
		return new TxSalidaEstandar();		

	return new TxArchivo(tipoSalida);
}
