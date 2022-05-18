#pragma once
#include <stdio.h>
#include <stdlib.h>


using namespace std;

class Cadena
{    char cad[40];
   public:
     Cadena(char *);
     char * DameCadena(void);
     void operator + (Cadena);
};
