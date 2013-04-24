/* ****************************************************************************
 * ****************************************************************************
 * Clase RROTATE
 * ............................................................................
 * La regla mueve los caracteres 'n' lugares hacia la derecha en forma
 * circular. Si 'n' es negativo, la rotación se hace hacia la izquierda.
 *
 * ****************************************************************************
 * ***************************************************************************/


#ifndef RROTATE_H
#define RROTATE_H


#include "regla.h"



class RRotate:public Regla {
private:

	int n;				// Cantidad de lugares que deben moverse los caracteres
	bool derecha;		// Rotar hacia la derecha

public:

	// Constructor
	explicit RRotate(int n);

	// Destructor
	~RRotate();

	// Aplica la regla sobre una lista de transformaciones
	virtual void aplicar(ListaRef< std::string >& lTransformaciones);
};


#endif
