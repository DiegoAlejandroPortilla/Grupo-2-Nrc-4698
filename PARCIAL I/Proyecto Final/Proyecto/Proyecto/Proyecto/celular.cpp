#include "Celular.h"
#include <iostream>
#include <string>

using namespace std;

celular :: celular(){
    nSerie = "";
    marca = "";
    modelo = "";
    color = "";
}

celular :: celular(string nSerie, string marca, string modelo, string color){
    this -> nSerie = nSerie;
    this -> marca = marca;
    this -> modelo = modelo;
    this -> color = color;
}

string celular :: getMarca(){
    return marca;
}

string celular :: getModelo(){
    return modelo;
}

string celular :: getnSerie(){
    return nSerie;
}

string celular :: getColor(){
    return color;
}

void celular :: setMarca(string marca){
    this->marca = marca;
}

void celular :: setModelo(string modelo){
    this->modelo = modelo;
}

void celular :: setnSerie(string nSerie){
    this->nSerie = nSerie;
}

void celular :: setColor(string color){
    this->color = color;
}


