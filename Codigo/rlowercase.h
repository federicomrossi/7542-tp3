/* ****************************************************************************
 * ****************************************************************************
 * Clase RLOWERCASE
 * ............................................................................
 * La regla transforma los caracteres que están en la posición 'n' hasta la 
 * posición 'm' (inclusive) a minúsculas.
 * ****************************************************************************
 * ***************************************************************************/


#ifndef RLOWERCASE_H
#define RLOWERCASE_H


#include "regla.h"



class RLowercase:public Regla {

private:
	
	int n;		// Posición inicial de transformación
	int m;		// Posición final de transformación

public:

	// Constructor
	RLowercase(int n, int m);

	// Destructor
	~RLowercase();

	// Aplica la regla sobre una pila de transformaciones
	virtual void aplicar(Pila< string >& pTransformaciones);
};


#endif
