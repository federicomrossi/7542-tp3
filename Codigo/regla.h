/* ****************************************************************************
 * ****************************************************************************
 * Clase REGLA
 * ****************************************************************************
 * ***************************************************************************/

#ifndef REGLA_H
#define REGLA_H


#include <iostream>
#include "pila.h"

using namespace std;



class Regla {

public:

	// Aplica la regla sobre una pila de transformaciones.
	virtual void aplicar(Pila< string >& pTransformaciones) = 0;
};


#endif
