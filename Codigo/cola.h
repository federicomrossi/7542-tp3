/* ****************************************************************************
 * ****************************************************************************
 * Clase COLA
 * ............................................................................
 * Implementación de la clase Cola. Esta puede almacenar cualquier tipo de
 * datos. Se recomienda almacenar punteros para evitar hacer copias de los
 * datos, recordando al usuario que corre por su cuenta el asegurar que estos
 * sean destruidos fuera del alcance de la cola.
 *
 * ****************************************************************************
 * ***************************************************************************/



#ifndef COLA_H
#define COLA_H



/* ****************************************************************************
 * DECLARACIÓN DE LA CLASE
 * ***************************************************************************/


template < typename Tipo > 
class Cola {

private:

	struct Nodo {
		Tipo dato;				// Dato al que referencia el nodo
		Nodo *siguiente;		// Puntero al siguiente nodo

		// Constructor
		Nodo(Tipo& dato) : dato(dato), siguiente(0) { }
	};

	int cantElementos;			// Número de elementos en la cola
	Nodo *primero;				// Puntero al primer elemento de la cola
	Nodo *ultimo;				// Puntero al último elemento de la cola

public:

	// Constructor
	Cola();

	// Destructor
	~Cola();

	// Verifica si una cola tiene o no elementos.
	// POST: devuelve true si la cola esta vacía o false en su defecto.
	bool estaVacia();

	// Agrega un nuevo elemento a la cola.
	// PRE: 'dato' es el dato que se desea encolar.
	// POST: se agregó el nuevo elemento a la cola, el cual se encuentra
	// al final de la cola.
	void encolar(Tipo dato);


	// Saca el primer elemento de la cola.
	// POST: se retorna el dato que ha sido desencolado. De no haber
	// elementos en la cola, se lanzará un error de tipo ERROR.
	Tipo desencolar();

	// Obtiene el valor del primer elemento de la cola. 
	// POST: se devuelve el dato que se encuentra primero en la cola. De no
	// haber elementos en la cola, se lanzará un error de tipo ERROR.
	Tipo verPrimero();
};




/* ****************************************************************************
 * DEFINICIÓN DE LA CLASE
 * ***************************************************************************/


// Constructor
template <typename Tipo >
Cola< Tipo >::Cola() {
	this->cantElementos = 0;
	this->primero = 0;
	this->ultimo = 0;
}


// Destructor
template <typename Tipo >
Cola< Tipo >::~Cola() {
	Nodo *nodo_actual, *nodo;

	// Si hay elementos, comenzamos la eliminación
	if(this->cantElementos != 0) {
		nodo_actual = this->primero;

		// Eliminación de los nodos uno a uno
		while(nodo_actual->siguiente) {
			nodo = nodo_actual->siguiente;
			delete nodo_actual;
			nodo_actual = nodo;
		}	

		delete nodo_actual;
	}
}


// Verifica si una cola tiene o no elementos.
// POST: devuelve true si la cola esta vacía o false en su defecto.
template <typename Tipo >
bool Cola< Tipo >::estaVacia() {
	return (this->cantElementos == 0);
}


// Agrega un nuevo elemento a la cola.
// PRE: 'dato' es el dato que se desea encolar.
// POST: se agregó el nuevo elemento a la cola, el cual se encuentra al final
// de la cola.
template <typename Tipo >
void Cola< Tipo >::encolar(Tipo dato) {
	// Creamos un nuevo nodo
	Nodo *nodo = new Nodo(dato);

	// Enlazamos el nodo al final de la cola.
	if (this->primero)
		this->ultimo->siguiente = nodo;
	else
		this->primero = nodo;

	this->ultimo = nodo;
	this->cantElementos++;
}


// Saca el primer elemento de la cola.
// POST: se retorna el dato que ha sido desencolado. De no haber
// elementos en la cola, se lanzará un error de tipo ERROR.
template <typename Tipo >
Tipo Cola< Tipo >::desencolar() {
	// Tomamos dato del nodo
	Nodo *nodo = this->primero;
	Tipo dato = nodo->dato;

	// Desenlazamos nodo y liberamos memoria.
	if(nodo->siguiente)
		this->primero = nodo->siguiente;
	else
		this->primero = this->ultimo = 0;

	delete nodo;
	this->cantElementos--;
	
	return dato;
}


// Obtiene el valor del primer elemento de la cola. 
// POST: se devuelve el dato que se encuentra primero en la cola. De no
// haber elementos en la cola, se lanzará un error de tipo ERROR.
template <typename Tipo >
Tipo Cola< Tipo >::verPrimero() {

	// AGREGAR EXCEPCION PARA CUANDO NO HAY ELEMENTOS!!!!!

	return (this->primero->dato);
}


#endif
