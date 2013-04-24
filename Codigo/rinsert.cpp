/* ****************************************************************************
 * ****************************************************************************
 * Clase RINSERT
 * ............................................................................
 * La regla agrega el string 'mmm' en la posición 'i' de una palabra.
 * Si 'i' es positivo, se insertará el substring antes del caractér en la
 * posición 'i'. Si es negativo, se insertará después del caractér en la
 * posición 'i'.
 * Si 'i' es positivo y excede las posiciones válidas de la palabra, se
 * insertará al final, mientras que, si es negativo, se insertará al 
 * principio.
 *
 * ****************************************************************************
 * ***************************************************************************/


#include "rinsert.h"



// Constructor
RInsert::RInsert(int i, const std::string& mmm) {
	this->i = i;
	this->mmm = mmm;
}


// Destructor
RInsert::~RInsert() { }


// Aplica la regla sobre una lista de transformaciones
void RInsert::aplicar(ListaRef< std::string >& lTransformaciones) {
	// Tomamos la palabra sobre la cual debemos aplicar
	std::string s = lTransformaciones.verUltimo();
	int sTamanio = s.size();

	// Convertimos posiciones en posiciones válidas respecto al string
	int ii = convertirEnPosicionValida(sTamanio, this->i);

	// Si 'i' es positivo, se insertará antes del caracter en la posición 'i',
	// a menos que esté fuera de rango, en cuyo caso, se posicionará al final
	// y se insertará antes del caracter de dicha posición final.
	// Si 'i' es negativo, se insertará despues del caracter en la posición 
	// 'i', a menos que esté fuera de rango, en cuyo caso, se posicionará al
	// inicio y se insertará después del caracter de dicha posición inicial. 
	if((estaFueraDeRango(sTamanio, this->i) && (this->i < 0)) || (this->i < 0))
		++ii;

	// Insertamos repetición en string
	s.insert(ii, this->mmm);

	// Insertamos la transformación en la lista
	lTransformaciones.insertarUltimo(s);
}
