/* ****************************************************************************
 * ****************************************************************************
 * Clase LISTA
 * ............................................................................
 * Implementación de la clase Lista. Esta puede almacenar cualquier tipo de
 * datos.
 *
 * ****************************************************************************
 * ***************************************************************************/


using namespace std;




/* ****************************************************************************
 * DECLARACIÓN
 * ***************************************************************************/

template < typename Tipo > 
class Lista {

private:
	struct Nodo {
		Tipo& dato;				// Dato al que referencia el nodo
		Nodo *siguiente;		// Puntero al siguiente nodo

		// Constructor
		Nodo(Tipo& dato) : dato(dato), siguiente(NULL) { }
	};

	Nodo *primero;		// Puntero al primer elemento de la lista
	Nodo *ultimo;		// Puntero al último elemento de la lista
	size_t largo;		// Tamaño que representa la cantidad de 
						// elementos que contiene la lista

public:
	Lista();
	~Lista();
	bool estaVacia();
	size_t tamanio();
	void insertarPrimero(Tipo& dato);
	void insertarUltimo(Tipo& dato);
	Tipo& verPrimero();
	Tipo& verUltimo();
	Tipo& eliminarPrimero();
	Tipo& eliminarUltimo();
	Tipo& operator [] (const int indice);
};




/* ****************************************************************************
 * DEFINICIÓN
 * ***************************************************************************/

// Constructor
template <typename Tipo >
Lista< Tipo >::Lista() {
	this->largo = 0;
	this->primero = NULL;
	this->ultimo = NULL;
}

// Destructor
template <typename Tipo >
Lista< Tipo >::~Lista() {
	
	cout << "Destruir lista" << endl;
}

//
template <typename Tipo >
bool Lista< Tipo >::estaVacia() {
	return (this->largo == 0);
}

//
template <typename Tipo >
size_t Lista< Tipo >::tamanio() {
	return this->largo;
}

//
template <typename Tipo >
void Lista< Tipo >::insertarPrimero(Tipo& dato) {

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

//
template <typename Tipo >
void Lista< Tipo >::insertarUltimo(Tipo& dato) {

	// Creamos un nuevo nodo
	Nodo *nodo = new Nodo(dato);

	// Seteamos los campos del nodo
	nodo->dato = dato;
	nodo->siguiente = NULL;

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

//
template <typename Tipo >
Tipo& Lista< Tipo >::verPrimero() {

	// AGREGAR EXCEPCION PARA CUANDO NO HAY ELEMENTOS!!!!!

	return (this->primero->dato);
}

//
template <typename Tipo >
Tipo& Lista< Tipo >::verUltimo() {

	// AGREGAR EXCEPCION PARA CUANDO NO HAY ELEMENTOS!!!!!

	return (this->ultimo->dato);
}

//
template <typename Tipo >
Tipo& Lista< Tipo >::eliminarPrimero() {

	// AGREGAR EXCEPCION PARA CUANDO NO HAY ELEMENTOS!!!!!

	// Tomamos el nodo a borrar
	Nodo *nodo = this->primero;
	Tipo& dato = this->primero->dato;

	// El segundo elemento pasa a ser el primero
	this->primero = this->primero->siguiente;
	this->largo--;

	// Liberamos la memoria usada por el nodo.
	delete nodo;

	// Verificamos si quedan mas elementos en la lista
	if (this->largo == 0) this->ultimo = NULL;

	return dato;
}

//
template <typename Tipo >
Tipo& Lista< Tipo >::operator [] (const int indice) {

	// AGREGAR ENVIO DE EXCEPCION PARA CUANDO SE EXCEDE EL INDICE
	// if (indice >= this->largo) throw ERROR

	int i;
	Nodo *nodo = this->primero;

	for(i = 0; i < indice; i++)
		nodo = nodo->siguiente;
		
	return nodo->dato;
}

