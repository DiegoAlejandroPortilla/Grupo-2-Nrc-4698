#pragma once 
#include <iostream>
#include "Nodo.h"
#include "Nodo.cpp"


using namespace std;

class ListaCircular{
    private:
        Nodo* primero;
        Nodo* ultimo;
    public:
        ListaCircular();
        void insertarNodo();
        void desplegarListaporCabeza();
        void desplegarListaporCola();
        void buscarNodo();
        void modificarNodo();
        void eliminarNodo();
        
};




