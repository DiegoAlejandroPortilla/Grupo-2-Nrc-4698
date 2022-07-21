#include "listasdobles.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>




void ListasDobles::Insertar(ListasDobles *lista , int valor)
{
	Nodito nuevo, actual;
	/* Crear un nodo nuevo */
	nuevo = (Nodito)malloc(sizeof(Nodito));
	
	//nuevo = new Nodito;
	nuevo->valor = valor;
	
	/* Colocamos actual en la primera posici�n de la lista */
	actual = lista;
	if(actual) while(actual->anterior) actual = actual->anterior;
	/* Si la lista est� vac�a o el primer miembro es mayor que el nuevo */
	if(!actual || actual->valor > valor) {
		/* A�adimos la lista a continuaci�n del nuevo nodo */
		nuevo->siguiente = actual;
		nuevo->anterior = NULL;
		if(actual) actual->anterior = nuevo;
		if(!lista) lista = nuevo;
	}
	else {
			/* Avanzamos hasta el �ltimo elemento o hasta que el siguiente tenga
			un valor mayor que v */
			while(actual->siguiente &&actual->siguiente->valor <= valor)
			actual = actual->siguiente;
			/* Insertamos el nuevo nodo despu�s del nodo anterior */
			nuevo->siguiente = actual->siguiente;
			actual->siguiente = nuevo;
			nuevo->anterior = actual;
			if(nuevo->siguiente) 
			nuevo->siguiente->anterior = nuevo;
		}
	}

	void ListasDobles::Borrar(ListasDobles *lista , int valor)
	{
		Nodito nodo;
		/* Buscar el nodo de valor v */
		nodo = lista;
		while(nodo && nodo->valor < valor) 
		nodo = nodo->siguiente;
		while(nodo && nodo->valor > valor) 
		nodo = nodo->anterior;
		/* El valor v no est� en la lista */
		if(!nodo || nodo->valor != valor) 
		return;
		/* Borrar el nodo */
		/* Si lista apunta al nodo que queremos borrar, apuntar a otro */
		if(nodo == lista)
		if(nodo->anterior) 
		lista = nodo->anterior;
		else lista = nodo->siguiente;
		if(nodo->anterior) /* no es el primer elemento */
		nodo->anterior->siguiente = nodo->siguiente;
		if(nodo->siguiente) /* no es el �ltimo nodo */
		nodo->siguiente->anterior = nodo->anterior;
		free(nodo);

	}
	void ListasDobles::BorrarLista(ListasDobles *lista)
	{
		Nodito nodo, actual;
		/* Recorrer la lista */
		
		actual = lista;
		while(actual->anterior) 
		actual = actual->anterior;
		while(actual) {
		nodo = actual;
		actual = actual->siguiente;
		free(nodo);
		}
		lista = NULL;
	}
	
	
	void ListasDobles::MostrarLista(ListasDobles *lista , int orden)
	{
	Nodito nodo = lista;
	if(!lista) printf("Lista vacia");
	nodo = lista;
	if(orden == 1) {
	while(nodo->anterior) 
	nodo = nodo->anterior;
	printf("Orden ascendente: ");
	while(nodo) {
	printf("%d -> ", nodo->valor);
	nodo = nodo->siguiente;
	}
	}
	else
	{
		while(nodo->siguiente)
		 nodo = nodo->siguiente;
		printf("Orden descendente: ");
		while(nodo)
		{
			printf("%d -> ", nodo->valor);
			nodo = nodo->anterior;
		}
	}
	printf("\n");
} 
float ListasDobles::PromediodeLista(ListasDobles *lista)
{
	Nodito nodo = lista;
	float promedio;
	float suma = 0;
	float contador = 0;
	while(nodo)
	{
		suma += nodo->valor;
		contador++;
		nodo = nodo->siguiente;
	}
	promedio = suma/contador;
	return promedio;
}

