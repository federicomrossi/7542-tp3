/* ****************************************************************************
 * ****************************************************************************
 * Clase WORDMANGLING
 * ............................................................................
 * Modela el módulo encargado de llevar a cabo el word mangling a partir de una
 * lista de reglas sobre palabras recibidas a través de un receptor.
 *
 * ****************************************************************************
 * ***************************************************************************/


#include "word_mangling.h"
#include "pila.h"




// Constructor:
// 'lReglas' es una Lista de Reglas que se desean aplicar
WordMangling::WordMangling(Lista< Regla >& lReglas) : lReglas(lReglas) { }


// Ejecuta el alterador de palabras.
// PRE: 'rxPalabras' es un Receptor de palabras sobre las que se
// aplicarán las reglas.
void WordMangling::ejecutar(Receptor *rxPalabras) {
	// Aplicamos reglas a cada palabra entrante recibida
	std::string palabra = rxPalabras->recibir();

	while(!palabra.empty()) {
		// Creamos la pila de transformaciones
		Pila< std::string > pTransformaciones;
		// Apilamos la palabra original
		pTransformaciones.apilar(palabra);

		// Aplicamos reglas a palabra
		for(int i = 0; i < this->lReglas.tamanio(); i++)
			this->lReglas[i]->aplicar(pTransformaciones);

		palabra = rxPalabras->recibir();
	}
}
