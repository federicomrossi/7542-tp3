/* ****************************************************************************
 * ****************************************************************************
 * Clase RPRINT
 * ............................................................................
 * La regla transmite el resultado de la transformación mas reciente.
 *
 * ****************************************************************************
 * ***************************************************************************/


#include "rrevert.h"



// Constructor
RRevert::RRevert(int i) {
	this->i = i;
}


// Destructor
RRevert::~RRevert() { }


// Aplica la regla sobre una lista de transformaciones
// POST: Si la lista contiene menos cantidad de transformaciones que las que se
// desean revertir no se revierte nada, queda como estaba la lista.
void RRevert::aplicar(ListaRef< std::string >& lTransformaciones) {
	// Calculamos la posición a la que hay que revertir
	int pos = lTransformaciones.tamanio() - this->i - 1;

	// Verificamos si hay elementos y que la cantidad a revertir sea válida
	if(lTransformaciones.estaVacia() || pos < 0) return;

	// Insertamos la transformación en la lista
	lTransformaciones.insertarUltimo(lTransformaciones[pos]);
}
