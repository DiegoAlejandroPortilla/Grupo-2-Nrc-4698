#pragma once 
#include <iostream>
#include "0Vector.h"
#include "0Vector.cpp"

using namespace std;

class OrdenamientoPortilla {
    private:
        int *arrayInterno = new int[100];
        int capacidad{100};
        int elementos{0};
    public :
        OrdenamientoPortilla();
        ~OrdenamientoPortilla();
        void push_back(const int &data);
        void pop_back();
        void vaciar();
        bool empty();
        int size();
        int capacity();
        int& operator[](int pos);
        int *get(int);
        int getElementos();
        int *getArrayInterno();
        void imprimir(OrdenamientoPortilla &vector);
        void unirVectores(OrdenamientoPortilla &vect);
        void generarNumerosAleatorios(int cantidad);
        void copiarPrimeros5Elementos();
        void copiarSiguientes5Elementos();
        void ordenarShell();
        void imprimirOrdenado();
};
        