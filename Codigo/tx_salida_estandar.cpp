/* ****************************************************************************
 * ****************************************************************************
 * Clase TXSALIDAESTANDAR
 * ............................................................................
 * Transmisor que emite resultados hacia la salida estándar.
 *
 * ****************************************************************************
 * ***************************************************************************/


#include "tx_salida_estandar.h"



// Constructor
TxSalidaEstandar::TxSalidaEstandar() {
	activar();
}


// Se ejecuta la transmisión de un dato hacia la salida estándar.
void TxSalidaEstandar::transmitir(const std::string& palabra) {
	std::cout << palabra << std::endl;
}

