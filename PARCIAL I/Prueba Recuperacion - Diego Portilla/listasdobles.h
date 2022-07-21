#ifndef LISTASDOBLES_H
#define LISTASDOBLES_H
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
class ListasDobles
{
	typedef ListasDobles *Nodito;
	private:
		ListasDobles *siguiente;
		ListasDobles *anterior;	
		int valor;
	public:
		ListasDobles a();
		void Insertar(ListasDobles *, int);
		void Borrar(ListasDobles *, int);
		void BorrarLista(ListasDobles *);
		void MostrarLista(ListasDobles *, int);
		float PromediodeLista(ListasDobles *);
	
};
#endif
