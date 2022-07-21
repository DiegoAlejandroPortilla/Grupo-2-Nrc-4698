#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Nodo.h"
#include "Nodo.cpp"
#include "ListaCircular.h"
#include "Lista.cpp"

using namespace std;
int opcion;

ListaCircular *listaCircular = new ListaCircular();

int main(){
    
do{
    cout<<"Bienvenido al programa de listas dobles circulares"<<endl;
    cout<<"1. Insertar dato "<<endl;
    cout<<"2. Desplegar datos de la lista"<<endl;
    cout<<"3. Eliminar dato"<<endl;
    cout<<"4. Buscar dato"<<endl;
    cout<<"5. Modificar dato"<<endl;
    cout<<"6. Salir"<<endl;
    
    cin >> opcion;
    
    switch(opcion){
        case 1:
            listaCircular->insertarNodo();
            system("pause");
        break;
        case 2:
            cout << "Lista por cabeza" << endl;
            listaCircular->desplegarListaporCabeza();
            cout<<"Lista por cola"<<endl;
            listaCircular->desplegarListaporCola();
            system("pause");
        break;
        case 3:
            listaCircular->eliminarNodo();
            system("pause");
        break;
        case 4:
            listaCircular->buscarNodo();
            system("pause");
        break;
        case 5:
            listaCircular->modificarNodo();
            system("pause");
        break;
        case 6:
            cout<<"Gracias por usar el programa"<<endl;
        break;
        default:
            cout<<"Opcion no valida"<<endl;
            system("pause");
        break;
            
    }
    system("cls");
}while(opcion != 9);
    return 0;
}





