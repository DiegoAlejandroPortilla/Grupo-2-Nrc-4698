/*
	UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
	Autores: Diego Portilla
			 Darwin Valdiviezo
	NRC: 4698
	Nombre de la materia: Estructura de Datos
*/

#include <iostream>
#include "cadena.h"
#include "cadena.cpp"
using namespace std;

int main(int argc, char** argv) {
{    Cadena C1("Juan ") , C2("Lopez");
     C1+C2;
     cout << "Atributo de C1 = " << C1.DameCadena() << endl;
}
}
