/* ****************************************************************************
 * ****************************************************************************
 * Clase RXENTRADAESTANDAR
 * ****************************************************************************
 * ***************************************************************************/


#include "rx_entrada_estandar.h"



// Constructor
RxEntradaEstandar::RxEntradaEstandar() {
	activar();
}


// Se ejecuta la recepción de un dato desde la entrada estándar.
// POST: se devuelve la palabra recibida. Debe considerarse terminada la
// recepción de palabras cuando se recibe una cadena vacía, es decir, nada. 
// Debe enviarse una única palabra a la vez, quedando terminantemente prohibido
// enviar una cadena que conste de mas de una palabra.
string RxEntradaEstandar::recibir() {

	string palabra;
	getline(cin, palabra);

	return palabra;
}
