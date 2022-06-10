#pragma once
/*
* @flie Nodo.h
* @author Diego Portilla - Darwin Valdiviezo - Estructura de Datos
* @date 9/6/2022
* @brief Archivo de cabecera para la clase Nodo
* @version 1.0
* 
*@copyright Copyright (c) 2022,Diego Portilla - Darwin Valdiviezo
*@license MIT License
*/
#include <iostream>
#include <cstdlib>


template <class Type>
class Nodo {

private:
	Type dato;
	Nodo<Type>* siguiente;
	Nodo<Type>* anterior;
public:

	Nodo() = default;
	Nodo(Type);

	template <class Type>
	friend class Lista;
	friend class Cola;

};

template <class Type>
Nodo<Type>::Nodo(Type nuevoDato) {
	this->dato = nuevoDato;
}