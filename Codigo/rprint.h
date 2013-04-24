/* ****************************************************************************
 * ****************************************************************************
 * Clase RPRINT
 * ............................................................................
 * La regla transmite el resultado de la transformación mas reciente.
 *
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
	explicit RPrint(Transmisor *tx);

	// Destructor
	~RPrint();

	// Aplica la regla sobre una lista de transformaciones. La regla emite la
	// última modificación realizada.
	virtual void aplicar(ListaRef< std::string >& lTransformaciones);
};


#endif
