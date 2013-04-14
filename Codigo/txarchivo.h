/* ****************************************************************************
 * ****************************************************************************
 * Clase TXARCHIVO
 * ****************************************************************************
 * ***************************************************************************/


#ifndef TX_ARCHIVO_H
#define TX_ARCHIVO_H


#include "transmisor.h"



class TxArchivo:public Transmisor {

public:

	// Constructor
	TxArchivo();

	// Se ejecuta la transmisión de un dato hacia un archivo.
	void transmitir();
};


#endif
