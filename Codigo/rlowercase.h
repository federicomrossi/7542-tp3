/* ****************************************************************************
 * ****************************************************************************
 * Clase RLOWERCASE
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

	// Aplica la regla sobre una cola de transformaciones
	void aplicar(Cola< string >& cTransformaciones);
};


#endif
