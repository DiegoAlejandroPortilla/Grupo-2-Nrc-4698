/*Universidad de las Fuerzas Armadas ESPE
 Desarrollo de Aplicaciones de Software
 Estructura de Datos
 Ing. Fernando Solis
 Autores: Diego Portilla 
*/
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string>
#include "listasdobles.h"
#include "listasdobles.cpp"
#define ASCENDENTE 1
#define DESCENDENTE 0
#include <iostream>

using namespace std;
void validarinsertarporcabeza();

ListasDobles lista ;
	char op;
	int val;
	ListasDobles a;
	int opcion;
	int dato;
int main(int argc, char** argv) {
	do{
		cout<<"Bienvenido al programa de listas dobles"<<endl;
		cout<<"1. insertar un valor  "<<endl;
		cout<<"2. borrar un valor"<<endl;
		cout<<"3. mostrar la lista"<<endl;
		cout<<"4. eliminar lista"<<endl;
		cout<<"5. promedio de la lista"<<endl;
		cout<<"6. salir"<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:
				validarinsertarporcabeza();
				system("pause");
				break;
			case 2:
				cout<<"ingrese el valor a borrar"<<endl;
				cin>>val;
				lista.Borrar(&lista,val);
				cout<<"el valor ha sido borrado"<<endl;
				system("pause");
				break;
			case 3:
				lista.MostrarLista(&lista,ASCENDENTE);
				lista.MostrarLista(&lista,DESCENDENTE);
				system("pause");	
				break;
			case 4:
				lista.BorrarLista(&lista);
				cout<<"la lista ha sido borrada"<<endl;
				system("pause");
				break;
			case 5:
				lista.MostrarLista(&lista,ASCENDENTE);
				lista.PromediodeLista(&lista);
				cout<<"el promedio de la lista es: "<<lista.PromediodeLista(&lista)<<endl;
				system("pause");
			case 6:
				cout<<"Saliendo"<<endl;
				system("pause");
				break;
			default:
				cout<<"opcion no valida"<<endl;
				system("pause");
				break;
		}
		system("cls");
	}while(opcion!=6);

}

bool isNumber(string opcion){
    for(int i = 0; i < opcion.length(); i++){
        if(opcion[i] < '0' || opcion[i] > '9'){
            return false;
        }
    }
    return true;
}

void validarinsertarporcabeza(){
    string dato1;
    cout << "Ingrese un dato: " << endl;
    cin >> dato1;
    if(isNumber(dato1)){
        dato = stoi(dato1);
        lista.Insertar(&lista,dato);
        cout << "Dato insertado" << endl;
    }else{

       validarinsertarporcabeza();                 
    }
}
	
	/*
	do{
		printf("\n Ingrese el elemento a la lista : ");
		scanf("%d",&val);
		lista.Insertar(&lista,val);
		printf("\n El valor se agrego a la lista");
		printf("\n Desea ingreasar otro s/n?\n"); 
		op=getche();
		op=toupper(op);
	}while(op=='S');

		lista.MostrarLista(&lista, ASCENDENTE);
		lista.MostrarLista(&lista, DESCENDENTE);
	do{
		printf("\n Ingrese el elemento a Borrar ");
		scanf("%d",&val);
		lista.Borrar(&lista, val);
		lista.MostrarLista(&lista, ASCENDENTE);
		lista.MostrarLista(&lista, DESCENDENTE);
		printf("\n Desea ingreasar otro elemento a borar s/n?\n"); 
		op=getche();
		op=toupper(op);
	}while(op=='S');

	lista.MostrarLista(&lista, ASCENDENTE);
	lista.MostrarLista(&lista, DESCENDENTE);
	lista.BorrarLista(&lista);
	system("PAUSE");
	return 0;

}*/

