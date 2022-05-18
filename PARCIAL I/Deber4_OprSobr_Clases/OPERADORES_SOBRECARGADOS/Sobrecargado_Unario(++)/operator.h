#pragma once
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class A
{    float x;
   public:
     A(float cx=0);
     void DefineX(float);
     float DameX(void);
     A operator ++ (void); // como prefijo
     A operator ++ (int);  // como sufijo
                           // el parámetro int es obligatorio
};
