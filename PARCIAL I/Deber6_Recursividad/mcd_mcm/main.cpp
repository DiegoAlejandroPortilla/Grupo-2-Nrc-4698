/*
	UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
	Autores: Diego Portilla
			 Darwin Valdiviezo
	NRC: 4698
	Nombre de la materia: Estructura de Datos
*/

#include <iostream>
#include "recursividad.h"
#include "recursividad.cpp"


using namespace std;

int main(int argc, char** argv) {
{int a, b;
funcion r;
cout<<"Numero 1: ";
cin>>a;
cout<<"Numero 2: ";
cin>>b;
cout<<"\nEl maximo comun divisor es: "<<r.MCD(a,b);
cout<<"\nEl minimo comun multiplo es: "<<r.MCM(a,b);
}
}
