#include<iostream>
#include<iomanip>
#include "quebrado.h"
#include<string.h>
using namespace std;

Quebrado Quebrado::operator + (Quebrado &Q)
{    return Quebrado (numerador * Q.DameDen()+ Q.DameNum()* denominador ,
                      denominador * Q.DameDen());
}
