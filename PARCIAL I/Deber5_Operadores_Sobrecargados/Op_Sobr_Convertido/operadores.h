#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
//Sobrecarga del operador []
class matriz{
    private:
        int **m;//matriz
        int filas;//filas
        int columnas;//columnas
    public:
        matriz(int filas, int columnas){
            this->filas = filas;
            this->columnas = columnas;
            this->m = new int*[filas];
            for(int i = 0; i < filas; i++){
                this->m[i] = new int[columnas];
            }
        }
        matriz(){
            this->filas = 0;
            this->columnas = 0;
            this->m = NULL;
        }
        int getFilas(){
            return this->filas;
        }
        int getColumnas(){
            return this->columnas;
        }
        int getValor(int f, int c){
            return this->m[f][c];
        }
        void setValor(int f, int c, int v){
            this->m[f][c] = v;
        }
        void imprimir(){
            for(int i = 0; i < this->filas; i++){//recorremos las filas
                for(int j = 0; j < this->columnas; j++){//recorremos las columnas
                    cout << this->m[i][j] << " ";//imprimimos el valor
                }
                cout << endl;
            }
        }
};
//Sobrecarga del operador /
class matriz2{
    private:
        int **m;//matriz
        int filas;//filas
        int columnas;//columnas
    public:
        matriz2(int filas, int columnas){
            this->filas = filas;
            this->columnas = columnas;
            this->m = new int*[filas];
            for(int i = 0; i < filas; i++){
                this->m[i] = new int[columnas];
            }
        }
        matriz2(){
            this->filas = 0;
            this->columnas = 0;
            this->m = NULL;
        }
        int getFilas(){
            return this->filas;
        }
        int getColumnas(){
            return this->columnas;
        }
        int getValor(int f, int c){
            return this->m[f][c];
        }
        void setValor(int f, int c, int v){
            this->m[f][c] = v;
        }
        void imprimir(){
            for(int i = 0; i < this->filas; i++){//recorremos las filas
                for(int j = 0; j < this->columnas; j++){//recorremos las columnas
                    cout << this->m[i][j] << " ";//imprimimos el valor
                }
                cout << endl;
            }
        }
        matriz2 operator/(int n){//sobrecarga del operador /
            matriz2 m2(this->filas, this->columnas);//creamos una matriz2
            for(int i = 0; i < this->filas; i++){//recorremos las filas
                for(int j = 0; j < this->columnas; j++){//recorremos las columnas
                    m2.setValor(i,j,this->m[i][j]/n);//imprimimos el valor
                }
            }
            return m2;
        }
};
//Sobrecarga del operador %=
class matriz3{
    private:
        int **m;//matriz
        int filas;//filas
        int columnas;//columnas
    public:
        matriz3(int filas, int columnas){
            this->filas = filas;
            this->columnas = columnas;
            this->m = new int*[filas];
            for(int i = 0; i < filas; i++){
                this->m[i] = new int[columnas];
            }
        }
        matriz3(){
            this->filas = 0;
            this->columnas = 0;
            this->m = NULL;
        }
        int getFilas(){
            return this->filas;
        }
        int getColumnas(){
            return this->columnas;
        }
        int getValor(int f, int c){
            return this->m[f][c];
        }
        void setValor(int f, int c, int v){
            this->m[f][c] = v;
        }
        void imprimir(){
            for(int i = 0; i < this->filas; i++){//recorremos las filas
                for(int j = 0; j < this->columnas; j++){//recorremos las columnas
                    cout << this->m[i][j] << " ";//imprimimos el valor
                }
                cout << endl;
            }
        }
        matriz3 operator%=(int n){//sobrecarga del operador %=
            for(int i = 0; i < this->filas; i++){//recorremos las filas
                for(int j = 0; j < this->columnas; j++){//recorremos las columnas
                    this->m[i][j] = this->m[i][j]%n;//imprimimos el valor
                }
            }
            return *this;
        }
};
