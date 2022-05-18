#pragma once
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Quebrado
{
    int numerador;
    int denominador;
    public:
    Quebrado (int N=0, int D=0);
    void DefineNum (int);
    void DefineDen (int);
    int DameNum (void);
    int DameDen (void);
    Quebrado operator+ (Quebrado &);
    // la referencia es sólo por eficiencia
};

