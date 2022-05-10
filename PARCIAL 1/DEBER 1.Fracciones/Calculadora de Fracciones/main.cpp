/*
	UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
	Autores: Diego Portilla 
			 Darwin Valdiviezo
	Fecha de creación: 9 de Diciembre del 2022
	Fecha de modificación: 10 de Diciembre del 2022
	NRC: 4698
	Nombre de la materia: Estructura de Datos
*/


#include <iostream>
#include <stdlib.h>
#include "Fraccion.h"


using namespace std;


int main(int argc, char** argv) {


	Fraccion* fraccion = new Fraccion();

	fraccion->calcular();
	fraccion->imprimir();


	return 0;
}
