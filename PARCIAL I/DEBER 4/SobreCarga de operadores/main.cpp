#include <stdio.h>
#include <stdlib.h>
#include <iostream>
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
            this->m = new int*[filas];//reservamos memoria para las filas
            for(int i = 0; i < filas; i++){//reservamos memoria para las columnas
                this->m[i] = new int[columnas];//reservamos memoria para las columnas
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
            this->m = new int*[filas];//reservamos memoria para las filas
            for(int i = 0; i < filas; i++){//reservamos memoria para las columnas
                this->m[i] = new int[columnas];//reservamos memoria para las columnas
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
            this->m = new int*[filas];//reservamos memoria para las filas
            for(int i = 0; i < filas; i++){
                this->m[i] = new int[columnas];//reservamos memoria para las columnas
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



int main(){
    int opcion;
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
                    return 0;
                }else{
                    cout<<"Opcion no valida"<<endl;
                    return 0;
                }
                
            }
                    
            
        }
    }
}
       

