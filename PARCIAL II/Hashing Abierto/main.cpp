#include <iostream>
#include <fstream>
#include <sstream>
#include "HashAbierto.h"
#include "HashAbierto.cpp"
#define NCasillas  12

using namespace std;

HashAbierto h = HashAbierto();


int main(){

    string cad,opcion;
    int op;
    do{
    cout << "Ingrese una opcion"<<endl;
    cout << "1. Insertar" << endl;
    cout << "2. Eliminar" << endl;
    cout << "3. Buscar" << endl;
    cout << "4. Imprimir" << endl;
    cout << "5. Salir" << endl;
    cin >> op;
   
    switch (op){
        case 1:
            cout << "Ingrese el caracter a insertar: ";
            cin >> cad;
            h.insertar(cad);
            system("pause");
            break;
        case 2:
            cout << "Ingrese el caracter a eliminar: ";
            cin >> cad;
            h.eliminar(cad);
            cout << cad << " eliminado" << endl;
            system("pause");
            break;
        case 3:
            cout << "Ingrese el caracter a buscar: ";
            cin >> cad;
            h.buscar(cad);
            h.imprimir();
            system("pause");
            break;
        case 4:
            cout << " Hash Abierto" << endl;
            h.imprimir();
            system("pause");
            break;
        case 5:
            cout << "Saliendo..." << endl;
            system ("pause");
            break;
        default:
            cout << "Opcion no valida" << endl;
            system("pause");
            break;
    }
    system ("cls");
    }while(op != 5);
    return 0;

}
