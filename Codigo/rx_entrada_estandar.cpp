/* ****************************************************************************
 * ****************************************************************************
 * Clase RXENTRADAESTANDAR
 * ............................................................................
 * Receptor que recibe los datos desde la entrada estándar.
 *
 * ****************************************************************************
 * ***************************************************************************/


#include <iostream>
#include "rx_entrada_estandar.h"



// Constructor
RxEntradaEstandar::RxEntradaEstandar() {
	activar();
}


// Se ejecuta la recepción de un dato desde la entrada estándar.
// PRE: Se debe ingresar una palabra sin espacios.
// POST: se devuelve la palabra recibida. Debe considerarse terminada la
// recepción de palabras cuando se recibe una cadena vacía, es decir, nada. 
// Debe enviarse una única palabra a la vez, quedando terminantemente prohibido
// enviar una cadena que conste de mas de una palabra.
std::string RxEntradaEstandar::recibir() {
	std::string palabra;
	getline(std::cin, palabra);

	return palabra;
}
