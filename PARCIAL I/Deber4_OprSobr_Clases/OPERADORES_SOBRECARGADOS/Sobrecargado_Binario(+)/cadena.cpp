#include<iostream>
#include<iomanip>
#include "cadena.h"
#include<string.h>
using namespace std;

Cadena::Cadena(char *c)
{    strcpy(cad,c);
}

char *Cadena::DameCadena(void)
{    return cad;
}

void Cadena::operator +(Cadena C)
{    strcat(cad, C.DameCadena());
}
