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


// Destructor
RRevert::~RRevert() { }


// Aplica la regla sobre una pila de transformaciones
void RRevert::aplicar(Pila< string >& pTransformaciones) {
	
	// Creamos pila auxiliar
	Pila< string > pAux;

	// Desapilamos i veces
	for(int i=0; i++ < this->i; pAux.apilar(pTransformaciones.desapilar()));

	// Memorizamos el string hacia el que se quiere revertir
	string sRevert = pTransformaciones.verTope();

	// Apilamos nuevamente transformaciones intermedias
	while(!pAux.estaVacia())
		pTransformaciones.apilar(pAux.desapilar());

	// Apilamos el string hacia el que se quiere revertir
	pTransformaciones.apilar(sRevert);
}
