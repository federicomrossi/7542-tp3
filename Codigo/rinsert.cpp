/* ****************************************************************************
 * ****************************************************************************
 * Clase RINSERT
 * ****************************************************************************
 * ***************************************************************************/


#include "rinsert.h"



// Constructor
RInsert::RInsert(int i, string mmm) {
	this->i = i;
	this->mmm = mmm;
}


// Aplica la regla sobre una cola de transformaciones
void RInsert::aplicar(Cola< string >& cTransformaciones) {
	
	cout << "Se aplico RInsert" << endl;
}
