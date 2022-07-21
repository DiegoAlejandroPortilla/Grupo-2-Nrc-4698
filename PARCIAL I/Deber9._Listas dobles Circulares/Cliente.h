#pragma once 
#include <iostream>
#include <string.h>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

class Cliente{
    private:
    string nombre;
    string apellido;
    int ncedula;
    int telefono;
    public:
    Cliente();
    void setNombre(string nombre);
    void setApellido(string apellido);
    void setNcedula(int ncedula);
    void setTelefono(int telefono);
    string getNombre();
    string getApellido();
    int getNcedula();
    int getTelefono();
};

