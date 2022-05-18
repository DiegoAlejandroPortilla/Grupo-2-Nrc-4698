/*
	UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
	Autores: Diego Portilla
			 Darwin Valdiviezo
	NRC: 4698
	Nombre de la materia: Estructura de Datos
*/

#include <iostream>
#include "Reloj.h"
#include "Reloj.cpp"
using namespace std;

int main(int argc, char** argv) {
{   Reloj R(10,59,56);
    for (int i=0; i<10; i++, ++R)
    cout <<setw(4)<< R.Hora() <<setw(4)<< R.Minuto()
         <<setw(4)<< R.Segundo() << endl;
}
}
