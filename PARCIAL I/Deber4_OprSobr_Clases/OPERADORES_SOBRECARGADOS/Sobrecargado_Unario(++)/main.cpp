/*
	UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
	Autores: Diego Portilla
			 Darwin Valdiviezo
	NRC: 4698
	Nombre de la materia: Estructura de Datos
*/

#include <iostream>
#include "operator.h"
#include "operator.cpp"
using namespace std;

int main(int argc, char** argv) {
{    A A1(2),A2(3),A3;
     cout << "Inicialmente : " << endl;
     cout << "A1 : " << A1.DameX()<< endl;
     cout << "A2 : " << A2.DameX()<< endl;
     cout << endl;

     A3 = ++A1;
     cout << "Como prefijo A3 = ++A1 : " << endl;
     cout << "A1 : " << A1.DameX()<< endl;
     cout << "A3 : " << A3.DameX()<< endl;

     A3 = A2++;
     cout << endl;
     cout << "Como sufijo A3 = A2++: " << endl;
     cout << "A2 : " << A2.DameX()<< endl;
     cout << "A3 : " << A3.DameX()<< endl;
}
}
