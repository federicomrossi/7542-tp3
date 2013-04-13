#include <iostream>
#include "cola.h"

using namespace std;


class Contador {
private:
	int valor;

public:
	Contador(){
		valor = 0;
	}

	void incrementar(){
		++this->valor;
	}
};



int main(int argc, char* argv[]) {

	Cola< int > cola;

	cout << "Creo la cola" << endl;

	if(cola.estaVacia()) cout << "Esta vacia" << endl;
	else cout << "Tiene elementos" << endl;

	int n = 4;
	cola.encolar(n);
	cout << "todo bien" << endl;

	int& k = cola.verPrimero();

	k = 7;

	cout << n << endl;

	// if(cola.estaVacia()) cout << "Esta vacia" << endl;
	// else cout << "Tiene elementos" << endl;

	// int& k = cola.verPrimero();
	// // cout << k << endl;
	// cout << k << endl;
	// delete &k;

	// cout << n << endl;
	// delete &n;


	// if(cola.estaVacia()) cout << "Esta vacia" << endl;
	// else cout << "Tiene elementos" << endl;
	// cout << cola.verPrimero() << endl;

	// cout << cola.desencolar() << endl;

	// if(cola.estaVacia()) cout << "Esta vacia" << endl;
	// else cout << "Tiene elementos" << endl;

	// cola.encolar(1);
	// cola.encolar(2);
	// cola.encolar(3);
	// cola.encolar(4);
	// cola.encolar(5);
	// cola.encolar(4);
	// cola.encolar(6);
	// cola.encolar(7);

	// while(!cola.estaVacia()){

	// 	cout << cola.verPrimero() << endl;
	// 	cout << cola.desencolar() << endl;
	// }

}