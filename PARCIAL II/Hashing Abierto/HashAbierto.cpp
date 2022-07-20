#pragma once 
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "HashAbierto.h"
#define NCasillas  12


using namespace std;

HashAbierto::HashAbierto()
{
    numeroCasillas = NCasillas;
    numeroCasillasOcupadas = 0;
    numeroCasillasLibres = numeroCasillas;
    for(int i = 0; i < numeroCasillas; i++){
        casillas[i] = "";
    }
}
HashAbierto::~HashAbierto()
{
    //dtor
}
void HashAbierto::insertar(string nombre)
{
    if(numeroCasillasOcupadas == numeroCasillas){
        cout << "No se puede insertar, el hash esta lleno" << endl;
    }
    else{
        int posicion = hash(nombre);
        if(casillas[posicion] == ""){
            casillas[posicion] = nombre;
            numeroCasillasOcupadas++;
            numeroCasillasLibres--;
        }
        else{
            int posicion2 = hash2(nombre);
            if(casillas[posicion2] == ""){
                casillas[posicion2] = nombre;
                numeroCasillasOcupadas++;
                numeroCasillasLibres--;
            }
            else{
                cout << "No se puede insertar, el hash esta lleno" << endl;
            }
        }
    }
}
void HashAbierto::eliminar(string nombre)
{
    if(numeroCasillasOcupadas == 0){
        cout << "No se puede eliminar, el hash esta vacio" << endl;
    }
    else{
        int posicion = hash(nombre);
        if(casillas[posicion] == ""){
            cout << "No se puede eliminar, el elemento no existe" << endl;
        }
        else{
            if(casillas[posicion] == nombre){
                casillas[posicion] = "";
                numeroCasillasOcupadas--;
                numeroCasillasLibres++;
            }
            else{
                int posicion2 = hash2(nombre);
                if(casillas[posicion2] == ""){
                    cout << "No se puede eliminar, el elemento no existe" << endl;
                }
                else{
                    if(casillas[posicion2] == nombre){
                        casillas[posicion2] = "";
                        numeroCasillasOcupadas--;
                        numeroCasillasLibres++;
                    }
                    else{
                        cout << "No se puede eliminar, el elemento no existe" << endl;
                    }
                }
            }
        }
    }
}
bool HashAbierto::buscar(string nombre)
{
    if(numeroCasillasOcupadas == 0){
        cout << "No se puede buscar, el hash esta vacio" << endl;
        return false;
    }
    else{
        int posicion = hash(nombre);
        if(casillas[posicion] == ""){
            cout << "No se puede buscar, el elemento no existe" << endl;
            return false;
        }
        else{
            if(casillas[posicion] == nombre){
                cout << "El elemento existe" << endl;
                return true;
            }
            else{
                int posicion2 = hash2(nombre);
                if(casillas[posicion2] == ""){
                    cout << "No se puede buscar, el elemento no existe" << endl;
                    return false;
                }
                else{
                    if(casillas[posicion2] == nombre){
                        cout << "El elemento existe" << endl;
                        return true;
                    }
                    else{
                        cout << "No se puede buscar, el elemento no existe" << endl;
                        return false;
                    }
                }
            }
        }
    }
}
void HashAbierto::imprimir()
{
    for(int i = 0; i < numeroCasillas; i++){
        cout << casillas[i] << endl;
    }
}
int HashAbierto::hash(string nombre)
{
    int posicion = 0;
    for(int i = 0; i < nombre.length(); i++){
        posicion += nombre[i];
    }
    posicion = posicion % numeroCasillas;
    return posicion;
}
int HashAbierto::hash2(string nombre)
{
    int posicion = 0;
    for(int i = 0; i < nombre.length(); i++){
        posicion += nombre[i];
    }
    posicion = posicion % numeroCasillas;
    posicion = (posicion + 1) % numeroCasillas;
    return posicion;
}
