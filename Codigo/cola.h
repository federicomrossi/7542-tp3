/* ****************************************************************************
 * ****************************************************************************
 * Clase COLA
 * ............................................................................
 * Implementación de la clase Cola. Esta puede almacenar cualquier tipo de
 * datos.
 *
 * ****************************************************************************
 * ***************************************************************************/


using namespace std;




/* ****************************************************************************
 * DECLARACIÓN
 * ***************************************************************************/

template < typename Tipo > 
class Cola {

private:
	struct Nodo {
		Tipo& dato;				// Dato al que referencia el nodo
		Nodo *siguiente;		// Puntero al siguiente nodo

		// Constructor
		Nodo(Tipo& dato) : dato(dato), siguiente(NULL) { }
	};

	int cantElementos;
	Nodo *primero;
	Nodo *ultimo;

public:
	Cola();
	~Cola();
	bool estaVacia();
	void encolar(Tipo& dato);
	Tipo& desencolar();
	Tipo& verPrimero();
};




/* ****************************************************************************
 * DEFINICIÓN
 * ***************************************************************************/

// Constructor
template <typename Tipo >
Cola< Tipo >::Cola() {
	this->cantElementos = 0;
	this->primero = NULL;
	this->ultimo = NULL;
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

//
template <typename Tipo >
bool Cola< Tipo >::estaVacia() {
	return (this->cantElementos == 0);
}

//
template <typename Tipo >
void Cola< Tipo >::encolar(Tipo& dato) {
	
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

//
template <typename Tipo >
Tipo& Cola< Tipo >::desencolar() {
	
	Nodo *nodo = this->primero;
	Tipo& dato = nodo->dato;

	if(nodo->siguiente)
		this->primero = nodo->siguiente;
	else
		this->primero = this->ultimo = NULL;

	delete nodo;
	this->cantElementos--;
	
	return dato;
}

//
template <typename Tipo >
Tipo& Cola< Tipo >::verPrimero() {

	// AGREGAR EXCEPCION PARA CUANDO NO HAY ELEMENTOS!!!!!

	return (this->primero->dato);
}
