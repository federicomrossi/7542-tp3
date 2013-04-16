/* ****************************************************************************
 * ****************************************************************************
 * Clase RROTATE
 * ............................................................................
 * La regla mueve los caracteres 'n' lugares hacia la derecha en forma
 * circular. Si 'n' es negativo, la rotación se hace hacia la izquierda.
 * ****************************************************************************
 * ***************************************************************************/


#include "rrotate.h"



// Constructor
RRotate::RRotate(int n) {
	
	if(n >= 0) {
		this->derecha = true;
		this->n = n;
	}
	else {
		this->derecha = false;
		this->n = n * (-1);
	}
}


// Destructor
RRotate::~RRotate() { }


// Aplica la regla sobre una pila de transformaciones
void RRotate::aplicar(Pila< string >& pTransformaciones) {
	
	// Tomamos la palabra sobre la cual debemos aplicar
	string s = pTransformaciones.verTope();
	int sTamanio = s.size();

	for(int j=0; j < this->n; j++) {
		// Rotamos hacia la derecha
		if(this->derecha) {
			// Guardamos el último caractér que será el último en moverse
			char u = s[sTamanio-1];
			for(int i = sTamanio-1; i >= 1; i--) s[i] = s[i-1];
			s[0] = u;
		}
		// Rotamos hacia la izquierda
		else {
			// Guardamos el primer caractér que será el último en moverse
			char u = s[0];
			for(int i = 0; i < (sTamanio-1); i++) s[i] = s[i+1];
			s[sTamanio-1] = u;
		}
	}

	// Apilamos la transformación
	pTransformaciones.apilar(s);
}
		
