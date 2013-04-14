/* ****************************************************************************
 * ****************************************************************************
 * Clase RREVERT
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

	// Aplica la regla sobre una cola de transformaciones
	void aplicar(Cola< string >& cTransformaciones);
};


#endif
