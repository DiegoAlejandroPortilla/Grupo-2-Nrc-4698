/*
	UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
	Autores: Diego Portilla 
			 Darwin Valdiviezo
	Fecha de creación: 13 de Mayo del 2022
	Fecha de modificación: 13 de Mayo del 2022
	NRC: 4698
	Nombre de la materia: Estructura de Datos
*/

#include <iostream>
#include <cstring>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "transform.h"
#include "transform.cpp"

using namespace std;

char *ingresoDatos(const char *);

int main(){
    int opcion, valor = 0;
    char dato[10];
    string cadena;
    transform t;
    //chars c;
do{
    cout << "1.CHARACTER "<< endl;
    cout << "2.STRING "<< endl;
    cout << "3.EXIT "<< endl;
    cout << "OPTION: ";
    std::cin >> opcion;
    
        switch(opcion){
            case 1:
                char dato[10];
                strcpy(dato, ingresoDatos("INGRESE UN CARACTER: "));
                valor = atoi(dato);
                valor = valor*2;
                printf("\nEL VALOR ES: %d\n", valor);
                system("pause");
                break;
            case 2:
                cout << "Ingrese un valor: ";
                std::cin >> cadena;
                if(!t.esEntero(cadena) && !t.esFlotante(cadena) && !t.esNumeros(cadena)){
                    cout << "ES UN STRING" << endl;
                }
                else if(t.esEntero(cadena)){
                    cout << "Esto es un string" << endl;
                    cout << "Transformado a INT: " << t.entero(cadena) << endl;
                }
                else if(t.esFlotante(cadena)){
                    cout << "Esto es un string" << endl;
                    cout << "Transformado a FLOAT: " << t.flotante(cadena) << endl;
                }
                system("pause");
                break;
            case 3:
                cout << "EXIT" << endl;
                 system("pause");
                break;
            default:
                cout << "OPTION ERROR" << endl;
                 system("pause");
                break;
        }
        system("cls");
    }while(opcion != 3);
    
    return 0;
}
char *ingresoDatos(const char *cadena){
    char *dato = new char[10];
    char c;
    int i = 0;
    printf("%s", cadena);
    while((c = getch()) != 13 ){
        if((c >= '0' && c <= '9')){
            printf("%c", c);
            dato[i++] = c;
        }
    }
    dato[i] = '\0';
    return dato;
}
