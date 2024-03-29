#include <iostream>
//#include "cola.h"
//#include "lista.h"
#include "pila.h"

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


// void pruebaCola() {
// 	Cola< Entero* > cola;

// 	cout << "Creo la cola" << endl;

// 	if(cola.estaVacia()) cout << "Esta vacia" << endl;
// 	else cout << "Tiene elementos" << endl;

// 	Entero* e1 = new Entero(1);
// 	Entero* e2 = new Entero(2);
// 	Entero* e3 = new Entero(3);
// 	Entero* e4 = new Entero(4);
// 	Entero* e5 = new Entero(5);
// 	Entero* e6 = new Entero(6);
// 	Entero* e7 = new Entero(7);

// 	cola.encolar(e1);

// 	if(cola.estaVacia()) cout << "Esta vacia" << endl;
// 	else cout << "Tiene elementos" << endl;

// 	cola.encolar(e2);
// 	cola.encolar(e3);
// 	cola.encolar(e4);
// 	cola.encolar(e5);
// 	cola.encolar(e4);
// 	cola.encolar(e6);
// 	cola.encolar(e7);

// 	while(!cola.estaVacia()){
// 		cout << cola.verPrimero()->ver() << endl;
// 		cout << cola.desencolar()->ver() << endl;
// 		if(cola.estaVacia()) cout << "Esta vacia" << endl;
// 		else cout << "Tiene elementos" << endl;
// 	}

// 	delete e1;
// 	delete e2;
// 	delete e3;
// 	delete e4;
// 	delete e5;
// 	delete e6;
// 	delete e7;
// }


void pruebaPila() {
	Pila< Entero* > pila;

	cout << "Creo la pila" << endl;

	if(pila.estaVacia()) cout << "Esta vacia" << endl;
	else cout << "Tiene elementos" << endl;

	Entero* e1 = new Entero(1);
	Entero* e2 = new Entero(2);
	Entero* e3 = new Entero(3);
	Entero* e4 = new Entero(4);
	Entero* e5 = new Entero(5);
	Entero* e6 = new Entero(6);
	Entero* e7 = new Entero(7);

	pila.apilar(e1);

	if(pila.estaVacia()) cout << "Esta vacia" << endl;
	else cout << "Tiene elementos" << endl;

	pila.apilar(e2);
	pila.apilar(e3);
	pila.apilar(e4);
	pila.apilar(e5);
	pila.apilar(e4);
	pila.apilar(e6);
	pila.apilar(e7);

	while(!pila.estaVacia()){
		cout << pila.verTope()->ver() << endl;
		pila.desapilar();
		if(pila.estaVacia()) cout << "Esta vacia" << endl;
		else cout << "Tiene elementos" << endl;
	}

	delete e1;
	delete e2;
	delete e3;
	delete e4;
	delete e5;
	delete e6;
	delete e7;
}


// void pruebaLista() {

// 	Lista< Entero* > lista;

// 	cout << "Creo la lista" << endl;

// 	if(lista.estaVacia()) cout << "Esta vacia" << endl;
// 	else cout << "Tiene elementos" << endl;

// 	cout << "tamanio: " << lista.tamanio() << endl;

// 	Entero *e1 = new Entero(1);
// 	Entero *e2 = new Entero(2);
// 	Entero *e3 = new Entero(3);
// 	Entero *e4 = new Entero(4);
// 	Entero *e5 = new Entero(5);
// 	Entero *e6 = new Entero(6);
// 	Entero *e7 = new Entero(7);

// 	lista.insertarPrimero(e1);
// 	cout << "tamanio: " << lista.tamanio() << endl;
// 	cout << lista.verPrimero()->ver() << endl;
// 	lista.insertarUltimo(e2);
// 	cout << "tamanio: " << lista.tamanio() << endl;
// 	cout << lista.verUltimo()->ver() << endl;
// 	lista.insertarPrimero(e3);
// 	cout << "tamanio: " << lista.tamanio() << endl;
// 	cout << lista.verPrimero()->ver() << endl;
// 	cout << lista.eliminarPrimero()->ver() << endl;
// 	cout << "tamanio: " << lista.tamanio() << endl;
// 	cout << lista.verPrimero()->ver() << endl;
// 	cout << lista.eliminarPrimero()->ver() << endl;
// 	cout << "tamanio: " << lista.tamanio() << endl;
// 	cout << lista.verPrimero()->ver() << endl;

// 	if(lista.estaVacia()) cout << "Esta vacia" << endl;
// 	else cout << "Tiene elementos" << endl;

// 	cout << lista.eliminarPrimero()->ver() << endl;
// 	cout << "tamanio: " << lista.tamanio() << endl;

// 	if(lista.estaVacia()) cout << "Esta vacia" << endl;
// 	else cout << "Tiene elementos" << endl;

// 	// Iteracion
// 	lista.insertarPrimero(e1);
// 	lista.insertarUltimo(e2);
// 	lista.insertarUltimo(e3);

// 	int i = lista.tamanio();

// 	for(int j = 0; j < i; j++)
// 		cout << lista[j]->ver() << endl;

// 	delete e1;
// 	delete e2;
// 	delete e3;
// 	delete e4;
// 	delete e5;
// 	delete e6;
// 	delete e7;
// }


int main(int argc, char* argv[]) {

	// pruebaCola();
	// pruebaLista();
	pruebaPila();

	return 0;

}