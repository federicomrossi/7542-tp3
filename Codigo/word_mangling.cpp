/* ****************************************************************************
 * ****************************************************************************
 * Clase WORDMANGLING
 * ****************************************************************************
 * ***************************************************************************/


#include "word_mangling.h"
#include "cola.h"



// Constructor:
// 'lReglas' es una Lista de Reglas que se desean aplicar
WordMangling::WordMangling(Lista< Regla >& lReglas) : lReglas(lReglas) { }


// Ejecuta el alterador de palabras.
// PRE: 'rxPalabras' es un Receptor de palabras sobre las que se
// aplicarán las reglas.
void WordMangling::ejecutar(Receptor& rxPalabras) {

	// string palabra;

	// while(palabra = rxPalabras.recibir())
	// {
	// 	Cola< string > cTransformaciones;
	// 	cTransformaciones.encolar(palabra);

	// 	for(int i=0; i < this->lReglas.tamanio(); i++)
	// 		this->lReglas[i].aplicar(cTransformaciones);
	// }
}
