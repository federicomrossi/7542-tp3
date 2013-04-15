/* ****************************************************************************
 * ****************************************************************************
 * Clase TXARCHIVO
 * ****************************************************************************
 * ***************************************************************************/


#include "tx_archivo.h"



// Constructor
TxArchivo::TxArchivo(const string& nombre_archivo) {
	this->archivo.open(nombre_archivo.c_str(), ios::app);
}


// Destructor
TxArchivo::~TxArchivo() {
	this->archivo.close();
}


// Se ejecuta la transmisión de un dato hacia un archivo.
void TxArchivo::transmitir(const string& palabra) {
	this->archivo << palabra << endl;
}
