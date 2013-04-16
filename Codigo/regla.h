/* ****************************************************************************
 * ****************************************************************************
 * Clase REGLA
 * ****************************************************************************
 * ***************************************************************************/


#ifndef REGLA_H
#define REGLA_H


#include <iostream>
#include "pila.h"

using namespace std;



class Regla {

public:

	// Destructor
	virtual ~Regla();

	// Aplica la regla sobre una pila de transformaciones.
	virtual void aplicar(Pila< string >& pTransformaciones) = 0;


protected:

	// Convierte una posición de entrada en una posición válida de un string
	// PRE: 'sTamanio' es el tamaño del string al que se refiere; 'pos' es la
	// posición del string.
	// POST: si 'pos' es negativa, se convierte en una posición válida
	// positiva, considerando que en caso de desborde se devolverá la primer
	// posición del string; si 'pos' es positiva y supera el tamaño del string,
	// se devuelve la última posición de este.
	int convertirEnPosicionValida(int sTamanio, int pos);

	// Verifica si existe intersección entre el intervalo sobre el cual se 
	// quiere aplicar la arregla y el tamaño real de la palabra.
	// PRE: 'sTamanio' es el tamaño de la palabra; 'n' es la posición inicial
	// del substring; 'm' es la posición final del substring. 'n' debe ser
	// menor o igual que 'm'.
	// POST: devuelve true si el intervalo se encuentra dentro del rango o
	// false en su defecto.
	bool estaFueraDeRango(int sTamanio, int n, int m);

	// Verifica si la posición 'i' se encuentra fuera de rango en referencia a
	// la palabra.
	// PRE: 'sTamanio' es el tamaño de la palabra; 'i' es una posición.
	// POST: devuelve true si la posición es una posición dentro de la cadena o
	// false en su defecto.
	bool estaFueraDeRango(int sTamanio, int i);

};

#endif
