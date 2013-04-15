/* ****************************************************************************
 * ****************************************************************************
 * Clase PARSERREGLAS
 * ****************************************************************************
 * ***************************************************************************/


#include "parser_reglas.h"

// Reglas
#include "ruppercase.h"
#include "rlowercase.h"
#include "rrepeat.h"
#include "rrotate.h"
#include "rinsert.h"
#include "rrevert.h"
#include "rprint.h"


// Constantes para los nombres de instrucciones
const string S_UPPERCASE = "uppercase";
const string S_LOWERCASE = "lowercase";
const string S_REPEAT = "repeat";
const string S_ROTATE = "rotate";
const string S_INSERT = "insert";
const string S_REVERT = "revert";
const string S_PRINT = "print";

// Constante para caracter de fin de instrucción
const string S_FIN_INSTRUCCION = ";";




/* ****************************************************************************
 * DEFINICIONES DE MÉTODOS DE LA CLASE
 * ***************************************************************************/


// Parsea el archivo de reglas.
// PRE: 'archivo' es el nombre de archivo que contiene las reglas; 'tx' es
// una referencia a un Transmisor el cual puede ser usado por alguna regla
// para emitir palabras.
// POST: se devuelve una referencia a una lista que contiene, en orden
// de aparición en el archivo, los objetos que son Regla.
Lista< Regla* > ParserReglas::parsear(const string& nombre_archivo, 
	Transmisor *tx) {
	
	// Abrimos archivo
	ifstream archivo;
	archivo.open(nombre_archivo.c_str());

	// Verificamos que se halla abierto correctamente
	if(!archivo.is_open())
		// [ INSERTAR EXCEPCION ]
		cout << "El archivo no se abrio" << endl;


	// Creamos la lista de reglas
	Lista< Regla* > lReglas;

	// Variables auxiliares para parseo
	string instruccion, mmm, fin;
	int n, m, r, i;

	// Procesamos cada instrucción. Si alguna no esta definida, no se 
	// considera y se sigue procesando las restantes.
	while(archivo >> instruccion)
	{
		// Filtros
		if(instruccion == S_UPPERCASE) {
			archivo >> n >> m >> fin;
			lReglas.insertarUltimo(new RUppercase(n, m));
			continue;	
		}
		else if(instruccion == S_LOWERCASE)	{
			archivo >> n >> m >> fin;
			lReglas.insertarUltimo(new RLowercase(n, m));
			continue;
		}
		else if(instruccion == S_REPEAT) {
			archivo >> n >> m >> r >> i >> fin;
			lReglas.insertarUltimo(new RRepeat(n, m, r, i));
			continue;
		}
		else if(instruccion == S_ROTATE) {
			archivo >> n >> fin;
			lReglas.insertarUltimo(new RRotate(n));
			continue;
		}
		else if(instruccion == S_INSERT) {
			archivo >> i >> mmm >> fin;
			lReglas.insertarUltimo(new RInsert(i, mmm));
			continue;
		}
		else if(instruccion == S_REVERT) {
			archivo >> i >> fin;
			lReglas.insertarUltimo(new RRevert(i));
			continue;
		}
		else if(instruccion == S_PRINT)	{
			archivo >> fin;
			lReglas.insertarUltimo(new RPrint(tx));
			continue;
		}			
	}

	// Cerramos el archivo
	archivo.close();

	return lReglas;
}
