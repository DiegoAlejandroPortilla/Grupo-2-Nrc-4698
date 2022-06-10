#include "Cliente.h"
#include <iostream>
#include <string>

using namespace std;

cliente :: cliente(){
    nCedula = "";
    nombre = "";
    apellido = "";
    nTelefono = "";
    marca = "";
    modelo = "";
    color = "";
    nSerie = "";
}

cliente :: cliente(string nCedula ,string nombre, string apellido, string nTelefono, string marca, string modelo,string nSerie, string color){
    this->nCedula = nCedula;
    this->nombre = nombre;
    this->apellido = apellido;
    this->nTelefono = nTelefono;
    this->marca = marca;
    this->modelo = modelo;
    this->nSerie = nSerie;
    this->color = color;
}

string cliente :: getNombre(){
    return nombre;
}
string cliente :: getApellido(){
    return apellido;
}
string cliente :: getnCedula(){
    return nCedula;
}
string cliente :: getnTelefono(){
    return nTelefono;
}
string cliente :: getMarca(){
    return marca;
}
string cliente :: getModelo(){
    return modelo;
}
string cliente :: getnSerie(){
    return nSerie;
}
string cliente :: getColor(){
    return color;
}
void cliente :: setNombre(string nombre){
    this->nombre = nombre;
}
void cliente :: setApellido(string apellido){
    this->apellido = apellido;
}
void cliente :: setnCedula(string nCedula){
    this->nCedula = nCedula;
}
void cliente :: setnTelefono(string nTelefono){
    this->nTelefono = nTelefono;
}
void cliente :: setMarca(string marca){
    this->marca = marca;
}
void cliente :: setModelo(string modelo){
    this->modelo = modelo;
}
void cliente :: setnSerie(string nSerie){
    this->nSerie = nSerie;
}
void cliente :: setColor(string color){
    this->color = color;
}


