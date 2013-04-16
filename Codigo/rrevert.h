/* ****************************************************************************
 * ****************************************************************************
 * Clase RREVERT
 * ............................................................................
 * La revierte los efectos de las modificaciones de las últimas i reglas.
 * ****************************************************************************
 * ***************************************************************************/


#ifndef RREVERT_H
#define RREVERT_H


#include "regla.h"



class RRevert:public Regla {

private:

	int i;			// Cantidad de modificaciones de reglas a revertir

public:

	// Constructor
	RRevert(int i);

	// Aplica la regla sobre una pila de transformaciones
	virtual void aplicar(Pila< string >& pTransformaciones);
};


#endif
