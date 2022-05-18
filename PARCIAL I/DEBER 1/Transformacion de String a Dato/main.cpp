#include <iostream>
#include <iostream>
#include <stdlib.h>
#include <typeinfo>
#include "Transformar.h"

using namespace std;

template <typename H>
void tipoDato(H);

int main()
{
    Transformar t;
    char numero[10];
    int validez;
    string num;
    
    cout << "Progarama de Cambio de String a Int"<<endl;
    cout << "Ingrese un numero: ";
    cin >> numero;
    num = numero;
    
	validez=t.validacion(numero);
    if(validez == 0)
    {
        cout << "ERROR!! No se ingreso un numero.";
    }
    else
    {
        int i = t.cambio(numero);
        tipoDato(num);
        cout << i << endl;
        tipoDato(i);
        cout << i << endl;
    }
    return 0;
}

template <typename H>
void tipoDato(H num)
{
    string dato;
    string entero="i";
    string flotante="f";
    string cadenaChar="NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE";
    dato=typeid(num).name();
    if (dato == "i"){
        cout << "El dato ingresado es un entero" << endl;
    }
    else if(dato == "f"){
        cout << "El dato ingresado es un flotante"<<endl;
    }
    else if(dato == "NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE"){
        cout << "El dato ingresado es una cadena de texto"<<endl;
    }
}
