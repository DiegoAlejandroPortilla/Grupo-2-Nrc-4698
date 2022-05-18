#pragma once
#include <stdio.h>
#include <stdlib.h>


using namespace std;

class Complejo
{    float real;
     float imag;
   public:
     Complejo(float r=0, float i=0);
     void DefineR(float);
     void DefineI(float);
     float DameR(void);
     float DameI(void);
     Complejo operator + (Complejo);
     Complejo operator - (Complejo);
};
