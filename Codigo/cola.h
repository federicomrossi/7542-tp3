/* ****************************************************************************
 * ****************************************************************************
 * Clase COLA
 * ............................................................................
 * Implementación de la clase Cola.
 *
 * ****************************************************************************
 * ***************************************************************************/


#ifndef COLA_H
#define COLA_H


struct Nodo {
	int dato;				// Dato del nodo
	Nodo* siguiente;		// Referencia al siguiente nodo
};


class Cola
{
	private:
		int cantElementos;
		Nodo *primero;
		Nodo *ultimo;

	public:
		Cola();
		~Cola();
		bool estaVacia();
		void encolar(int dato);
		int desencolar();
		int verPrimero();

	private:
		int getCantElementos();
};

#endif	// COLA_H