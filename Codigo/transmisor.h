/* ****************************************************************************
 * ****************************************************************************
 * Clase TRANSMISOR
 * ****************************************************************************
 * ***************************************************************************/

#ifndef TRANSMISOR_H
#define TRANSMISOR_H

#include <iostream>
using namespace std;



class Transmisor {

public:

	// Destructor
	virtual ~Transmisor() { };

	// Se ejecuta la transmisión de un dato.
	virtual void transmitir(const string& palabra) = 0;
};


#endif
