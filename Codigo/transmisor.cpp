/* ****************************************************************************
 * ****************************************************************************
 * Clase TRANSMISOR
 * ****************************************************************************
 * ***************************************************************************/


#include "transmisor.h" 


// Verifica si el transmisor esta activo.
// POST: devuelve true si está activo o false en caso contrario
bool Transmisor::estaActivo() {
	return this->activo;
}


// Activa el transmisor
void Transmisor::activar() {
	this->activo = true;
}


// Desactiva el transmisor
void Transmisor::desactivar() {
	this->activo = false;
}
