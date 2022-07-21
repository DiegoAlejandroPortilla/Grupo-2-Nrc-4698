#pragma once
#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include "OrdenamientoPortilla.h"
#include "0Vector.cpp"
#include "0Vector.h"

using namespace std;

OrdenamientoPortilla::OrdenamientoPortilla() {
}
OrdenamientoPortilla::~OrdenamientoPortilla() {
}

int generarNumero() {
    return rand() % 100;
}

void OrdenamientoPortilla::push_back(const int &data) {
        if (elementos == capacidad) {
                cout << "El vector esta lleno" << endl;
        }
        else {
                arrayInterno[elementos] = data;
                elementos++;
        }
}
void OrdenamientoPortilla::pop_back() {
        if (elementos == 0) {
                cout << "El vector esta vacio" << endl;
        }
        else {
                elementos--;
        }
}
void OrdenamientoPortilla::vaciar() {
        elementos = 0;
}
bool OrdenamientoPortilla::empty() {
        if (elementos == 0) {
                return true;
        }
        else {
                return false;
        }
}
int OrdenamientoPortilla::size() {
        return elementos;
}
int OrdenamientoPortilla::capacity() {
        return capacidad;
}
int& OrdenamientoPortilla::operator[](int pos) {
        return arrayInterno[pos];
}
int *OrdenamientoPortilla::get(int pos) {
        return arrayInterno + pos;
}
int OrdenamientoPortilla::getElementos() {
        return elementos;
}
int *OrdenamientoPortilla::getArrayInterno() {
        return arrayInterno;
}
void OrdenamientoPortilla::imprimir(OrdenamientoPortilla &vector) {
        for (int i = 0; i < vector.getElementos(); i++) {
                cout << vector.getArrayInterno()[i] << " ";
        }
        cout << endl;
}
void OrdenamientoPortilla::unirVectores(OrdenamientoPortilla &vect) {
        for (int i = 0; i < vect.getElementos(); i++) {
                push_back(vect.getArrayInterno()[i]);
        }
}
void OrdenamientoPortilla::generarNumerosAleatorios(int cantidad) {
        for (int i = 0; i < cantidad; i++) {
                push_back(generarNumero());
        }
}

//funcion para seleccionar elementos del vector de 5 en 5 y copiarlos en un nuevo vector
void OrdenamientoPortilla::copiarPrimeros5Elementos() {
        OrdenamientoPortilla vect;
        for (int i = 0; i < 5; i++) {
                vect.push_back(arrayInterno[i]);
        }
        unirVectores(vect);
}
void OrdenamientoPortilla::copiarSiguientes5Elementos() {
        OrdenamientoPortilla vect;
        for (int i = 5; i < elementos; i++) {
                vect.push_back(arrayInterno[i]);
        }
        unirVectores(vect);
}
void OrdenamientoPortilla::ordenarShell() {
        int i, j, k, aux;
        int incremento = 3;
        while (incremento > 0) {
                for (i = 0; i < elementos; i++) {
                        for (j = i; j >= incremento; j -= incremento) {
                                if (arrayInterno[j] < arrayInterno[j - incremento]) {
                                        aux = arrayInterno[j];
                                        arrayInterno[j] = arrayInterno[j - incremento];
                                        arrayInterno[j - incremento] = aux;
                                }
                        }
                }
                incremento = incremento / 2;
        }
}

void OrdenamientoPortilla::imprimirOrdenado() {
        for (int i = 0; i < elementos; i++) {
                cout << arrayInterno[i] << " ";
        }
        cout << endl;
}
