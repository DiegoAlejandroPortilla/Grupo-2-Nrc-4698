#include<iostream>
#include<iomanip>
#include "ingresar.h"
#include<string.h>
using namespace std;

 A::A(int x)
  { a = x; }

 void A::DefineA(int x)
  { a = x; }

 int A::DameA(void)
  { return a; }

class B //agregado
 {    int b;
      int cant;
      A m[20];
   public:
      B(void);
      void DefineB(int);
      int DameB(void);
      int DameCant(void);
      void Ingresa(int);
      int operator[](int);
 };
 B::B(void)
  { cant = 0;
  }

 void B::DefineB(int x)
  { b = x; }

 int B::DameB(void)
  { return b; }

 int B::DameCant(void)
  { return cant; }

 void B::Ingresa(int x)
  { m[cant++].DefineA(x); }

 int B::operator[](int i)
  { return m[i].DameA(); }
