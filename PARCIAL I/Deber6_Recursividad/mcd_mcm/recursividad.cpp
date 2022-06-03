#pragma once 
#include<iostream>
#include<iomanip>
#include "recursividad.h"

using namespace std;

int funcion::MCD(int a, int b){
    if(b==0)
        return a;
    else
        return MCD(b,a%b);
}
int funcion::MCM(int a, int b){
    return (a*b)/MCD(a,b);
}


