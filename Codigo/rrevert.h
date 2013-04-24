/* ****************************************************************************
 * ****************************************************************************
 * Clase RREVERT
 * ............................................................................
 * La regla revierte los efectos de las modificaciones de las últimas i reglas.
 *
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
	explicit RRevert(int i);

	// Destructor
	~RRevert();

	// Aplica la regla sobre una lista de transformaciones
	virtual void aplicar(ListaRef< std::string >& lTransformaciones);
};


#endif
