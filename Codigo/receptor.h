/* ****************************************************************************
 * ****************************************************************************
 * Clase RECEPTOR
 * ****************************************************************************
 * ***************************************************************************/

#ifndef RECEPTOR_H
#define RECEPTOR_H

#include <iostream>
using namespace std;



class Receptor {

public:

	// Destructor
	virtual ~Receptor() { };

	// Se ejecuta la recepción de un dato desde la entrada estándar.
	// POST: se devuelve la palabra recibida. Debe considerarse terminada la
	// recepción de palabras cuando se recibe una cadena vacía, es decir, nada.
	virtual string recibir() = 0;
};


#endif
