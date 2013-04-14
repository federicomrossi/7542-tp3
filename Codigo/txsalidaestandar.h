/* ****************************************************************************
 * ****************************************************************************
 * Clase TXSALIDAESTANDAR
 * ****************************************************************************
 * ***************************************************************************/


#ifndef TX_SALIDA_ESTANDAR_H
#define TX_SALIDA_ESTANDAR_H


#include "transmisor.h"



class TxSalidaEstandar:public Transmisor {

public:

	// Constructor
	TxSalidaEstandar();

	// Se ejecuta la transmisión de un dato hacia la salida estándar.
	void transmitir();
};


#endif
