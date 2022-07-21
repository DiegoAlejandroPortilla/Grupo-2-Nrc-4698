#pragma once 
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Nodo.h"

using namespace std;

Nodo::Nodo(){
    this->dato = 0; 
    this->siguiente = NULL;
    this->anterior = NULL;


    
}
Nodo::~Nodo(){
    this->dato = 0;
    this->siguiente = anterior;
    this->anterior = siguiente;
}

int Nodo::getDato(){
    return this->dato;
}

Nodo* Nodo::getSiguiente(){
    return this->siguiente;
}
Nodo* Nodo::getAnterior(){
    return this->anterior;
}
void Nodo::setDato(int dato){
    this->dato = dato;
}
void Nodo::setSiguiente(Nodo* siguiente){
    this->siguiente = siguiente;
}
void Nodo::setAnterior(Nodo* anterior){
    this->anterior = anterior;
}

