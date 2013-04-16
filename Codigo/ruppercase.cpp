/* ****************************************************************************
 * ****************************************************************************
 * Clase RUPPERCASE
 * ............................................................................
 * La regla transforma los caracteres que están en la posición 'n' hasta la 
 * posición 'm' (inclusive) a mayúsculas.
 * ****************************************************************************
 * ***************************************************************************/


#include "ruppercase.h"



// Constructor
RUppercase::RUppercase(int n, int m) {
	this->n = n;
	this->m = m;
}


// Destructor
RUppercase::~RUppercase() { }


// Aplica la regla sobre una pila de transformaciones
void RUppercase::aplicar(Pila< string >& pTransformaciones) {

	// Tomamos la palabra sobre la cual debemos aplicar
	string s = pTransformaciones.verTope();
	int sTamanio = s.size();

	// Verificamos si estamos dentro del rango de la palabra
	if(estaFueraDeRango(sTamanio, this->n, this->m)) return;

	// Convertimos posiciones en posiciones válidas respecto al string
	int nn = convertirEnPosicionValida(sTamanio, this->n);
	int mm = convertirEnPosicionValida(sTamanio, this->m);

	// Transformamos en mayúscula las letras del conjunto
	for(int i = nn; i <= mm; i++)
		s[i] = toupper(s[i]);

	// Apilamos la transformación
	pTransformaciones.apilar(s);
}
