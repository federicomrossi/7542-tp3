/* ****************************************************************************
 * ****************************************************************************
 * Clase RUPPERCASE
 * ............................................................................
 * La regla transforma los caracteres que están en la posición 'n' hasta la 
 * posición 'm' (inclusive) a mayúsculas.
 *
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

	// Destructor
	~RUppercase();

	// Aplica la regla sobre una lista de transformaciones.
	virtual void aplicar(ListaRef< std::string >& lTransformaciones);
};

#endif
