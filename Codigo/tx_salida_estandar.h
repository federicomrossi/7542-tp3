/* ****************************************************************************
 * ****************************************************************************
 * Clase TXSALIDAESTANDAR
 * ............................................................................
 * Transmisor que emite resultados hacia la salida estándar.
 *
 * ****************************************************************************
 * ***************************************************************************/


#ifndef TX_SALIDA_ESTANDAR_H
#define TX_SALIDA_ESTANDAR_H


#include <string>
#include "transmisor.h"



class TxSalidaEstandar:public Transmisor {
public:

	TxSalidaEstandar();

	// Se ejecuta la transmisión de un dato hacia la salida estándar.
	virtual void transmitir(const std::string& palabra);
};

#endif
