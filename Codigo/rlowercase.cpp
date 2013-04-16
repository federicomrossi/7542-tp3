/* ****************************************************************************
 * ****************************************************************************
 * Clase RLOWERCASE
 * ............................................................................
 * La regla transforma los caracteres que están en la posición 'n' hasta la 
 * posición 'm' (inclusive) a minúsculas.
 * ****************************************************************************
 * ***************************************************************************/


#include "rlowercase.h"



// Constructor
RLowercase::RLowercase(int n, int m) {
	this->n = n;
	this->m = m;
}


// Destructor
RLowercase::~RLowercase() { }


// Aplica la regla sobre una pila de transformaciones
void RLowercase::aplicar(Pila< string >& pTransformaciones) {
	
	// Tomamos la palabra sobre la cual debemos aplicar
	string s = pTransformaciones.verTope();
	int sTamanio = s.size();

	// Verificamos si estamos dentro del rango de la palabra
	if(estaFueraDeRango(sTamanio, this->n, this->m)) return;

	// Convertimos posiciones en posiciones validas respecto al string
	int nn = convertirEnPosicionValida(sTamanio, this->n);
	int mm = convertirEnPosicionValida(sTamanio, this->m);
	
	// Transformamos en minúscula las letras del conjunto
	for(int i = nn; i <= mm; i++)
		s[i] = tolower(s[i]);

	// Apilamos la transformación
	pTransformaciones.apilar(s);
}
