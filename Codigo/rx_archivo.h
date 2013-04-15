/* ****************************************************************************
 * ****************************************************************************
 * Clase RXARCHIVO
 * ****************************************************************************
 * ***************************************************************************/


#ifndef RX_ARCHIVO_H
#define RX_ARCHIVO_H


#include "receptor.h"

#include <iostream>
#include <fstream>
using namespace std;


class RxArchivo:public Receptor {

private:

	ifstream archivo;		// Archivo del que se toman las palabras

public:

	// Constructor
	RxArchivo(const string& nombre_archivo);

	// Destructor
	~RxArchivo();

	// Se ejecuta la recepción de un dato desde la entrada estándar.
	// POST: se devuelve la palabra recibida. Debe considerarse terminada la
	// recepción de palabras cuando se recibe una cadena vacía, es decir, nada. En
	// este caso debe limitarse estrictamente a una palabra por línea del archivo.
	virtual string recibir();
};


#endif
