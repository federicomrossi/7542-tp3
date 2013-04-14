/* ****************************************************************************
 * ****************************************************************************
 * Clase RINSERT
 * ****************************************************************************
 * ***************************************************************************/


#ifndef RINSERT_H
#define RINSERT_H


#include "regla.h"



class RInsert:public Regla {

private:

	int i;				// Posición donde se debe insertar el string
	string mmm;			// String a agregar

public:

	// Constructor
	RInsert(int i, string mmm);

	// Aplica la regla sobre una cola de transformaciones
	void aplicar(Cola< string >& cTransformaciones);
};


#endif
