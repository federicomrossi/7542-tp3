/* ****************************************************************************
 * ****************************************************************************
 * Clase RPRINT
 * ****************************************************************************
 * ***************************************************************************/


#ifndef RPRINT_H
#define RPRINT_H


#include "regla.h"
#include "transmisor.h"



class RPrint:public Regla {

private:

	Transmisor *tx;			// Transmisor del dato

public:

	// Constructor
	RPrint(Transmisor *tx);

	// Aplica la regla sobre una pila de transformaciones. La regla emite la
	// última modificación realizada.
	void aplicar(Pila< string >& pTransformaciones);
};


#endif
