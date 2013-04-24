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


namespace {
	// Constantes para los nombres de instrucciones
	const std::string S_UPPERCASE = "uppercase";
	const std::string S_LOWERCASE = "lowercase";
	const std::string S_REPEAT = "repeat";
	const std::string S_ROTATE = "rotate";
	const std::string S_INSERT = "insert";
	const std::string S_REVERT = "revert";
	const std::string S_PRINT = "print";

	// Constante para caracter de fin de instrucción
	const std::string S_FIN_INSTRUCCION = ";";
}




/* ****************************************************************************
 * DEFINICIONES DE MÉTODOS DE LA CLASE
 * ***************************************************************************/


// Parsea el archivo de reglas.
// PRE: 'archivo' es el nombre de archivo que contiene las reglas; 'tx' es
// un puntero a un Transmisor el cual puede ser usado por alguna regla
// para emitir palabras.
// POST: se devuelve una referencia a una lista que contiene, en orden
// de aparición en el archivo, los objetos que son Regla. La lista se 
// encontrará vacía de producirse un error en la apertura del archivo o si
// este último no contenía instrucciones válidas, debiéndose considerarse como
// erróneo.
Lista< Regla > ParserReglas::parsear(const std::string& nombre_archivo, 
	Transmisor *tx) {
	// Creamos la lista de reglas
	Lista< Regla > lReglas;

	// Abrimos archivo
	std::ifstream archivo;
	archivo.open(nombre_archivo.c_str());

	// Verificamos que se halla abierto correctamente
	if(!archivo.is_open()) return lReglas;


	// Variables auxiliares para parseo
	std::string instruccion, mmm, fin;
	int n, m, r, i;

	// Procesamos cada instrucción. Si alguna no esta definida, no se 
	// considera y se sigue procesando las restantes.
	while(archivo >> instruccion) {
		// Filtros
		if(instruccion == S_UPPERCASE) {
			archivo >> n >> m >> fin;
			lReglas.insertarUltimo(new RUppercase(n, m));
		}
		else if (instruccion == S_LOWERCASE) {
			archivo >> n >> m >> fin;
			lReglas.insertarUltimo(new RLowercase(n, m));
		}
		else if (instruccion == S_REPEAT) {
			archivo >> n >> m >> r >> i >> fin;
			lReglas.insertarUltimo(new RRepeat(n, m, r, i));
		}
		else if (instruccion == S_ROTATE) {
			archivo >> n >> fin;
			lReglas.insertarUltimo(new RRotate(n));
		}
		else if (instruccion == S_INSERT) {
			archivo >> i >> mmm >> fin;
			lReglas.insertarUltimo(new RInsert(i, mmm));
		}
		else if (instruccion == S_REVERT) {
			archivo >> i >> fin;
			lReglas.insertarUltimo(new RRevert(i));
		}
		else if (instruccion == S_PRINT) {
			archivo >> fin;
			lReglas.insertarUltimo(new RPrint(tx));
		}
		// Caso en que no matchea con ninguna instrucción. Lo consideramos un
		// error.
		else {
			// Vaciamos la lista y la devolvemos vacía
			while(!lReglas.estaVacia())
				delete lReglas.eliminarPrimero();
			break;
		}
	}

	// Cerramos el archivo
	archivo.close();

	return lReglas;
}
