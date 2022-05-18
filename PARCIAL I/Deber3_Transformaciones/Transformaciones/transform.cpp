#pragma once

#include <iostream>
#include <string>
#include "transform.h"

using namespace std;
//verificar si un numero es entero
bool transform::esEntero(std::string numero){
    int i = 0;
    while(i < numero.size()){
        if(numero[i] < '0' || numero[i] > '9'){
            return false;
        }
        i++;
    }
    return true;
}
//verificar si un numero es flotante
bool transform::esFlotante(std::string numero){
    int i = 0;
    int contador = 0;
    while(i < numero.size()){
        if(numero[i] < '0' || numero[i] > '9'){
            if(numero[i] == '.'){
                contador++;
            }
            else{
                return false;
            }
        }
        i++;
    }
    if(contador == 1){
        return true;
    }
    else{
        return false;
    }
}
//verificar si son solo numeros
bool transform::esNumeros(std::string numero){
    int i = 0;
    while(i < numero.size()){
        if(numero[i] < '0' || numero[i] > '9'){
            return false;
        }
        i++;
    }
    return true;
}

int transform::entero(string cadena){
    int numero;
    numero = atoi(cadena.c_str());
    return numero;
}

float transform::flotante(string cadena){
    float numero;
    numero = atof(cadena.c_str());
    return numero;
}