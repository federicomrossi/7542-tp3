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


// Aplica la regla sobre una pila de transformaciones
void RLowercase::aplicar(Pila< string >& pTransformaciones) {
	
	// Tomamos la palabra sobre la cual debemos aplicar
	string s = pTransformaciones.verTope();
	int sTamanio = s.size();

	// Convertimos posiciones en posiciones validas respecto al string
	int nn = _convertirEnPosicionValida(sTamanio, this->n);
	int mm = _convertirEnPosicionValida(sTamanio, this->m);

	// No hay rango efectivo sobre el cual poder aplicar
	if(nn > mm) return;

	// Transformamos en minúscula las letras del conjunto
	for(int i = nn; i <= mm; i++)
		s[i] = s[i] - 'A' + 'a';

	// Apilamos la transformación
	pTransformaciones.apilar(s);
}


// Convierte una posición de entrada en una posición válida de un string
// PRE: 'sTamanio' es el tamaño del string al que se refiere; 'pos' es la
// posición del string.
// POST: si 'pos' es negativa, se convierte en una posición válida
// positiva, considerando que en caso de desborde se devolverá la primer
// posición del string; si 'pos' es positiva y supera el tamaño del string,
// se devuelve la última posición de este.
int RLowercase::_convertirEnPosicionValida(int sTamanio, int pos) {

	if(pos < 0) {
		int posValida = sTamanio + pos;
		if(posValida < 0) return 0;
		return posValida;
	}
	else if(pos > sTamanio - 1) return (sTamanio - 1);

	return pos;
}
