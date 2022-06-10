#pragma once
/*
* @flie Lista.h
* @author Diego Portilla - Darwin Valdiviezo - Estructura de Datos
* @date 9/6/2022
* @brief Archivo de cabecera para la clase Lista
* @version 1.0
* 
*@copyright Copyright (c) 2022,Diego Portilla - Darwin Valdiviezo
*@license MIT License
*/
#include "Nodo.h"
#include "Cliente.h"
#include "Celular.h"
#include <iostream>
#include <cstdlib>


using namespace std;

template <class Type>
class Lista {

protected:
	Nodo<Type>* primero;
	Nodo<Type>* ultimo;
	Nodo<Type>* nuevoNodo;
	int size;
	//DEFINICIONES
public:
	/**
	 * @brief Construct a new Lista object
	 * 
	 */
	Lista();
	/**
	 * @brief method for validate if the list is empty
	 * 
	 */
	bool estaVacia();
	/**
	 * @brief method for search a element in the list
	 * 
	 */
	bool buscarCelular(const Type&) const;
	/**
	 * @brief method for search a element in the list
	 * 
	 */
	bool buscarCliente(const Type&) const;
	/**
	 * @brief method for add a element in the list
	 * 
	 */
	void comprarCelular(const Type&);
	/**
	 * @brief method for add a element in the list
	 * 
	 */
	void venderCelular(const Type&, const Type&);
	/**
	 * @brief method for add a element in the list
	 * 
	 */
	void imprimirCelular(const Type&);
	/**
	 * @brief method for add a element in the list
	 * 
	 */
	void imprimirVentas(const Type&);
	/**
	 * @brief method for add a element in the list
	 * 
	 */
	void venderCelular(const Type&, const Type&);
	/**
	 * @brief method for modify a element in the list
	 * 
	 */
	void modificarCelular(const Type&);
	/**
	 * @brief method for modify a element in the list
	 * 
	 */
	void modificarCliente(const Type&);
	/**
	 * @brief method for remove a element in the list
	 * 
	 */
	void eliminarCelular(const Type&);
	/**
	 * @brief method for add a element in the list
	 * 
	 */
	int getSize();

	
};

//IMPLEMENTACIONES

template <class Type>
Lista<Type>::Lista() {
	this->primero = NULL;
	this->ultimo = NULL;
	this->size = 0;
}

template <class Type>
bool Lista<Type>::buscarCelular(const Type& datoBuscado) const {
	Nodo<Type>* p;
	bool encontrado = false;
	p = primero;
	while (!encontrado) {
		if (p->dato == datoBuscado)
			encontrado = true;
		else
			p = p->siguiente;
	}

	return encontrado;
}

template <class Type>
bool Lista<Type>::estaVacia() {
	return(this->primero == NULL);
}

template <class Type>
bool Lista<Type>::buscarCliente(const Type& datoBuscado) const {
	Nodo<Type>* p;
	bool encontrado = false;
	p = primero;
	while (!encontrado) {
		if (p->dato == datoBuscado)
			encontrado = true;
		else
			p = p->siguiente;
	}

	return encontrado;
}

template <class Type>
bool Lista<Type>::estaVacia() {
	return(this->primero == NULL);
}

template <class Type>
void Lista<Type>::comprarCelular(const Type& nuevoDato) {
	nuevoNodo = new Nodo<Type>(nuevoDato);
	nuevoNodo->siguiente = primero;

	if (!estaVacia()) {
		primero->anterior = nuevoNodo;
		primero = nuevoNodo;
	}
	else {
		primero = nuevoNodo;
		ultimo = nuevoNodo;
	}
	size++;
}

