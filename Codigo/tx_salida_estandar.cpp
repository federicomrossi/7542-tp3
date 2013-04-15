/* ****************************************************************************
 * ****************************************************************************
 * Clase TXSALIDAESTANDAR
 * ****************************************************************************
 * ***************************************************************************/


#include "tx_salida_estandar.h"


// Se ejecuta la transmisión de un dato hacia la salida estándar.
void TxSalidaEstandar::transmitir(const string& palabra) {
	cout << palabra << endl;
}
