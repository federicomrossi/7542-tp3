/* ****************************************************************************
 * ****************************************************************************
 * Clase LISTA
 * ............................................................................
 * Implementación de la clase Lista.
 *
 * ****************************************************************************
 * ***************************************************************************/



#ifndef LISTA_H
#define LISTA_H


/* ****************************************************************************
 * DECLARACIÓN DE LA CLASE
 * ***************************************************************************/


template < typename Tipo > 
class Lista {
private:

	struct Nodo {
		Tipo *dato;				// Dato al que referencia el nodo
		Nodo *siguiente;		// Puntero al siguiente nodo

		// Constructor
		explicit Nodo(Tipo *dato) : dato(dato), siguiente(0) { }
	};

	Nodo *primero;				// Puntero al primer elemento de la lista
	Nodo *ultimo;				// Puntero al último elemento de la lista
	int largo;					// Tamaño que representa la cantidad de 
								// elementos que contiene la lista

public:

	// Constructor
	Lista();

	// Destructor
	~Lista();

	// Verifica si una lista se encuentra vacía.
	// POST: Devuelve verdadero si la lista se encuentra vacía o falso en 
	// caso contrario.
	bool estaVacia();

	// Devuelve el tamaño actual de la lista.
	int tamanio();

	// Inserta un elemento al principio de la lista.
	// PRE: 'dato' es el dato a insertar.
	void insertarPrimero(Tipo *dato);

	// Inserta un elemento en el último lugar de la lista.
	// PRE: 'dato' es el dato a insertar.
	void insertarUltimo(Tipo *dato);

	// Obtiene el valor del primer elemento de la lista. 
	// POST: se devuelve el dato que se encuentra primero en la lista.
	Tipo* verPrimero();

	// Obtiene el valor del último elemento de la lista. 
	// POST: se devuelve el dato que se encuentra último en la lista.
	Tipo* verUltimo();

	// Elimina el primer elemento de la lista. 
	// POST: se retorna el elemento eliminado de la lista.
	Tipo* eliminarPrimero();

	// Operador []
	// Permite acceder a los índices de la lista mediante la notación 
	// lista[i], donde i es un número entero comprendido entre [0, n-1],
	// siendo n el tamaño de la lista.
	Tipo* operator[] (const int indice);
};




/* ****************************************************************************
 * DEFINICIÓN DE LA CLASE
 * ***************************************************************************/


// Constructor
template <typename Tipo >
Lista< Tipo >::Lista() {
	this->primero = 0;
	this->ultimo = 0;
	this->largo = 0;
}


// Destructor
template <typename Tipo >
Lista< Tipo >::~Lista() {
	Nodo *nodo;

	// Recorremos los nodos y los destruimos
	while(this->primero) {
		nodo = this->primero;
		this->primero = nodo->siguiente;
		delete nodo->dato;
		delete nodo;
	}
}


// Verifica si una lista se encuentra vacía.
// POST: Devuelve verdadero si la lista se encuentra vacía o falso en 
// caso contrario.
template <typename Tipo >
bool Lista< Tipo >::estaVacia() {
	return (this->largo == 0);
}


// Devuelve el tamaño actual de la lista.
template <typename Tipo >
int Lista< Tipo >::tamanio() {
	return this->largo;
}


// Inserta un elemento al principio de la lista.
// PRE: 'dato' es el dato a insertar.
template <typename Tipo >
void Lista< Tipo >::insertarPrimero(Tipo *dato) {
	// Creamos un nuevo nodo
	Nodo *nodo = new Nodo(dato);

	// Seteamos los campos del nodo
	nodo->dato = dato;
	nodo->siguiente = this->primero;
	this->primero = nodo;

	// Si no hay ningún elemento, el primero también es el último
	if(!this->largo) this->ultimo = nodo;
	this->largo++;
}


// Inserta un elemento en el último lugar de la lista.
// PRE: 'dato' es el dato a insertar.
template <typename Tipo >
void Lista< Tipo >::insertarUltimo(Tipo *dato) {
	// Creamos un nuevo nodo
	Nodo *nodo = new Nodo(dato);

	// Seteamos los campos del nodo
	nodo->dato = dato;
	nodo->siguiente = 0;

	// Si no hay elementos, el último también es el primero
	if(!this->ultimo)
		this->primero = nodo;
	// Sino, insertamos el nuevo nodo a continuación del que 
	// se encontraba último
	else
		this->ultimo->siguiente = nodo;

	this->ultimo = nodo;
	this->largo++;
}


// Obtiene el valor del primer elemento de la lista. 
// POST: se devuelve el dato que se encuentra primero en la lista.
template <typename Tipo >
Tipo* Lista< Tipo >::verPrimero() {
	return (this->primero->dato);
}


// Obtiene el valor del último elemento de la lista. 
// POST: se devuelve el dato que se encuentra último en la lista.
template <typename Tipo >
Tipo* Lista< Tipo >::verUltimo() {
	return (this->ultimo->dato);
}


// Elimina el primer elemento de la lista. 
// POST: se retorna el elemento eliminado de la lista.
template <typename Tipo >
Tipo* Lista< Tipo >::eliminarPrimero() {
	// Tomamos el nodo a borrar
	Nodo *nodo = this->primero;
	Tipo *dato = this->primero->dato;

	// El segundo elemento pasa a ser el primero
	this->primero = this->primero->siguiente;
	this->largo--;

	// Liberamos la memoria usada por el nodo.
	delete nodo;

	// Verificamos si quedan mas elementos en la lista
	if (this->largo == 0) this->ultimo = 0;

	return dato;
}


// Operador []
// Permite acceder a los índices de la lista mediante la notación lista[i], 
// donde i es un número entero comprendido entre [0, n-1], siendo n el tamaño
// de la lista.
template <typename Tipo >
Tipo* Lista< Tipo >::operator[] (const int indice) {
	int i;
	Nodo *nodo = this->primero;

	for(i = 0; i < indice; i++)
		nodo = nodo->siguiente;
		
	return nodo->dato;
}


#endif
