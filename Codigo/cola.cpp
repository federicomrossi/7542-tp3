
#include <iostream>
#include "cola.h"


// Constructor
Cola::Cola() {
	cantElemntos = 0;
	primero = NULL;
	ultimo = NULL;
}

// Destructor
Cola::~Cola() {
	cout << "Cola destruida" << endl;
}

Cola::estaVacia() {
	return (this->cantElemntos == 0);
}

Cola::encolar(int dato) {
	
	Nodo *nodo = new Nodo;
	nodo->dato = dato;
	nodo->siguiente = NULL;

	if (this->primero)
		this->ultimo->siguiente = nodo;
	else
		this->primero = nodo;

	this->ultimo = nodo;
}

Cola::desencolar() {
	Nodo *nodo = this->primero;

	if(nodo->siguiente)
		this->primero = nodo->siguiente;
	else
		this->primero = this->ultimo = NULL;

	return nodo->dato;
}

Cola::verPrimero() {

	if (this->estaVacia()) return NULL;
	return (this->primero->dato);
}
	