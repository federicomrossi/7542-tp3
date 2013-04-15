/* ****************************************************************************
 * ****************************************************************************
 * Clase RPRINT
 * ****************************************************************************
 * ***************************************************************************/


#include "rprint.h"



// Constructor
RPrint::RPrint(Transmisor *tx) : tx(tx) { }


// Aplica la regla sobre una pila de transformaciones. La regla emite la
// última modificación realizada.
void RPrint::aplicar(Pila< string >& pTransformaciones) {
	
	tx->transmitir(pTransformaciones.verTope());
}
