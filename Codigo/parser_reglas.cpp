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

#include <fstream>


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
Lista< Regla* >* ParserReglas::parsear(const string& nombre_archivo, Transmisor* tx) {
	
	// Creamos la lista de reglas
	Lista< Regla* > *lReglas = new Lista< Regla* >();

	// Abrimos archivo
	ifstream archivo;
	archivo.open(nombre_archivo.c_str());

	// Verificamos que se halla abierto correctamente
	if(!archivo.is_open())
		// [ INSERTAR EXCEPCION ]
		cout << "El archivo no se abrio" << endl;


	string instruccion;

	while(archivo.good())
	{
		archivo >> instruccion;
		// if(instruccion == S_FIN_INSTRUCCION) break;
		cout << instruccion << endl;

		// if(instruccion == S_UPPERCASE)
		// {
		// 	RUpercase *r = new RUpercase()
		// 	lReglas.insertarUltimo()
		// }

		while(instruccion != S_FIN_INSTRUCCION)
		{

			archivo >> instruccion;
		}
	}

	// Cerramos el archivo
	archivo.close();

	return lReglas;
}
