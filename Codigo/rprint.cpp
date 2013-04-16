/* ****************************************************************************
 * ****************************************************************************
 * Clase RPRINT
 * ****************************************************************************
 * ***************************************************************************/


#include "rprint.h"



// Constructor
RPrint::RPrint(Transmisor *tx) : tx(tx) { }


// Destructor
RPrint::~RPrint() { }


// Aplica la regla sobre una pila de transformaciones. La regla emite la
// última modificación realizada.
void RPrint::aplicar(Pila< string >& pTransformaciones) {
	
	// Apilamos una copia del tope actual de la pila para poder considerar
	// a print como una modificación
	pTransformaciones.apilar(pTransformaciones.verTope());
	tx->transmitir(pTransformaciones.verTope());
}
