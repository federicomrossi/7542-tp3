/* ****************************************************************************
 * ****************************************************************************
 * Clase RLOWERCASE
 * ****************************************************************************
 * ***************************************************************************/


#ifndef RREPEAT_H
#define RREPEAT_H


#include "regla.h"



class RRepeat:public Regla {

private:

	int n;		// Posición inicial del substring
	int m;		// Posición final del substring
	int r;		// Cantidad de repeticiones del substring
	int i;		// Posición en donde se debe insertar los substrings

public:

	// Constructor
	RRepeat(int n, int m, int r, int i);

	// Aplica la regla sobre una pila de transformaciones
	void aplicar(Pila< string >& pTransformaciones);
};


#endif
