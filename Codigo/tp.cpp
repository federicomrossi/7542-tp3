#include <iostream>
#include "cola.h"
#include "lista.h"

using namespace std;


class Entero {
private:
	int valor;

public:
	Entero(int valor) {
		this->valor = valor;
	}

	~Entero() {
		cout << "Se destruyo entero" << endl;
	}

	void cambiar(int nuevo) {
		this->valor = nuevo;
	}

	int ver() {
		return this->valor;
	}

};


void pruebaCola() {
	Cola< Entero > cola;

	cout << "Creo la cola" << endl;

	if(cola.estaVacia()) cout << "Esta vacia" << endl;
	else cout << "Tiene elementos" << endl;

	Entero e1(1);
	Entero e2(2);
	Entero e3(3);
	Entero e4(4);
	Entero e5(5);
	Entero e6(6);
	Entero e7(7);

	cola.encolar(e1);

	if(cola.estaVacia()) cout << "Esta vacia" << endl;
	else cout << "Tiene elementos" << endl;

	cola.encolar(e2);
	cola.encolar(e3);
	cola.encolar(e4);
	cola.encolar(e5);
	cola.encolar(e4);
	cola.encolar(e6);
	cola.encolar(e7);

	while(!cola.estaVacia()){
		cout << cola.verPrimero().ver() << endl;
		cout << cola.desencolar().ver() << endl;
		if(cola.estaVacia()) cout << "Esta vacia" << endl;
		else cout << "Tiene elementos" << endl;
	}
}


void pruebaLista() {

	Lista< Entero > lista;

	cout << "Creo la lista" << endl;

	if(lista.estaVacia()) cout << "Esta vacia" << endl;
	else cout << "Tiene elementos" << endl;

	cout << "tamanio: " << lista.tamanio() << endl;

	Entero e1(1);
	Entero e2(2);
	Entero e3(3);
	Entero e4(4);
	Entero e5(5);
	Entero e6(6);
	Entero e7(7);

	lista.insertarPrimero(e1);
	cout << "tamanio: " << lista.tamanio() << endl;
	cout << lista.verPrimero().ver() << endl;
	lista.insertarUltimo(e2);
	cout << "tamanio: " << lista.tamanio() << endl;
	cout << lista.verUltimo().ver() << endl;
	lista.insertarPrimero(e3);
	cout << "tamanio: " << lista.tamanio() << endl;
	cout << lista.verPrimero().ver() << endl;
	cout << lista.eliminarPrimero().ver() << endl;
	cout << "tamanio: " << lista.tamanio() << endl;
	cout << lista.verPrimero().ver() << endl;
	cout << lista.eliminarPrimero().ver() << endl;
	cout << "tamanio: " << lista.tamanio() << endl;
	cout << lista.verPrimero().ver() << endl;

	if(lista.estaVacia()) cout << "Esta vacia" << endl;
	else cout << "Tiene elementos" << endl;

	cout << lista.eliminarPrimero().ver() << endl;
	cout << "tamanio: " << lista.tamanio() << endl;

	if(lista.estaVacia()) cout << "Esta vacia" << endl;
	else cout << "Tiene elementos" << endl;

	// Iteracion
	lista.insertarPrimero(e1);
	lista.insertarUltimo(e2);
	lista.insertarUltimo(e3);

	int i = lista.tamanio();

	for(int j = 0; j < i; j++)
		cout << lista[j].ver() << endl;
}


int main(int argc, char* argv[]) {

	pruebaLista();

}