/* ****************************************************************************
 * ****************************************************************************
 * Clase COLA
 * ............................................................................
 * Implementación de la clase Cola.
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
		Nodo *siguiente;		// Referencia al siguiente nodo

		// Constructor
		Nodo (Tipo& dato) : dato(dato), siguiente(NULL) { }
	};

	int cantElementos;
	Nodo *primero;
	Nodo *ultimo;

public:
	Cola();
	~Cola();
	bool estaVacia();
	void encolar(Tipo& dato);
	// Tipo& desencolar();
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
	cout << "Cola destruida" << endl;
}

template <typename Tipo >
bool Cola< Tipo >::estaVacia() {
	return (this->cantElementos == 0);
}

template <typename Tipo >
void Cola< Tipo >::encolar(Tipo& dato) {
	
	Nodo *nodo = new Nodo(dato);

	if (this->primero)
		this->ultimo->siguiente = nodo;
	else
		this->primero = nodo;

	this->ultimo = nodo;
	this->cantElementos++;
}

// template <typename Tipo >
// Tipo Cola< Tipo >::desencolar() {
	
// 	Nodo *nodo = this->primero;
// 	Tipo dato = nodo->dato;

// 	if(nodo->siguiente)
// 		this->primero = nodo->siguiente;
// 	else
// 		this->primero = this->ultimo = NULL;

// 	delete nodo;
// 	this->cantElementos--;
	
// 	return dato;
// }

template <typename Tipo >
Tipo& Cola< Tipo >::verPrimero() {

	// AGREGAR EXCEPCION PARA CUANDO NO HAY ELEMENTOS!!!!!

	return (this->primero->dato);
}