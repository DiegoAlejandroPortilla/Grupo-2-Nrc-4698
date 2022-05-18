#pragma once
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class A
{    int a;
   public:
     friend int P(A);
     void defineA(int);
     int dameA(void);
};
