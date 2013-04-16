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

	int n;				// Cantidad de lugares que deben moverse los caracteres
	bool derecha;		// Rotar hacia la derecha

public:

	// Constructor
	RRotate(int n);

	// Destructor
	~RRotate();

	// Aplica la regla sobre una pila de transformaciones
	virtual void aplicar(Pila< string >& pTransformaciones);

};


#endif
