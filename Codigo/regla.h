/* ****************************************************************************
 * ****************************************************************************
 * Clase REGLA
 * ****************************************************************************
 * ***************************************************************************/

#ifndef REGLA_H
#define REGLA_H


#include <iostream>
#include "cola.h"

using namespace std;



class Regla {

public:

	// Aplica la regla sobre una cola de transformaciones.
	virtual void aplicar(Cola< string >& cTransformaciones) = 0;
};


#endif
