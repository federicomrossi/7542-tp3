/* ****************************************************************************
 * ****************************************************************************
 * Clase RECEPTOR
 * ****************************************************************************
 * ***************************************************************************/


#ifndef RECEPTOR_H
#define RECEPTOR_H

#include <string>



class Receptor {
private:

	// Estado del receptor
	bool activo;

protected:

	// Activa el receptor
	void activar();

	// Desactiva el receptor
	void desactivar();

public:

	// Destructor
	virtual ~Receptor() { };

	// Verifica si el receptor esta activo.
	// POST: devuelve true si está activo o false en caso contrario
	bool estaActivo();

	// Se ejecuta la recepción de un dato desde la entrada estándar.
	// POST: se devuelve la palabra recibida. Debe considerarse terminada la
	// recepción de palabras cuando se recibe una cadena vacía, es decir, nada.
	virtual std::string recibir() = 0;
};


#endif