template <class Type>
void Lista<Type>::venderCelular(const Type& nuevoDato, const Type& dato) {
	nuevoNodo = new Nodo<Type>(nuevoDato);
	nuevoNodo->siguiente = NULL;

	Nodo<Type>* p;
	Nodo<Type>* q;
	p = primero;
	q = primero->siguiente;
	if (estaVacia()) {
		cout << "Por favor agregar por cabeza o por cola antes: " << endl;
	}
	else {
		bool encontrado = false;
		while (!encontrado) {
			if (p->dato == dato) {
				encontrado = true;
				if (q == primero) {
					p->siguiente = nuevoNodo;
					nuevoNodo->anterior = p;
					nuevoNodo->siguiente = primero;
					ultimo = nuevoNodo;
				}
				else {
					p->siguiente = nuevoNodo;
					nuevoNodo->anterior = p;
					nuevoNodo->siguiente = q;
					q->anterior = nuevoNodo;
				}
			}
			else {
				p = q;
				q = q->siguiente;
			}
		}
	}
	size++;
}

template <class Type>
void Lista<Type>::imprimirCelular(const Type& dato) {
	Nodo<Type>* p;
	p = primero;
	bool encontrado = false;
	while (!encontrado) {
		if (p->dato == dato) {
			encontrado = true;
			cout << p->dato << endl;
		}
		else
			p = p->siguiente;
	}
}
template <class Type>
void Lista<Type>::imprimirVentas(const Type& dato) {
	Nodo<Type>* p;
	p = primero;
	bool encontrado = false;
	while (!encontrado) {
		if (p->dato == dato) {
			encontrado = true;
			cout << p->dato << endl;
		}
		else
			p = p->siguiente;
	}
}

template <class Type>
void Lista<Type>::venderCelular(const Type& nuevoDato, const Type& dato) {
	nuevoNodo = new Nodo<Type>(nuevoDato);
	nuevoNodo->siguiente = NULL;

	Nodo<Type>* p;
	Nodo<Type>* q;
	p = primero;
	q = primero->siguiente;
	if (estaVacia()) {
		cout << "Por favor agregar por cabeza o por cola antes: " << endl;
	}
	else {
		bool encontrado = false;
		while (!encontrado) {
			if (p->dato == dato) {
				encontrado = true;
				if (q == primero) {
					p->siguiente = nuevoNodo;
					nuevoNodo->anterior = p;
					nuevoNodo->siguiente = primero;
					ultimo = nuevoNodo;
				}
				else {
					p->siguiente = nuevoNodo;
					nuevoNodo->anterior = p;
					nuevoNodo->siguiente = q;
					q->anterior = nuevoNodo;
				}
			}
			else {
				p = q;
				q = q->siguiente;
			}
		}
	}
	size++;
}

template <class Type>
void Lista<Type>::modificarCelular(const Type& nuevoDato) {
	Nodo<Type>* p;
	p = primero;
	bool encontrado = false;
	while (!encontrado) {
		if (p->dato == nuevoDato) {
			encontrado = true;
			cout << "Ingrese el nuevo dato: ";
			cin >> p->dato;
		}
		else
			p = p->siguiente;
	}
	
}

template <class Type>
void Lista<Type>::modificarCliente(const Type& nuevoDato) {
	Nodo<Type>* p;
	p = primero;
	bool encontrado = false;
	while (!encontrado) {
		if (p->dato == nuevoDato) {
			encontrado = true;
			cout << "Ingrese el nuevo dato: ";
			cin >> p->dato;
		}
		else
			p = p->siguiente;
	}
}

template <class Type>
void Lista<Type>::eliminarCelular(const Type& datoBuscado) {

	Nodo<Type>* p;
	Nodo<Type>* q;
	p = primero;
	q = primero->siguiente;
	bool encontrado = false;
	if (primero == NULL) {
		cout << "No se puede borrar una lista vacia" << endl;
	}
	else {
		while (!encontrado) {
			if (q->dato == datoBuscado) {
				encontrado = true;
				if (q->siguiente = primero) {
					p->siguiente = primero;
					ultimo = p;
				}
				else {
					p->siguiente = q->siguiente;
					q->siguiente->anterior = p;
				}
			}
			else {
				p = q;
				q = q->siguiente;
			}
		}
		delete q;
	}
	size--;
}

template <class Type>
int Lista<Type>::getSize() {
	return this->size;
}