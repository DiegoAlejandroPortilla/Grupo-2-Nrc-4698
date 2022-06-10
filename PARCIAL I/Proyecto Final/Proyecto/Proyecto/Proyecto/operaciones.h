#pragma once
/*
* @flie operaciones.h
* @author Diego Portilla - Darwin Valdiviezo - Estructura de Datos
* @date 9/6/2022
* @brief Archivo de cabecera para la clase operaciones
* @version 1.0
* 
*@copyright Copyright (c) 2022,Diego Portilla - Darwin Valdiviezo
*@license MIT License
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
#include "celular.h"
#include "Cliente.h"


using namespace std;
int opcion;
string numeroSerie;
string opcion1;
bool validarNumeroSerie(string numeroSerie){
    if(numeroSerie.length() == 12){
        return true;
    }
    else{
        return false;
    }
}
bool isNumber(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] < '0' || str[i] > '9') {
            return false;
        }

    }
    
    return true;
}
bool validarNumeroTelefono(string numero) {
    if (numero.length() != 10) {
        return false;
    }
    if (!isNumber(numero)) {
        return false;
    }
    return true;
}

bool validarLetras(string cadena){
    for(int i=0;i<cadena.length();i++){
        if(!isalpha(cadena[i])){
            return false;
        }
    }
    return true;
}
bool isAlpha(string cadena){
    for(int i=0;i<cadena.length();i++){
        if(!isalpha(cadena[i])){
            return false;
        }
    }
    return true;
}
bool validarMarcadeCelular(string marca){
    if(marca == "Samsung" ||marca == "samsung"|| marca == "Apple" || marca == "apple" || marca == "Huawei" || marca == "huawei"  || marca == "Xiaomi" ||marca == "xiaomi" || marca == "LG" ||marca == "lg" || marca == "Motorola" ||marca == "motorola" || marca == "Sony"||marca == "sony"|| marca == "Nokia" ||marca == "nokia"|| marca == "Otro"||marca == "otro"){
        return true;
    }
    return false;
}



bool validarTelefono(string cadena){
    if(cadena.length()!=10){
        return false;
    }
    for(int i=0;i<cadena.length();i++){
        if(!isdigit(cadena[i])){
            return false;
        }
    }
    return true;
}

bool validate_id(string cedula){

    if (cedula.length() != 10)
    {
        return true;
    }

    int temp;
    int sum_par = 0;
    int sum_impar = 0;
    int sum;

    int i = 1;
    std::string digits = cedula.substr(0, cedula.size() - 1);
    for (char & c : digits)
    {
        int digit = c - '0';
        if (i % 2 == 0) {
            sum_par += digit;
        }
        else {
            if ((digit * 2) > 9)
            {
                sum_impar += (digit * 2) - 9;
            }
            else
            {
                sum_impar += (digit * 2);
            }
        }
        i++;
    }

    sum = sum_par + sum_impar;
    int verifier = cedula.at(cedula.size() -1) - '0';
    int higher = (10 - (sum % 10)) + sum;

    if (sum % 10 == 0)
    {
        return verifier != 0;
    }
    if ((higher -sum) == verifier) {
        return false;
    }
    else {
        std::cout << "\nLa cedula ingresada es invalida" << std::endl;
        return true;
    }
}

bool buscarNumerodeSerie(vector<celular> &compra, string numeroSerie){
    for(int i = 0; i < compra.size(); i++){

        if(numeroSerie == compra[i].getnSerie()){
			return true;
			
		}

    }
	return false;

}

void abrirPdf(){
    system("start Manual_de_Usuario.gui");
}





void comprarCelular(vector<celular> &compra){
    string marca , modelo , color ;
    cout<<"Ingrese el numero de serie:";
    cin>>numeroSerie;
    while(!validarNumeroSerie(numeroSerie)){
        cout<<"El numero de serie debe tener 12 caracteres"<<endl;
        cout<<"Ingrese el numero de serie:";
        cin>>numeroSerie;
    }
    while(buscarNumerodeSerie(compra,numeroSerie)){
        cout<<"Numero de serie existente"<<endl;
        cout<<"No puede exister dos o mas celulares con el mismo numero de serie"<<endl;
        cout<<"Ingrese el numero de serie:";
        cin>>numeroSerie;
    }
    cout<<"\tMarcas disponibles: Samsung, Apple, Xiaomi, Huawei , LG, Motorola, Sony, Nokia, Otro"<<endl;
    cout << "Ingrese marca: ";
    cin >> marca;
    
    while(!validarMarcadeCelular(marca)){
        cout << "Ingrese marca: "<<endl;
        cin >> marca;
        
    }
    cout << "Ingrese modelo: ";
    cin.ignore();
    getline(cin, modelo);
    cout << "Ingrese color: ";
    cin >> color;
    while(validarLetras(color) == false){
        cout << "Ingrese color: "<<endl;
        cin >> color;
    }
    celular cel(numeroSerie,marca,modelo,color);
    compra.push_back(cel);
    
}

void imprimirCelular(vector<celular> &compra){
    if(compra.size() == NULL){
        cout << "lista vacia" << endl;
    }else{
        for(int i = 0; i < compra.size(); i++){
			cout << "******************************" << endl;
			cout <<"Modelo:" << compra[i].getModelo() << endl;
            cout <<"Marca:"<< compra[i].getMarca()<<endl;
            cout <<"Numero de Serie:" << compra[i].getnSerie() << endl;
            cout <<"Color:"<< compra[i].getColor() <<endl;
        }
    }
}

bool buscarCedula(vector<cliente> &venta, string cedula){
    for(int i = 0; i < venta.size(); i++){

        if(cedula == venta[i].getnCedula()){
			cout << "Se encontro" << endl;
			return true;
			
		}

    }
	return false;

}
bool buscarNumeroSerie(vector<celular> &compra, string numeroSerie){
    for(int i = 0; i < compra.size(); i++){

        if(numeroSerie == compra[i].getnSerie()){
            cout << "Se encontro" << endl;
            return true;
            
        }

    }
    return false;

}

void venderCelular(vector<cliente> &venta , vector<celular> &compra){

    string  nombre , apellido , cedula ,telefono , nuevoNumeroSerie , nuevoModelo , nuevoColor, nuevoMarca; 
    cout << "Ingrese el numero de Serie del celular a vender: ";
    cin >> numeroSerie;
    while (buscarNumeroSerie(compra, numeroSerie) == false){
        cout << "Numero de serie no encontrado" << endl;
        cout << "Ingrese el numero de Serie del celular a vender: ";
        cin >> numeroSerie;
    }
    for (int i = 0; i < compra.size(); i++){
        if(numeroSerie == compra[i].getnSerie()){
            nuevoNumeroSerie = compra[i].getnSerie();
            nuevoModelo = compra[i].getModelo();
            nuevoColor = compra[i].getColor();
            nuevoMarca = compra[i].getMarca();
            compra.erase(compra.begin() + i);
        }
    }
    for (int i = 0; i < venta.size(); i++){
        if(cedula == venta[i].getnCedula()){
            nombre = venta[i].getNombre();
            apellido = venta[i].getApellido();
            cedula = venta[i].getnCedula();
            telefono = venta[i].getnTelefono();
        }
    }
    cout << "Ingrese el numero de cedula: ";
    cin >> cedula;
    while (validate_id(cedula) == true){
        cout << "Cedula invalida" << endl;
        cout << "Ingrese el numero de cedula: ";
        cin >> cedula;
    }
    if(buscarCedula(venta, cedula) == false){
        cout << "Cedula no encontrada" << endl;
        cout <<" \t\t Cliente nuevo "<< endl;
        cout << "Ingrese su nombre:";
        cin >> nombre;
        while(validarLetras(nombre) == false){
			cout << "El nombre no puede contener numeros" << endl;
            cout << "Ingrese su nombre:";
            cin >> nombre;
        }
        cout << "Ingrese su apellido:";
        cin >> apellido;
        while (validarLetras(apellido) == false){
            cout << "El apellido no puede contener numeros" << endl;
            cout << "Ingrese su apellido:";
            cin >> apellido;
        }
        cout << "Ingrese su numero de telefono:";
        cin >> telefono;
        while (validarNumeroTelefono(telefono) == false){
            cout << "Numero de telefono invalido" << endl;
            cout << "Ingrese su numero de telefono:";
            cin >> telefono;
        }  
        cliente cli(cedula, nombre, apellido, telefono,nuevoNumeroSerie, nuevoModelo, nuevoMarca, nuevoColor);
        venta.push_back(cli);
        cout<<"Celular vendido"<<endl;
    }else{
        cout<<"Cliente existente"<<endl;
        for (int i = 0; i < venta.size(); i++){
            if(cedula == venta[i].getnCedula()){
                nombre = venta[i].getNombre();
                apellido = venta[i].getApellido();
                cedula = venta[i].getnCedula();
                telefono = venta[i].getnTelefono();
            }
        }
        cliente cli2(cedula, nombre, apellido, telefono,nuevoNumeroSerie, nuevoModelo, nuevoMarca, nuevoColor);
        venta.push_back(cli2);
        cout<<"Celular vendido"<<endl;
    }
    
}

void imprimirVentas(vector<cliente> &venta){
    if(venta.size() == NULL){
        cout << "Lista vacia" << endl;
    }else{
        for(int i = 0; i < venta.size(); i++){
            cout <<"****************************************" << endl;
            cout <<"Numero de Cedula : "<<venta[i].getnCedula()<<endl;
            cout <<"Nombre :"<< venta[i].getNombre() <<endl;
            cout <<"Apellido :"<<venta[i].getApellido()<<endl;
            cout <<"N.Telefono :"<< venta[i].getnTelefono() <<endl;
            cout <<"Datos del celular vendido"<<endl;
            cout <<"Marca :"<<venta[i].getMarca()<<endl;
            cout <<"Modelo :"<<venta[i].getModelo()<<endl;
            cout <<"N.Serie :"<< venta[i].getnSerie()<<endl;
            cout <<"Color :"<< venta[i].getColor() <<"\t"<< endl;
        }
    }
}
void buscarCelularesdeUnCliente(vector<cliente> &venta){
    string cedula;
    if (venta.size() == NULL){
        cout << "Lista vacia" << endl;
    }else{
        cout << "Ingrese el numero de cedula del cliente: ";
        cin >> cedula;
        for (int i = 0; i < venta.size(); i++){
            if(cedula == venta[i].getnCedula()){
                cout << "****************************************" << endl;
                cout <<"Numero de Cedula : "<<venta[i].getnCedula()<<endl;
                cout <<"Nombre :"<< venta[i].getNombre() <<endl;
                cout <<"Apellido :"<<venta[i].getApellido()<<endl;
                cout <<"N.Telefono :"<< venta[i].getnTelefono() <<endl;
                cout <<"Datos del celular vendido"<<endl;
                cout <<"Marca :"<<venta[i].getMarca()<<endl;
                cout <<"Modelo :"<<venta[i].getModelo()<<endl;
                cout <<"N.Serie :"<< venta[i].getnSerie()<<endl;
                cout <<"Color :"<< venta[i].getColor() <<"\t"<< endl;
            }else if(i == venta.size()-1){
                cout << "Cliente no encontrado" << endl;
            }
        }
    }
}

void buscarCelular(vector<celular> &compra){
    if (compra.size() == NULL){
        cout << "Lista vacia" << endl;
    }
    else{
        cout << "Ingrese Numero de Serie: ";
        cin >> numeroSerie;
        for(int i = 0; i < compra.size(); i++){
            if(compra[i].getnSerie() == numeroSerie){
                cout<<"Celular encontrado"<<endl;
                cout << "******************************" << endl;
                cout << "Modelo:" << compra[i].getModelo() << endl;
                cout <<"Marca:"<< compra[i].getMarca()<<endl;
                cout << "Numero de Serie:" << compra[i].getnSerie() << endl;
                cout <<"Color:"<< compra[i].getColor() <<endl;
                cout << "******************************" << endl;
                
            }else if(i == compra.size()-1){
                cout<<"No se encontro el celular"<<endl;
            }

        }
    }
}

void modificarCelular(vector<celular> &compra){
    
    if (compra.size() == NULL){
        cout << "Lista vacia" << endl;
    }else{
        string nuevoNumeroSerie, nuevaMarca, nuevoModelo, nuevoColor;
		
        cout << "Ingrese Numero de Serie: ";
        cin >> numeroSerie;
    do{
        for(int i = 0; i < compra.size(); i++){
            if(numeroSerie == compra[i].getnSerie()){
                cout<<"\t\tCelular encontrado"<<endl;
                cout <<"\t\t******************************" << endl;
                cout <<"\t\tModelo:" << compra[i].getModelo() << endl;
                cout <<"\t\tMarca:"<< compra[i].getMarca()<<endl;
                cout <<"\t\tNumero de Serie:" << compra[i].getnSerie() << endl;
                cout <<"\t\tColor:"<< compra[i].getColor() <<endl;
                cout << "\t\t******************************" << endl;

                cout <<"Que dato desea modificar?"<<endl;
                cout <<"1. Marca"<<endl;
                cout <<"2. Modelo"<<endl;
                cout <<"3. Color"<<endl;
                cout <<"4. Numero de Serie"<<endl;
                cin >> opcion1;
                if(isNumber(opcion1)){
                    int opcion = atoi(opcion1.c_str());
                    switch(opcion){
                        case 1:
                            cout<<"\tMarcas disponibles: Samsung, Apple, Xiaomi, Huawei , LG, Motorola, Sony, Nokia, Otro"<<endl;
                            cout << "Ingrese nueva Marca: ";
                            cin >> nuevaMarca;
                            while(!validarMarcadeCelular(nuevaMarca)){
                                cout << "Ingrese nueva Marca: ";
                                cin >> nuevaMarca;
                            }
                            for (int i = 0; i < compra.size(); i++){
                                if(numeroSerie == compra[i].getnSerie()){
                                    compra[i].setMarca(nuevaMarca);
                                }
                            }
                                cout << "Marca modificado" << endl;
                                system("pause");
                            return;
                        case 2:
                            cout << "Ingrese nuevo Modelo: ";
                            cin.ignore();
                            getline(cin, nuevoModelo);
                            for (int i = 0; i < compra.size(); i++){
                                if(numeroSerie == compra[i].getnSerie()){
                                    compra[i].setModelo(nuevoModelo);
                                }
                            }
                            cout << "Modelo modificado" << endl;
                            system("pause");
                            return;
                        case 3:
                            cout << "Ingrese nuevo Color: ";
                            cin >> nuevoColor;
                            while(validarLetras(nuevoColor)==false){
                                cout << "Ingrese nuevo Color: ";
                                cin >> nuevoColor;
                            }
                            for (int i = 0; i < compra.size(); i++){
                                if(numeroSerie == compra[i].getnSerie()){
                                    compra[i].setColor(nuevoColor);
                                }
                            }
                            cout << "Color modificado" << endl;
                            system("pause");
                            return;
                        case 4:
                            cout << "Ingrese nuevo Numero de Serie: ";
                            cin >> nuevoNumeroSerie;
                            while(validarNumeroSerie(nuevoNumeroSerie)==false){
                                cout << "Ingrese nuevo Numero de Serie: ";
                                cin >> nuevoNumeroSerie;
                            }
                            for (int i = 0; i < compra.size(); i++){
                                if(numeroSerie == compra[i].getnSerie()){
                                    compra[i].setnSerie(nuevoNumeroSerie);
                                }
                            }
                            cout << "Numero de Serie modificado" << endl;
                            system("pause");
                            return;
                        default:
                            cout << "Opcion no valida" << endl;
                            system("pause");			
                            return;
                    }
                }else{
                        cout<<"Opcion no valida"<<endl;
                        system("pause");
                    }
                }else if(i == compra.size()-1){
                    cout<<"No se encontro el celular"<<endl;
                    system("pause");
                    return;
                }
            
        }
        system ("cls");
        }while(opcion != 5);
    }
}
void modificarCliente(vector<cliente> &venta){
    string opcion1;
    if (venta.size() == NULL){
        cout << "Lista vacia" << endl;
    }else{
        string cedula ,nuevoNombre, nuevoApellido, nuevoTelefono, nuevaCedula;
        cout << "Ingrese Numero de Cedula: ";
        cin >> cedula;
        do{
            for(int i = 0; i < venta.size(); i++){
                if(cedula == venta[i].getnCedula()){
                    cout<<"\t\tCliente encontrado"<<endl;
                    cout <<"\t\t******************************" << endl;
                    cout <<"\t\tNumero de Cedula:" << venta[i].getnCedula() << endl;
                    cout <<"\t\tNombre:" << venta[i].getNombre() << endl;
                    cout <<"\t\tApellido:"<< venta[i].getApellido()<<endl;
                    cout <<"\t\tTelefono:"<< venta[i].getnTelefono() <<endl;
                    cout << "\t\t******************************" << endl;

                    cout <<"Que dato desea modificar?"<<endl;
                    cout <<"1. Nombre"<<endl;
                    cout <<"2. Apellido"<<endl;
                    cout <<"3. Telefono"<<endl;
                    cout <<"4. Numero de Cedula"<<endl;
                    cin >> opcion1;
                    if(isNumber(opcion1)){
                        int opcion = atoi(opcion1.c_str());
                        switch(opcion){
                            case 1:
                                cout << "Ingrese nuevo Nombre: ";
                                cin >> nuevoNombre;
                                while(!validarLetras(nuevoNombre)){
                                    cout <<"El nombre no puede contener numeros"<<endl;
                                    cout << "Ingrese nuevo Nombre: ";
                                    cin >> nuevoNombre;
                                }
                                for (int i = 0; i < venta.size(); i++){
                                    if(cedula == venta[i].getnCedula()){
                                        venta[i].setNombre(nuevoNombre);
                                    }
                                }
                                    cout << "Nombre modificado" << endl;
                                    system("pause");
                                return;
                            case 2:
                                cout << "Ingrese nuevo Apellido: ";
                                cin >> nuevoApellido;
                                while(!validarLetras(nuevoApellido)){
                                    cout <<"El apellido no puede contener numeros"<<endl;
                                    cout << "Ingrese nuevo Apellido: ";
                                    cin >> nuevoApellido;
                                }
                                for (int i = 0; i < venta.size(); i++){
                                    if(cedula == venta[i].getnCedula()){
                                        venta[i].setApellido(nuevoApellido);
                                    }
                                }
                                    cout << "Apellido modificado" << endl;
                                    system("pause");
                                return;
                            case 3:
                                cout << "Ingrese nuevo Telefono: ";
                                cin >> nuevoTelefono;
                                while (validarNumeroTelefono(nuevoTelefono) == false){
                                    cout << "Numero de telefono invalido" << endl;
                                    cout << "Ingrese su numero de telefono:";
                                    cin >> nuevoTelefono;
                                }  
                                for (int i = 0; i < venta.size(); i++){
                                    if(cedula == venta[i].getnCedula()){
                                        venta[i].setnTelefono(nuevoTelefono);
                                    }
                                }
                                    cout << "Telefono modificado" << endl;
                                    system("pause");
                                return;
                            case 4:
                                cout << "Ingrese nuevo Numero de Cedula: ";
                                cin >> nuevaCedula;
                                while (validate_id(nuevaCedula) == true){
                                    cout << "Cedula invalida" << endl;
                                    cout << "Ingrese el numero de cedula: ";
                                    cin >> nuevaCedula;
                                }
                                for (int i = 0; i < venta.size(); i++){
                                    if(cedula == venta[i].getnCedula()){
                                        venta[i].setnCedula(nuevaCedula);
                                    }
                                }
                                    cout << "Numero de Cedula modificado" << endl;
                                    system("pause");    
                                return;
                            default:
                                cout << "Opcion no valida" << endl;
                                system("pause");			
                                return;
                        }
                    }else{
                        cout<<"Opcion no valida"<<endl;
                        system("pause");
                    }
            }else if(i == venta.size()-1){
                cout<<"No se encontro el cliente"<<endl;
                system("pause");
                return;
            }
        }
        system ("cls");
        }while(opcion != 4);
    }

}
        

void guardarTxt(vector<celular> &compra){
    ofstream archivo;
    archivo.open("celulares.txt");
    if(archivo.fail()){
        cout << "Error al abrir el archivo" << endl;
    }else{
        for(int i = 0; i < compra.size(); i++){
            archivo << compra[i].getMarca() << "," << compra[i].getModelo() << "," << compra[i].getnSerie() << "," << compra[i].getColor() << endl;
        }
    }
    archivo.close();
}
void guardarBin(vector<celular> &compra){
    ofstream archivo;
    archivo.open("celulares.dat", ios::binary);
    if(archivo.fail()){
        cout << "Error al abrir el archivo" << endl;
    }else{
        for(int i = 0; i < compra.size(); i++){
            archivo.write((char*)&compra[i], sizeof(celular));
        }
    }
    archivo.close();
}

void guardarClienteTxt(vector<cliente> &venta, vector<celular> &compra){
    ofstream archivo;
    archivo.open("clientes.txt");
    if(archivo.fail()){
        cout << "Error al abrir el archivo" << endl;
    }else{
        for(int i = 0; i < venta.size(); i++){
            archivo << venta[i].getNombre() << "," << venta[i].getApellido() << "," << venta[i].getnCedula() << "," << venta[i].getnTelefono() << "," << venta[i].getMarca() << "," << venta[i].getModelo() << "," << venta[i].getnSerie() << "," << venta[i].getColor()<< endl;
        }
    }
    archivo.close();
    
}
void guardarClienteBin(vector<cliente> &venta, vector<celular> &compra){
    ofstream archivo;
    archivo.open("clientes.dat", ios::binary);
    if(archivo.fail()){
        cout << "Error al abrir el archivo" << endl;
    }else{
        for(int i = 0; i < venta.size(); i++){
            for (int j = 0; j < compra.size(); j++){
                archivo.write((char*)&venta[i], sizeof(cliente));
            }
        }
    }
    archivo.close();
}

void crearArchivo(vector<celular> &compra, vector<cliente> &venta){
    ofstream archivo;
    archivo.open("Datos_del_programa.html");
    archivo<<"<!DOCTYPE html>"<<endl;
    archivo<<"<html>"<<endl;
    archivo<<"<head>"<<endl;
    archivo<<"<title>Datos del programa</title>"<<endl;
    archivo<<"</head>"<<endl;
    archivo<<"<body>"<<endl;
    archivo<<"<h1>Datos del programa</h1>"<<endl;
    archivo<<"<h2>Lista de Celulares</h2>"<<endl;
    archivo<<"<table>"<<endl;
    archivo<<"<tr>"<<endl;
    archivo<<"<th>Marca</th>"<<endl;
    archivo<<"<th>Modelo</th>"<<endl;
    archivo<<"<th>Numero de serie</th>"<<endl;
    archivo<<"<th>Color</th>"<<endl;
    archivo<<"</tr>"<<endl;
    for(int i = 0; i < compra.size(); i++){
        archivo<<"<tr>"<<endl;
        archivo<<"<td>"<<compra[i].getMarca()<<"</td>"<<endl;
        archivo<<"<td>"<<compra[i].getModelo()<<"</td>"<<endl;
        archivo<<"<td>"<<compra[i].getnSerie()<<"</td>"<<endl;
        archivo<<"<td>"<<compra[i].getColor()<<"</td>"<<endl;
        archivo<<"</tr>"<<endl;
    }
    archivo<<"</table>"<<endl;
    archivo<<"<h2>Lista de Celulares Vendidos</h2>"<<endl;
    archivo<<"<table>"<<endl;
    archivo<<"<tr>"<<endl;
    archivo<<"<th>Nombre</th>"<<endl;
    archivo<<"<th>Apellido</th>"<<endl;
    archivo<<"<th>Numero de cedula</th>"<<endl;
    archivo<<"<th>Numero de telefono</th>"<<endl;
    archivo<<"<th>Marca</th>"<<endl;
    archivo<<"<th>Numero de Serie</th>"<<endl;
    archivo<<"<th>Modelo</th>"<<endl;
    archivo<<"<th>Color</th>"<<endl;
    archivo<<"</tr>"<<endl;
    for(int i = 0; i < venta.size(); i++){
        archivo<<"<tr>"<<endl;
        archivo<<"<td>"<<venta[i].getNombre()<<"</td>"<<endl;
        archivo<<"<td>"<<venta[i].getApellido()<<"</td>"<<endl;
        archivo<<"<td>"<<venta[i].getnCedula()<<"</td>"<<endl;
        archivo<<"<td>"<<venta[i].getnTelefono()<<"</td>"<<endl;
        archivo<<"<td>"<<venta[i].getnSerie()<<"</td>"<<endl;
        archivo<<"<td>"<<venta[i].getMarca()<<"</td>"<<endl;
        archivo<<"<td>"<<venta[i].getModelo()<<"</td>"<<endl;
        archivo<<"<td>"<<venta[i].getColor()<<"</td>"<<endl;
        archivo<<"</tr>"<<endl;
    }
    archivo<<"</table>"<<endl;
    archivo<<"</body>"<<endl;
    archivo<<"</html>"<<endl;
    archivo.close();
}


void imprimirArchivo(){
    system("start Datos_del_programa.html");
    
}
                                
          



