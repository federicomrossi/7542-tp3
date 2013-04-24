/* ****************************************************************************
 * ****************************************************************************
 * Clase RPRINT
 * ............................................................................
 * La regla transmite el resultado de la transformación mas reciente.
 *
 * ****************************************************************************
 * ***************************************************************************/


#include "rprint.h"



// Constructor
RPrint::RPrint(Transmisor *tx) : tx(tx) { }


// Destructor
RPrint::~RPrint() { }


// Aplica la regla sobre una lista de transformaciones. La regla emite la
// última modificación realizada.
void RPrint::aplicar(ListaRef< std::string >& lTransformaciones) {
	// Insertamos una copia del primer elemento de la lista para poder
	// considerar a print como una modificación
	lTransformaciones.insertarUltimo(lTransformaciones.verUltimo());
	tx->transmitir(lTransformaciones.verUltimo());
}
