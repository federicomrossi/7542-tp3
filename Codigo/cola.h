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


class Cola
{
	private:

		struct Nodo {
			int dato;				// Dato del nodo
			Nodo* siguiente;		// Referencia al siguiente nodo
		};

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