/* ****************************************************************************
 * ****************************************************************************
 * Clase TXARCHIVO
 * ****************************************************************************
 * ***************************************************************************/


#ifndef TX_ARCHIVO_H
#define TX_ARCHIVO_H


#include "transmisor.h"
#include <fstream>



class TxArchivo:public Transmisor {

private:

	ofstream archivo;		// Archivo en donde se escriben las palabras
							// alteradas

public:

	// Constructor
	TxArchivo(const string& nombre_archivo);

	// Destructor
	~TxArchivo();

	// Se ejecuta la transmisión de un dato hacia un archivo. Se almacena
	// una palabra por línea.
	void transmitir(const string& palabra);
};


#endif
