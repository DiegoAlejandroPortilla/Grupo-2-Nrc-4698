/*
	*Universidad de las Fuerzas Armadas "ESPE"
    *Enunciado del problema:
	    *Programa que realize los diferentes tipos de ordenamientos (internos y externos) y busquedas.
     *Autores:
        *Curso de Estructura de Datos NRC: 4698
	*Fecha de creacion: 
        * 21-06-2022
	*Fecha de modificacion:
        * 28-06-2022
    *GitHub del grupo:	
        *https://github.com/DavidGLeal/4698_Ordenamientos
*/

#include <iostream>
#include "Menu.h"
#include "OrdenamientoPortilla.h"
#include "OrdenamientoPortilla.cpp"
#include "0Vector.h"
#include "0Vector.cpp"



OrdenamientoPortilla *ordenamientoPortilla = new OrdenamientoPortilla();



int main(int argc, char** argv) {
	
	//MenuPrincipal();

        ordenamientoPortilla->generarNumerosAleatorios(100);
        ordenamientoPortilla->imprimirOrdenado();
        ordenamientoPortilla->ordenarShell();
        cout << "Ordenado por Shell: " << endl;
        ordenamientoPortilla->imprimirOrdenado();


	return 0;
}

