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


// Aplica la regla sobre una pila de transformaciones
void RRevert::aplicar(Pila< std::string >& pTransformaciones) {
	// Creamos pila auxiliar
	Pila< std::string > pAux;

	// Desapilamos i veces
	for(int i = 0; i < this->i; i++) {
		if(!pTransformaciones.estaVacia()) {
			pAux.apilar(pTransformaciones.verTope());
			pTransformaciones.desapilar();
		}
	}

	// Memorizamos el string hacia el que se quiere revertir
	std::string sRevert = pTransformaciones.verTope();

	// Apilamos nuevamente transformaciones intermedias
	while(!pAux.estaVacia()) {
		pTransformaciones.apilar(pAux.verTope());
		pAux.desapilar();
	}

	// Apilamos el string hacia el que se quiere revertir
	pTransformaciones.apilar(sRevert);
}
