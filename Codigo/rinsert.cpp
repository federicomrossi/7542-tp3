/* ****************************************************************************
 * ****************************************************************************
 * Clase RINSERT
 * ............................................................................
 * La regla agrega el string 'mmm' en la posición 'i' de una palabra.
 * Si 'i' es positivo, se insertará el substring antes del caracter en la
 * posición 'i'. Si es negativo, se insertará después del caracter en la
 * posición 'i'.
 * Si 'i' es positivo y excede las posiciones válidas de la palabra, se
 * insertará al final, mientras que, si es negativo, se insertará al 
 * principio.
 * ****************************************************************************
 * ***************************************************************************/


#include "rinsert.h"



// Constructor
RInsert::RInsert(int i, string mmm) {
	this->i = i;
	this->mmm = mmm;
}


// Aplica la regla sobre una pila de transformaciones
void RInsert::aplicar(Pila< string >& pTransformaciones) {
	
	// Tomamos la palabra sobre la cual debemos aplicar
	string s = pTransformaciones.verTope();
	int sTamanio = s.size();

	// Verificamos si estamos dentro del rango de la palabra
	if(estaFueraDeRango(sTamanio, this->i)) return;

	// Convertimos posiciones en posiciones válidas respecto al string
	int ii = convertirEnPosicionValida(sTamanio, this->i);

	// Si 'i' es negativo, la posición a insertar deberá ser después del
	// caracter en la posición 'i'. Si 'i' es positivo y excede las posiciones
	// válidas de la palabra, se inserta al final, mientras que, si es
	// negativo, se inserta al principio
	if(((this->i < 0) && !((sTamanio + this->i) < 0)) || 
		(this->i > (sTamanio-1))) ++ii;

	// Insertamos repetición en string
	s.insert(ii, this->mmm);

	// Apilamos la transformación
	pTransformaciones.apilar(s);
}
