#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "operadores.h"
using namespace std;

//Sobrecarga de operador *
class punto{
    private:
        int x;
        int y;
    public:
        punto(int x, int y){
            this->x = x;
            this->y = y;
        }
        punto(){
            this->x = 0;
            this->y = 0;
        }
        int getX(){
            return this->x;
        }
        int getY(){
            return this->y;
        }
        void setX(int x){
            this->x = x;
        }
        void setY(int y){
            this->y = y;
        }
        punto operator*(int n){
            punto p(this->x*n, this->y*n);
            return p;
        }
        punto operator*(punto p){
            punto p2(this->x*p.getX(), this->y*p.getY());
            return p2;
        }
        void imprimir(){
            cout << "(" << this->x << "," << this->y << ")" << endl;
        }
};






