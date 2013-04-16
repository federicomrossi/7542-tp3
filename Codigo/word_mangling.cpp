/* ****************************************************************************
 * ****************************************************************************
 * Clase WORDMANGLING
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
	string palabra = rxPalabras->recibir();

	while(!palabra.empty())
	{
		// Creamos la pila de transformaciones
		Pila< string > pTransformaciones;
		// Apilamos la palabra original
		pTransformaciones.apilar(palabra);

		// Aplicamos reglas a palabra
		for(int i=0; i < this->lReglas.tamanio(); i++)
			this->lReglas[i]->aplicar(pTransformaciones);

		palabra = rxPalabras->recibir();
	}
}
