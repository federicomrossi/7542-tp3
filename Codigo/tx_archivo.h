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


#ifndef TX_ARCHIVO_H
#define TX_ARCHIVO_H


#include "transmisor.h"
#include <fstream>



class TxArchivo:public Transmisor {
private:

	std::ofstream archivo;		// Archivo en donde se escriben las palabras
								// alteradas

public:

	// Constructor
	explicit TxArchivo(const std::string& nombre_archivo);

	// Destructor
	~TxArchivo();

	// Se ejecuta la transmisión de un dato hacia un archivo. Se almacena
	// una palabra por línea.
	void transmitir(const std::string& palabra);
};

#endif
