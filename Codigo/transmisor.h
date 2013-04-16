/* ****************************************************************************
 * ****************************************************************************
 * Clase TRANSMISOR
 * ****************************************************************************
 * ***************************************************************************/

#ifndef TRANSMISOR_H
#define TRANSMISOR_H

#include <iostream>
using namespace std;



class Transmisor {

private:

	// Estado del transmisor
	bool activo;

protected:

	// Activa el transmisor
	void activar();

	// Desactivar el transmisor
	void desactivar();

public:

	// Destructor
	virtual ~Transmisor() { };

	// Verifica si el transmisor esta activo.
	// POST: devuelve true si está activo o false en caso contrario
	bool estaActivo();

	// Se ejecuta la transmisión de un dato.
	virtual void transmitir(const string& palabra) = 0;
};


#endif
