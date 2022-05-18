/*
	UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
	Autores: Diego Portilla
			 Darwin Valdiviezo
	NRC: 4698
	Nombre de la materia: Estructura de Datos
*/

#include <iostream>
#include "vector.h"
#include "vector.cpp"
using namespace std;

int main(int argc, char** argv) {
{   Vector V1(10,20), V2(5,5);
     float p;

     p = V1*V2;

     cout << "P = " << p<< endl;
}
}
