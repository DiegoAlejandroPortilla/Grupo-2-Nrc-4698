#include <iostream>
#include "Fraccion.h"
#include "Calculo.h"


using namespace std;



Fraccion::Fraccion() {

}



Fraccion::Fraccion(float num, float den) {

	this->num = num;
	this->den = den;

}


void Fraccion::imprimir() {

	cout << getNum() <<"/"<< getDen() <<endl;
	
}


void Fraccion::pedirDatos() {


	cout << "Ingrese el valor del numerador: ";
	cin >> num;

	cout << "Ingrese el valor del denominador: ";
	cin >> den;
	
}


void Fraccion::calcular() {

	Fraccion* fracciones = new Fraccion[0]; 
	    (fracciones )->pedirDatos();
		cout << endl;
	

	float n1, n2, d1, d2; 

	n1 = (fracciones)->getNum();
	n2 = (fracciones)->getNum();

	d1 = (fracciones)->getDen();
	d2 = (fracciones)->getDen();

	num = ((n1 * d2) + (n2 * d1));
	den = ((d1 + d2));


}


void Fraccion::setNum(float num) {
	this->num = num;
}


float Fraccion::getNum() {
	return num;
}


void Fraccion::setDen(float den) {
	this->den = den;
}


float Fraccion::getDen() {
	return den;
}
