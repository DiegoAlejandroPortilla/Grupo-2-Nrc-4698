/*
	UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
	Autores: Grupo N�2
             Diego Portilla
			 Darwin Valdiviezo
			 Grupo N�19
			 Danny Quingaluisa
			 Alejandro Gallegos
	NRC: 4698
	Nombre de la materia: Estructura de Datos
*/

#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "operadores.h"
#include "operadores.cpp"
using namespace std;


int main(){
    
    int opcion;
do{
    cout<<"Bienvenido al programa de sobrecarga de operadores"<<endl;
    cout<<"Bienvenido al programa seleccione una opcion "<<endl;
    cout <<"1. *"<<endl;
    cout <<"2. []"<<endl;
    cout <<"3. /"<<endl;
    cout <<"4. %="<<endl;
    cin>>opcion;
    if(opcion==1){
            cout<<"Sobrecarga del operador *"<<endl;
            cout<<"Ingrese el valor de x: ";
            int x;
            cin>>x;
            cout<<"Ingrese el valor de y: ";
            int y;
            cin>>y;
            punto p1(x,y);
            punto p2(x,y);
            punto p3 = p1*2;
            punto p4 = p2*p3;
            p1.imprimir();
            p3.imprimir();
            p4.imprimir();
            system ("pause");
            return 0;
        
    }else{
        if(opcion==2){
            int filas;
            int columnas;
            cout<<"Sobrecarga del operador []"<<endl;
            cout<<"Ingrese el valor de filas: ";
            cin>>filas;
            cout<<"Ingrese el valor de columnas: ";
            cin>>columnas;
            matriz m1(filas,columnas);
            for(int i = 0; i < filas; i++){
                for(int j = 0; j < columnas; j++){
                    cout<<"Ingrese el valor de la posicion ("<<i<<","<<j<<"): ";
                    int v;
                    cin>>v;
                    m1.setValor(i,j,v);
                }
            }
            m1.imprimir();
            system ("pause");
            return 0;
        
           
        }else{
            if(opcion==3){
                    int filas;
                    int columnas;
                    cout<<"Sobrecarga del operador /"<<endl;
                    cout<<"Ingrese el valor de filas: ";
                    cin>>filas;
                    cout<<"Ingrese el valor de columnas: ";
                    cin>>columnas;
                    matriz2 m1(filas,columnas);
                    for(int i = 0; i < filas; i++){//recorremos las filas
                        for(int j = 0; j < columnas; j++){//recorremos las columnas
                            cout<<"Ingrese el valor de la posicion ("<<i<<","<<j<<"): ";//recibimos el valor
                            int v;
                            cin>>v;
                            m1.setValor(i,j,v);//imprimimos el valor
                        }
                    }
                    cout<<"Matriz 1"<<endl;
                    m1.imprimir();//imprimimos la matriz
                    cout<<"Matriz 2 efectuando la sobrecarga del operador /"<<endl;
                    matriz2 m2 = m1/2;//sobrecarga del operador /
                    m2.imprimir();//imprimimos la matriz
                    system ("pause");
                    return 0;
                return 0;
                
            }else{
                if(opcion==4){
                    int filas;
                    int columnas;
                    cout<<"Sobrecarga del operador %="<<endl;
                    cout<<"Ingrese el valor de filas: ";
                    cin>>filas;
                    cout<<"Ingrese el valor de columnas: ";
                    cin>>columnas;
                    matriz3 m1(filas,columnas);
                    for(int i = 0; i < filas; i++){//recorremos las filas
                        for(int j = 0; j < columnas; j++){//recorremos las columnas
                            cout<<"Ingrese el valor de la posicion ("<<i<<","<<j<<"): ";//recibimos el valor
                            int v;
                            cin>>v;
                            m1.setValor(i,j,v);//imprimimos el valor
                        }
                    }
                    cout<<"Matriz 1"<<endl;
                    m1.imprimir();//imprimimos la matriz
                    cout<<"Matriz 2 efectuando la sobrecarga del operador %="<<endl;
                    m1 %= 2;//sobrecarga del operador %=
                    m1.imprimir();//imprimimos la matriz
                    system ("pause");
                    return 0;
                    
                }else{
                    cout<<"Opcion no valida"<<endl;
                    system ("pause");
                    
                    return 0;
                    
                }
                
                

            }
            
            

        }
        
    
    }
    system ("cls");
    }while(opcion != 4);
    return 0;
}
