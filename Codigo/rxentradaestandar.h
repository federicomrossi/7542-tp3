/* ****************************************************************************
 * ****************************************************************************
 * Clase RXENTRADAESTANDAR
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
	virtual void recibir();
};


#endif
