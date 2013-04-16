/* ****************************************************************************
 * ****************************************************************************
 * Clase RXENTRADAESTANDAR
 * ............................................................................
 * Receptor que recibe los datos desde la entrada estándar.
 *
 * ****************************************************************************
 * ***************************************************************************/


#ifndef RX_ENTRADA_ESTANDAR_H
#define RX_ENTRADA_ESTANDAR_H


#include "receptor.h"



class RxEntradaEstandar:public Receptor {
public:

	// Constructor
	RxEntradaEstandar();

	// Se ejecuta la recepción de un dato desde la entrada estándar.
	// PRE: Se debe ingresar una palabra sin espacios.
	// POST: se devuelve la palabra recibida. Debe considerarse terminada la
	// recepción de palabras cuando se recibe una cadena vacía, es decir, nada. 
	// Debe enviarse una única palabra a la vez, quedando terminantemente prohibido
	// enviar una cadena que conste de mas de una palabra.
	virtual std::string recibir();
};


#endif
