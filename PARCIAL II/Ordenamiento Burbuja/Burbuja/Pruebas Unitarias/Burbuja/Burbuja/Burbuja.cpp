#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;
void encerar(int *vec, int tam);
void ingresar(int *vec, int tam);
void imprimir(int *vec, int tam);
void procesar(int *vec, int tam, int e);
void ordenamientoBurbuja(int *vec, int tam);



int main() {
	int tam;
	int e;
	cout << "Ingrese el tamano del vector: ";
	cin >> tam;
	int *vec = new int[tam];
	encerar(vec, tam);
	ingresar(vec, tam);
	cout << "Datos ingresados del arreglo: " << endl;
	imprimir(vec, tam);
	cout << "Arreglo ordenado por burbuja:" << endl;
	ordenamientoBurbuja(vec, tam);
	imprimir(vec, tam);
	cout << "Ingrese el numero que desea multiplicar al arreglo: ";
	cin >> e;
	procesar(vec, tam, e);
	imprimir(vec, tam);
	return 0;
}

void encerar(int *vec, int tam) {
	for (int i = 0; i < tam; i++) {
		*(vec + i) = 0;
	}
}

void ingresar(int *vec, int tam) {
	for (int i = 0; i < tam; i++) {
		cout << "Ingrese un numero: ";
		cin >> *(vec + i);
	}
}

void imprimir(int *vec, int tam) {
	for (int i = 0; i < tam; i++) {
		cout << *(vec + i) << " ";
	}
	cout << endl;
}

void procesar(int *vec, int tam, int e) {
	for (int i = 0; i < tam; i++) {
		*vec = (*(&(*vec)))*e;
		*(vec++);
	}
}


void ordenamientoBurbuja(int *vec, int tam) {
	int aux;
	for (int i = 0; i < tam; i++) {
		for (int j = 0; j < tam - 1; j++) {
			if (*(vec + j) > *(vec + j + 1)) {
				aux = *(vec + j);
				*(vec + j) = *(vec + j + 1);
				*(vec + j + 1) = aux;
			}
		}
	}
}
