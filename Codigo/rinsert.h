/* ****************************************************************************
 * ****************************************************************************
 * Clase RINSERT
 * ............................................................................
 * La regla agrega el string 'mmm' en la posición 'i' de una palabra.
 * Si 'i' es positivo, se insertará el substring antes del caracter en la
 * posición 'i'. Si es negativo, se insertará después del caracter en la
 * posición 'i'.
 * Si 'i' es positivo y excede las posiciones válidas de la palabra, se
 * insertará al final, mientras que, si es negativo, se insertará al 
 * principio.
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

	// Aplica la regla sobre una pila de transformaciones
	virtual void aplicar(Pila< string >& pTransformaciones);
};


#endif
