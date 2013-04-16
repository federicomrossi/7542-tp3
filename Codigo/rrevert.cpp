/* ****************************************************************************
 * ****************************************************************************
 * Clase RREVERT
 * ............................................................................
 * La revierte los efectos de las modificaciones de las últimas i reglas.
 * ****************************************************************************
 * ***************************************************************************/


#include "rrevert.h"



// Constructor
RRevert::RRevert(int i) {
	this->i = i;
}


// Aplica la regla sobre una pila de transformaciones
void RRevert::aplicar(Pila< string >& pTransformaciones) {
	
	// Desapilamos i veces
	for(int i=0; i++ < this->i; pTransformaciones.desapilar());
}
