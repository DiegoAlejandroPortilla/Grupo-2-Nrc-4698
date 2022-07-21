#pragma once 
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Nodo.cpp"
#include "Nodo.h"
#include "ListaCircular.h"


using namespace std;

ListaCircular::ListaCircular(){
    this->primero = nullptr;
    this->ultimo = nullptr;
}

void ListaCircular :: insertarNodo(){
    Nodo* nuevoNodo = new Nodo();
    int dato;
    cout<<"Ingrese el dato a insertar"<<endl;
    cin>>dato;
    if(this->primero == nullptr){
        this->primero = nuevoNodo;
        this->ultimo = nuevoNodo;
        nuevoNodo->setSiguiente(this->primero);
        nuevoNodo->setAnterior(this->ultimo);
    }else{
        this->ultimo->setSiguiente(nuevoNodo);
        nuevoNodo->setAnterior(this->ultimo);
        nuevoNodo->setSiguiente(this->primero);
        this->ultimo = nuevoNodo;
        this->primero->setAnterior(this->ultimo);

    }
    cout << "Nodo insertado" << endl;
}
void ListaCircular :: desplegarListaporCabeza(){
    Nodo* aux = new Nodo(); 
    aux = this->primero;
    if(this->primero!=nullptr){
        do{
            cout<<"<->"<< aux->getDato();
            aux = aux->getSiguiente();
        }while(aux!=this->primero);
    }else{
        cout << "Lista vacia" << endl;
    }
    cout << endl;  

}
void ListaCircular :: desplegarListaporCola(){
    Nodo* aux = new Nodo(); 
    aux = this->ultimo;
    if(this->ultimo!=nullptr){
        do{
            cout<<"<->"<< aux->getDato();
            aux = aux->getAnterior();

        }while(aux!=this->ultimo);
    }else{
        cout << "Lista vacia" << endl;
    }    
    cout << endl;
}
void ListaCircular :: buscarNodo(){
    Nodo* aux = new Nodo(); 
    aux = this->primero;
    bool encontrado = false;
    int nodoBuscado=0;
    cout << "Ingrese el dato del nodo a buscar: ";
    cin >> nodoBuscado;
        if(this->primero!=nullptr){
            do{
                if(aux->getDato()==nodoBuscado){
                    cout <<"\n Nodo con el dato ("<< nodoBuscado <<") si se encuentra en la lista\n " << endl;
                    encontrado = true;
                }
                aux = aux->getSiguiente();
            }while(aux!=this->primero && encontrado != true);
            if(encontrado == false){
                cout <<"\n Nodo con el dato ("<< nodoBuscado <<")no encontrado en la lista\n " << endl;
            }
        }else{
            cout << "Lista vacia" << endl;
        }
        cout << endl;  

}
void ListaCircular :: modificarNodo(){
    Nodo* aux = new Nodo(); 
    aux = this->primero;
    bool encontrado = false;
    int nodoBuscado=0;
    cout << "Ingrese el dato del nodo a buscar para Modificar: ";
    cin >> nodoBuscado;
        if(this->primero!=nullptr){
            do{
                if(aux->getDato()==nodoBuscado){
                    cout <<"\n Nodo con el dato ("<< nodoBuscado <<") si se encuentra en la lista\n " << endl;
                    cout << "Ingrese el nuevo dato: ";
                    int nuevoDato;
                    cin >> nuevoDato;
                    aux->setDato(nuevoDato);
                    cout<<"\n Nodo con el dato ("<< nodoBuscado <<") modificado con el dato ("<< nuevoDato <<")\n "<< endl;
                    encontrado = true;
                }
                aux = aux->getSiguiente();
            }while(aux!=this->primero && encontrado != true);
            if(!encontrado){
                cout <<"\n Nodo con el dato ("<< nodoBuscado <<")no encontrado en la lista\n " << endl;
            }
        }else{
            cout << "Lista vacia" << endl;
        }
        cout << endl;  

}
void ListaCircular :: eliminarNodo(){
    Nodo* aux = new Nodo(); 
        aux = this->primero;
    bool encontrado = false;
    int nodoBuscado=0;
    cout << "Ingrese el dato del nodo a buscar: ";
    cin >> nodoBuscado;
        if(this->primero!=nullptr){
            do{
                if(aux->getDato()==nodoBuscado){
                    cout <<"\n Nodo con el dato ("<< nodoBuscado <<") si se encuentra en la lista\n " << endl;
                    if(aux==this->primero){
                        this->primero = primero->getSiguiente();
                        this->primero->setAnterior(this->ultimo);
                        this->ultimo->setSiguiente(this->primero);
                    }else if(aux==this->ultimo){
                        this->ultimo = aux->getAnterior();
                        this->ultimo->setSiguiente(this->primero);
                        this->primero->setAnterior(this->ultimo);
                    }else{
                        aux->getAnterior()->setSiguiente(aux->getSiguiente());
                        aux->getSiguiente()->setAnterior(aux->getAnterior());
                    }
                    cout<<"\n Nodo con el dato ("<< nodoBuscado <<") eliminado\n "<< endl;
                    encontrado = true;
                }
                aux->getAnterior();
                aux = aux->getSiguiente();
            }while(aux!=this->primero && encontrado != true);
            if(encontrado == false){
                cout <<"\n Nodo con el dato ("<< nodoBuscado <<")no encontrado en la lista\n " << endl;
            }
        }else{
            cout << "Lista vacia" << endl;
        }
        cout << endl;  
}
