/* ****************************************************************************
 * ****************************************************************************
 * Clase RUPPERCASE
 * ****************************************************************************
 * ***************************************************************************/


#ifndef RUPPERCASE_H
#define RUPPERCASE_H


#include "regla.h"



class RUppercase:public Regla {

private:

	int n;		// Posición inicial de transformación
	int m;		// Posición final de transformación

public:

	// Constructor
	RUppercase(int n, int m);

	// Aplica la regla sobre una cola de transformaciones
	void aplicar(Cola< string >& cTransformaciones);
};


#endif
