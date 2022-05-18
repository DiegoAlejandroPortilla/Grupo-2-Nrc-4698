#include <iostream>
#include "Cproceso.h"
using namespace std;
Cproceso::Cproceso(int numero1,int numero2){
	this->n1=numero1;
	this->n2=numero2;
}
void Cproceso::setN1(int numero1){
	n1=numero1;
}
void Cproceso::setN2(int numero2){
	n2=numero2;
}
int Cproceso::getN1(){
	return n1;
}
int Cproceso::getN2(){
	return n2;
}
Cproceso Cproceso::convertir(Cproceso obj1, Cproceso obj2){
	int a,b;
	a=obj1.getN1();
	b=obj1.getN2();

	return *this;
}
void Cproceso::imprimirObj(Cproceso obj){
	std::cout<<("Numeros convertidos")<<endl;
	std::cout<<obj.getN1()<<"/"<<obj.getN2()<<endl;

}
