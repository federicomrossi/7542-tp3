/* ****************************************************************************
 * ****************************************************************************
 * Clase PARSERENTRADA
 * ****************************************************************************
 * ***************************************************************************/


#include "parser_salida.h"
#include "tx_archivo.h"
#include "tx_salida_estandar.h"



// Parsea la especificación del tipo de salida que se utilizará.
// PRE: 'tipoSalida' es el tipo de salida que se desea usar. Debe
// pasársele el nombre de archivo en caso de desear utilizar un archivo de 
// palabras alteradas o el caracter "-" si se desea enviar las palabras 
// a través de la salida estándar.
// POST: se devuelve un puntero a un Transmisor.
Transmisor* ParserSalida::parsear(const std::string& tipoSalida) {
	// La emisión será a través de la salida estándar
	if(tipoSalida == "-")
		return new TxSalidaEstandar();
	// La emisión se hará a través de un archivo de de salida
	return new TxArchivo(tipoSalida);
}
