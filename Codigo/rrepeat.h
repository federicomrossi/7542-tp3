/* ****************************************************************************
 * ****************************************************************************
 * Clase RREPEAT
 * ............................................................................
 * La regla copia el substring delimitado por 'n' y 'm', lo repite 'r' veces
 * y lo inserta en la posición 'i'.
 * Si 'i' es positivo, se insertará el substring antes del caractér en la
 * posición 'i'. Si es negativo, se insertará después del caractér en la
 * posición 'i'.
 * Si 'i' es positivo y excede las posiciones válidas de la palabra, se
 * insertará al final, mientras que, si es negativo, se insertará al 
 * principio.
 *
 * ****************************************************************************
 * ***************************************************************************/


#ifndef RREPEAT_H
#define RREPEAT_H


#include "regla.h"



class RRepeat:public Regla {
private:

	int n;		// Posición inicial del substring
	int m;		// Posición final del substring
	int r;		// Cantidad de repeticiones del substring
	int i;		// Posición en donde se debe insertar los substrings

public:

	// Constructor
	RRepeat(int n, int m, int r, int i);

	// Destructor
	~RRepeat();

	// Aplica la regla sobre una pila de transformaciones
	virtual void aplicar(Pila< std::string >& pTransformaciones);
};


#endif
