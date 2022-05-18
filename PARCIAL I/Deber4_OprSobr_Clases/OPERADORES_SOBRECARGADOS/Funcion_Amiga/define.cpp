#include<iostream>
#include<iomanip>
#include "define.h"
#include<string.h>
using namespace std;

void A::defineA(int x)
{    a = x;
}

int A::dameA(void)
{    return a;
}

class B
{    int b;
   public:
     friend int P(A);
     void defineB(int);
     int dameB(void);
};

void B::defineB(int x)
{    b = x;
}

int B::dameB(void)
{    return b;
}

int P(A OA)
{    B Ob;
     Ob.defineB(2);
     return OA.a*Ob.b;
}
