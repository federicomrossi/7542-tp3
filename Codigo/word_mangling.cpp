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
#include "listaref.h"




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
		// Creamos la lista de transformaciones
		ListaRef< std::string > lTransformaciones;
		// Insertamos la palabra original
		lTransformaciones.insertarUltimo(palabra);

		// Aplicamos reglas a palabra
		for(int i = 0; i < this->lReglas.tamanio(); i++)
			this->lReglas[i]->aplicar(lTransformaciones);

		palabra = rxPalabras->recibir();
	}
}
