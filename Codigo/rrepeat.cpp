/* ****************************************************************************
 * ****************************************************************************
 * Clase RREPEAT
 * ............................................................................
 * La regla copia el substring delimitado por 'n' y 'm', lo repite 'r' veces
 * y lo inserta en la posición 'i'.
 * Si 'i' es positivo, se insertará el substring antes del caractér en la
 * posición 'i'. Si es negativo, se insertará después del caractér en la
 * posición 'i'.
 * Si 'i' es positivo y excede las posiciones válidas de la palabra, se
 * insertará al final, mientras que, si es negativo, se insertará al 
 * principio.
 *
 * ****************************************************************************
 * ***************************************************************************/


#include "rrepeat.h"



// Constructor
RRepeat::RRepeat(int n, int m, int r, int i) {
	this->n = n;
	this->m = m;
	this->r = r;
	this->i = i;
}


// Destructor
RRepeat::~RRepeat() { }


// Aplica la regla sobre una pila de transformaciones
void RRepeat::aplicar(Pila< std::string >& pTransformaciones) {
	// Tomamos la palabra sobre la cual debemos aplicar
	std::string s = pTransformaciones.verTope();
	int sTamanio = s.size();

	// Verificamos si estamos dentro del rango de la palabra
	if(estaFueraDeRango(sTamanio, this->n, this->m)) return;

	// Convertimos posiciones en posiciones válidas respecto al string
	int nn = convertirEnPosicionValida(sTamanio, this->n);
	int mm = convertirEnPosicionValida(sTamanio, this->m);
	int ii = convertirEnPosicionValida(sTamanio, this->i);

	// Tomamos el substring y generamos el string repetido a insertar
	std::string sToRepeat = s.substr(nn, mm-nn+1);
	std::string sToAppend = sToRepeat;
	for(int i = 0; ++i < this->r; sToAppend.append(sToRepeat));

	// Si 'i' es negativo, la posición a insertar deberá ser después del
	// caracter en la posición 'i'. Si 'i' es positivo y excede las posiciones
	// válidas de la palabra, se inserta al final, mientras que, si es
	// negativo, se inserta al principio
	if(((this->i < 0) && !((sTamanio + this->i) < 0)) || 
		(this->i > (sTamanio-1))) ++ii;

	// Insertamos repetición en string
	s.insert(ii, sToAppend);

	// Apilamos la transformación
	pTransformaciones.apilar(s);
}
