/*
	UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
	Autores: Diego Portilla 
			 Darwin Valdiviezo
	Fecha de creación: 12 de Mayo del 2022
	Fecha de modificación: 12 de Mayo del 2022
	NRC: 4698
	Nombre de la materia: Estructura de Datos
*/

#include <iostream>
#include <string>
#include <sstream>
#include "Cproceso.cpp"
int main(int argc, char** argv) {
 	string str = "50";
	int a = 9;
	int b;
	istringstream(str) >> (a,b); // Cambio de String a int(dato)
	Cproceso *obj1=new Cproceso(a,b);
	obj1->imprimirObj(*obj1);

	return 0;
}
