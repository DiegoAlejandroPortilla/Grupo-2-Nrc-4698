#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
class Cproceso{
	private:
		int n1;
		int n2;
	public:
		void setN1(int);
		void setN2(int);
		int getN1();
		int getN2();
		Cproceso(int, int);
		Cproceso convertir(Cproceso, Cproceso);
		void imprimirObj(Cproceso);
};
