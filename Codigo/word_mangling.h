/* ****************************************************************************
 * ****************************************************************************
 * Clase WORDMANGLING
 * ****************************************************************************
 * ***************************************************************************/


#ifndef WORD_MANGLING_H
#define WORD_MANGLING_H


#include "lista.h"
#include "regla.h"
#include "receptor.h"



class WordMangling {

private:

	Lista< Regla* >& lReglas;		// Lista de reglas a aplicar

public:

	// Constructor
	WordMangling(Lista< Regla* >& lReglas);

	// Ejecuta el alterador de palabras.
	// PRE: 'rxPalabras' es un Receptor de palabras sobre las que se
	// aplicarán las reglas.
	void ejecutar(Receptor* rxPalabras);
};


#endif
