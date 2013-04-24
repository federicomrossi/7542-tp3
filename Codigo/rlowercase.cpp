/* ****************************************************************************
 * ****************************************************************************
 * Clase RLOWERCASE
 * ............................................................................
 * La regla transforma los caracteres que están en la posición 'n' hasta la 
 * posición 'm' (inclusive) a minúsculas.
 *
 * ****************************************************************************
 * ***************************************************************************/


#include "rlowercase.h"



// Constructor
RLowercase::RLowercase(int n, int m) : n(n), m(m) { }


// Destructor
RLowercase::~RLowercase() { }


// Aplica la regla sobre una lista de transformaciones
void RLowercase::aplicar(ListaRef< std::string >& lTransformaciones) {
	// Tomamos la palabra sobre la cual debemos aplicar
	std::string s = lTransformaciones.verUltimo();
	int sTamanio = s.size();

	// Verificamos si estamos dentro del rango de la palabra
	if(estaFueraDeRango(sTamanio, this->n, this->m)) return;

	// Convertimos posiciones en posiciones validas respecto al string
	int nn = convertirEnPosicionValida(sTamanio, this->n);
	int mm = convertirEnPosicionValida(sTamanio, this->m);
	
	// Transformamos en minúscula las letras del conjunto
	for(int i = nn; i <= mm; i++)
		s[i] = tolower(s[i]);

	// Insertamos la transformación en la lista
	lTransformaciones.insertarUltimo(s);
}
