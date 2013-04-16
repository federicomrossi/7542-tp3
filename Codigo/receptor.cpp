/* ****************************************************************************
 * ****************************************************************************
 * Clase RECEPTOR
 * ****************************************************************************
 * ***************************************************************************/


#include "receptor.h"


// Verifica si el receptor esta activo.
// POST: devuelve true si está activo o false en caso contrario
bool Receptor::estaActivo() {
	return this->activo;
}


// Activa el receptor
void Receptor::activar() {
	this->activo = true;
}


// Activa el receptor
void Receptor::desactivar() {
	this->activo = false;
}
