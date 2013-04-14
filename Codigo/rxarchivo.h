/* ****************************************************************************
 * ****************************************************************************
 * Clase RXARCHIVO
 * ****************************************************************************
 * ***************************************************************************/


#ifndef RX_ARCHIVO_H
#define RX_ARCHIVO_H


#include "receptor.h"



class RxArchivo:public Receptor {

public:

	// Constructor
	RxArchivo();

	// Se ejecuta la recepción de un dato desde un archivo.
	virtual void recibir();
};


#endif
