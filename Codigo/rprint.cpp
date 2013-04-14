/* ****************************************************************************
 * ****************************************************************************
 * Clase RPRINT
 * ****************************************************************************
 * ***************************************************************************/


#include "rprint.h"



// Constructor
RPrint::RPrint(Transmisor& tx) : tx(tx) { }


// Aplica la regla sobre una cola de transformaciones
void RPrint::aplicar(Cola< string >& cTransformaciones) {
	
	cout << "Se aplico RPrint" << endl;
}
