#pragma once 
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#define NCasillas  12

using namespace std;

class HashAbierto{
    private:
        string casillas[NCasillas];
        int numeroCasillas;
        int numeroCasillasOcupadas;
        int numeroCasillasLibres;
    public :
        HashAbierto();
        ~HashAbierto();
        void insertar(string);
        int hash(string);
        int hash2(string);
        void eliminar(string);
        bool buscar(string);
        void imprimir();
};
