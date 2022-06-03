/*
	UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
	Autores: Diego Portilla
			 Darwin Valdiviezo
	NRC: 4698
	Nombre de la materia: Estructura de Datos
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "binario.h"
#include "binario.cpp"

int main(int argc, char** argv) {
    int val;
    char cad[100];
    char *cad1[100];
    binario b1;
    printf("Ingrese un numero: ");
    scanf("%d",&val);
    b1.decimaBinario(val,cad);
    b1.imprimir(val,*cad1);
    printf("\n");
    return 0;
}
