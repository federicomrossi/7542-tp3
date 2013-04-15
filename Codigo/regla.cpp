/* ****************************************************************************
 * ****************************************************************************
 * Clase REGLA
 * ****************************************************************************
 * ***************************************************************************/


#include "regla.h"



// Convierte una posición de entrada en una posición válida de un string
// PRE: 'sTamanio' es el tamaño del string al que se refiere; 'pos' es la
// posición del string.
// POST: si 'pos' es negativa, se convierte en una posición válida
// positiva, considerando que en caso de desborde se devolverá la primer
// posición del string; si 'pos' es positiva y supera el tamaño del string,
// se devuelve la última posición de este.
int Regla::convertirEnPosicionValida(int sTamanio, int pos) {

	if(pos < 0) {
		int posValida = sTamanio + pos;
		if(posValida < 0) return 0;
		return posValida;
	}
	else if(pos > sTamanio - 1) return (sTamanio - 1);

	return pos;
}


// Verifica si existe intersección entre el intervalo sobre el cual se 
// quiere aplicar la arregla y el tamaño real de la palabra.
// PRE: 'sTamanio' es el tamaño de la palabra; 'n' es la posición inicial
// del substring; 'm' es la posición final del substring. 'n' debe ser
// menor o igual que 'm'.
// POST: devuelve true si el intervalo se encuentra dentro del rango o
// false en su defecto.
bool Regla::estaFueraDeRango(int sTamanio, int n, int m) {

	// Caso en que los extremos son inconsistentes
	if(n > m) return true;
	// Caso en que ambos son negativos y están fuera de rango
	else if((n<0) && (m<0) && ((n+sTamanio) <0) && ((m+sTamanio) <0)) return true;
	// Caso en que ambos son positivos y están fuera de rango
	else if((n>0) && (m>0) && (n> sTamanio-1) && (m> sTamanio-1)) return true;

	return false;
}


// Verifica si la posición 'i' se encuentra fuera de rango en referencia a
// la palabra.
// PRE: 'sTamanio' es el tamaño de la palabra; 'i' es una posición.
// POST: devuelve true si la posición es una posición dentro de la cadena o
// false en su defecto.
bool Regla::estaFueraDeRango(int sTamanio, int i) {

	// Caso en que es negativo y está fuera de rango
	if((i<0) && ((i+sTamanio) <0)) return true;
	// Caso en que es positivo y está fuera de rango
	else if((i>0) && (i> sTamanio-1)) return true;

	return false;
}