#pragma once 
#include <iostream>
#include "Cliente.h"

using namespace std;

Cliente :: Cliente(){
    this->nombre = "";
    this->apellido = "";
    this->ncedula = 0;
    this->telefono = 0;
}

void Cliente :: setNombre(string nombre){
    this->nombre = nombre;
}
void Cliente :: setApellido(string apellido){
    this->apellido = apellido;
}
void Cliente :: setNcedula(int ncedula){
    this->ncedula = ncedula;
}
void Cliente :: setTelefono(int telefono){
    this->telefono = telefono;
}
string Cliente :: getNombre(){
    return this->nombre;
}
string Cliente :: getApellido(){
    return this->apellido;
}
int Cliente :: getNcedula(){
    return this->ncedula;
}
int Cliente :: getTelefono(){
    return this->telefono;
}


