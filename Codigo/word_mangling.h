/* ****************************************************************************
 * ****************************************************************************
 * Clase WORDMANGLING
 * ............................................................................
 * Modela el módulo encargado de llevar a cabo el word mangling a partir de una
 * lista de reglas sobre palabras recibidas a través de un receptor.
 *
 * ****************************************************************************
 * ***************************************************************************/


#ifndef WORD_MANGLING_H
#define WORD_MANGLING_H


#include "lista.h"
#include "regla.h"
#include "receptor.h"



class WordMangling {
private:
	Lista< Regla >& lReglas;		// Lista de reglas a aplicar

public:

	// Constructor
	explicit WordMangling(Lista< Regla >& lReglas);

	// Ejecuta el alterador de palabras.
	// PRE: 'rxPalabras' es un Receptor de palabras sobre las que se
	// aplicarán las reglas.
	void ejecutar(Receptor* rxPalabras);
};


#endif
