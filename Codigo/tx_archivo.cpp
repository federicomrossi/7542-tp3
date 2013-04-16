/* ****************************************************************************
 * ****************************************************************************
 * Clase TXARCHIVO
 * ............................................................................
 * Transmisor que transmite los datos hacia un archivo de salida. El archivo de
 * salida se crea si no existe, y de existir, no se trunca, sino que se siguen
 * escribiendo las transmisiones al final del archivo.
 *
 * ****************************************************************************
 * ***************************************************************************/


#include "tx_archivo.h"



// Constructor
TxArchivo::TxArchivo(const std::string& nombre_archivo) {
	this->archivo.open(nombre_archivo.c_str(), std::ios::app);
	
	// Verificamos que se halla abierto correctamente
	if(this->archivo.is_open()) activar();
	else desactivar();
}


// Destructor
TxArchivo::~TxArchivo() {
	this->archivo.close();
}


// Se ejecuta la transmisión de un dato hacia un archivo.
void TxArchivo::transmitir(const std::string& palabra) {
	this->archivo << palabra << std::endl;
}
