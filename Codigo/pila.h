/* ****************************************************************************
 * ****************************************************************************
 * Clase PILA
 * ............................................................................
 * Implementación de la clase Pila. Esta puede almacenar cualquier tipo de
 * datos. Se recomienda almacenar punteros para evitar hacer copias de los
 * datos, recordando al usuario que corre por su cuenta el asegurar que estos
 * sean destruidos fuera del alcance de la pila.
 *
 * ****************************************************************************
 * ***************************************************************************/



#ifndef PILA_H
#define PILA_H



/* ****************************************************************************
 * DECLARACIÓN DE LA CLASE
 * ***************************************************************************/


template < typename Tipo > 
class Pila {

private:

	struct Nodo {
		Tipo dato;				// Dato al que referencia el nodo
		Nodo *siguiente;		// Puntero al siguiente nodo

		// Constructor
		Nodo(Tipo& dato) : dato(dato), siguiente(0) { }
	};

	int cantElementos;			// Número de elementos en la pila
	Nodo *primero;				// Puntero al primer elemento de la pila
	Nodo *ultimo;				// Puntero al último elemento de la pila

public:

	// Constructor
	Pila();

	// Destructor
	~Pila();

	// Verifica si la pila tiene o no elementos.
	// POST: devuelve true si la pila esta vacía o false en su defecto.
	bool estaVacia();

	// Agrega un nuevo elemento a la pila.
	// PRE: 'dato' es el dato que se desea apilar.
	// POST: se agregó el nuevo elemento, el cual se encuentra en el tope de
	// la pila.
	void apilar(Tipo dato);


	// Saca el primer elemento de la pila.
	// POST: se retorna el dato que ha sido desapilado. De no haber
	// elementos en la pila, se lanzará un error de tipo ERROR.
	Tipo desapilar();

	// Obtiene el valor del primer elemento de la pila. 
	// POST: se devuelve el dato que se encuentra en el tope de la pila. De no
	// haber elementos en la pila, se lanzará un error de tipo ERROR.
	Tipo verTope();
};




/* ****************************************************************************
 * DEFINICIÓN DE LA CLASE
 * ***************************************************************************/


// Constructor
template <typename Tipo >
Pila< Tipo >::Pila() {
	this->cantElementos = 0;
	this->primero = 0;
	this->ultimo = 0;
}


// Destructor
template <typename Tipo >
Pila< Tipo >::~Pila() {
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


// Verifica si la pila tiene o no elementos.
// POST: devuelve true si la pila esta vacía o false en su defecto.
template <typename Tipo >
bool Pila< Tipo >::estaVacia() {
	return (this->cantElementos == 0);
}


// Agrega un nuevo elemento a la pila.
// PRE: 'dato' es el dato que se desea apilar.
// POST: se agregó el nuevo elemento, el cual se encuentra en el tope de
// la pila.
template <typename Tipo >
void Pila< Tipo >::apilar(Tipo dato) {
	// Creamos un nuevo nodo
	Nodo *nodo = new Nodo(dato);

	// Enlazamos el nodo en el tope de la pila.
	if(this->primero)
		nodo->siguiente = this->primero;
	else
		this->ultimo = nodo;

	this->primero = nodo;
	this->cantElementos++;
}


// Saca el primer elemento de la pila.
// POST: se retorna el dato que ha sido desapilado. De no haber
// elementos en la pila, se lanzará un error de tipo ERROR.
template <typename Tipo >
Tipo Pila< Tipo >::desapilar() {
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


// Obtiene el valor del primer elemento de la pila. 
// POST: se devuelve el dato que se encuentra en el tope de la pila. De no
// haber elementos en la pila, se lanzará un error de tipo ERROR.
template <typename Tipo >
Tipo Pila< Tipo >::verTope() {

	// AGREGAR EXCEPCION PARA CUANDO NO HAY ELEMENTOS!!!!!

	return (this->primero->dato);
}


#endif
