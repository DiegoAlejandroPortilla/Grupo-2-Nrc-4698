/*
	UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
	Autores: Diego Portilla
			 Darwin Valdiviezo
	NRC: 4698
	Nombre de la materia: Estructura de Datos
*/

#include <iostream>
#include "ingresar.h"
#include "ingresar.cpp"
using namespace std;

int main(int argc, char** argv) {
{ B Ob;

   cout << "Ingrese datos :" << endl;
   while (1)
    { int p;
      cin >> p;
      if (p<=0) break;
      Ob.Ingresa(p);
    }

    cout << "Datos le¡dos :" << endl;

   for (int i=0; i<Ob.DameCant(); i++)
     cout << Ob[i] << endl;
 }
}
