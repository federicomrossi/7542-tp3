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

	// Aplica la regla sobre una cola de transformaciones
	void aplicar(Cola< string >& cTransformaciones);
};


#endif
