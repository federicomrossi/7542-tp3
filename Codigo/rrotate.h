/* ****************************************************************************
 * ****************************************************************************
 * Clase RROTATE
 * ****************************************************************************
 * ***************************************************************************/


#ifndef RROTATE_H
#define RROTATE_H


#include "regla.h"



class RRotate:public Regla {

private:

	int n;		// Cantidad de lugares que deben moverse los caracteres

public:

	// Constructor
	RRotate(int n);

	// Aplica la regla sobre una cola de transformaciones
	void aplicar(Cola< string >& cTransformaciones);
};


#endif
