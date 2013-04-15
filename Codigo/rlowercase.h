/* ****************************************************************************
 * ****************************************************************************
 * Clase RLOWERCASE
 * ............................................................................
 * La regla transforma los caracteres que están en la posición 'n' hasta la 
 * posición 'm' (inclusive) a minúsculas.
 * ****************************************************************************
 * ***************************************************************************/


#ifndef RLOWERCASE_H
#define RLOWERCASE_H


#include "regla.h"



class RLowercase:public Regla {

private:
	
	int n;		// Posición inicial de transformación
	int m;		// Posición final de transformación

public:

	// Constructor
	RLowercase(int n, int m);

	// Aplica la regla sobre una pila de transformaciones
	void aplicar(Pila< string >& pTransformaciones);

private:

	// Convierte una posición de entrada en una posición válida de un string
	// PRE: 'sTamanio' es el tamaño del string al que se refiere; 'pos' es la
	// posición del string.
	// POST: si 'pos' es negativa, se convierte en una posición válida
	// positiva, considerando que en caso de desborde se devolverá la primer
	// posición del string; si 'pos' es positiva y supera el tamaño del string,
	// se devuelve la última posición de este.
	int _convertirEnPosicionValida(int sTamanio, int pos);

};


#endif
