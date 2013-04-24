/* ****************************************************************************
 * ****************************************************************************
 * Clase RUPPERCASE
 * ............................................................................
 * La regla transforma los caracteres que están en la posición 'n' hasta la 
 * posición 'm' (inclusive) a mayúsculas.
 *
 * ****************************************************************************
 * ***************************************************************************/


#include "ruppercase.h"



// Constructor
RUppercase::RUppercase(int n, int m) : n(n), m(m) { }


// Destructor
RUppercase::~RUppercase() { }


// Aplica la regla sobre una lista de transformaciones
void RUppercase::aplicar(ListaRef< std::string >& lTransformaciones) {
	// Tomamos la palabra sobre la cual debemos aplicar
	std::string s = lTransformaciones.verUltimo();
	int sTamanio = s.size();

	// Verificamos si estamos dentro del rango de la palabra
	if(estaFueraDeRango(sTamanio, this->n, this->m)) return;

	// Convertimos posiciones en posiciones válidas respecto al string
	int nn = convertirEnPosicionValida(sTamanio, this->n);
	int mm = convertirEnPosicionValida(sTamanio, this->m);

	// Transformamos en mayúscula las letras del conjunto
	for(int i = nn; i <= mm; i++)
		s[i] = toupper(s[i]);

	// Insertamos la transformación en la lista
	lTransformaciones.insertarUltimo(s);
}
