/* ****************************************************************************
 * ****************************************************************************
 * Clase RXARCHIVO
 * ............................................................................
 * Receptor que recibe los datos desde un archivo.
 *
 * ****************************************************************************
 * ***************************************************************************/


#include "rx_archivo.h"



// Constructor
RxArchivo::RxArchivo(const std::string& nombre_archivo) {
	// Abrimos archivo
	this->archivo.open(nombre_archivo.c_str());

	// Verificamos que se halla abierto correctamente
	if(this->archivo.is_open()) activar();
	else desactivar();
}


// Destructor
RxArchivo::~RxArchivo() {
	this->archivo.close();
}

 
// Se ejecuta la recepción de un dato desde la entrada estándar.
// POST: se devuelve la palabra recibida. Debe considerarse terminada la
// recepción de palabras cuando se recibe una cadena vacía, es decir, nada. En
// este caso debe limitarse estrictamente a una palabra por línea del archivo.
std::string RxArchivo::recibir() {
	std::string palabra;
	this->archivo >> palabra;

	return palabra;
}
