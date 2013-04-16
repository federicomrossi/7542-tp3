/* ****************************************************************************
 * ****************************************************************************
 * Clase PARSERENTRADA
 * ****************************************************************************
 * ***************************************************************************/


#include "parser_entrada.h"
#include "rx_archivo.h"
#include "rx_entrada_estandar.h"



// Parsea la especificación del tipo de entrada se utilizará.
// PRE: 'tipoEntrada' es el tipo de entrada que se desea usar. Debe
// pasársele el nombre de archivo en caso de desear utilizar un archivo de 
// palabras iniciales o el caracter "-" si se desea recibir las palabras 
// a través de la entrada estándar.
// POST: se devuelve un puntero a un Receptor.
Receptor* ParserEntrada::parsear(const std::string& tipoEntrada) {
	// El ingreso será a través de la entrada estándar
	if(tipoEntrada == "-")
		return new RxEntradaEstandar();		

	// El ingreso se hará a través de un archivo de entrada
	return new RxArchivo(tipoEntrada);
}
