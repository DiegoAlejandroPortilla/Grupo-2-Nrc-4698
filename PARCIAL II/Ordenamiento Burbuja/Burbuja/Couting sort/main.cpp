#include<iostream>
#include<algorithm>
using namespace std;
void encerar(int *vec, int tam);	
void ingresar(int *vec,int tam);
void imprimir(int *vec, int tam);
//void procesar(int *vec, int tam, int e );
int getMax(int *arreglo, int tam);


void encerar(int *vec, int tam){
   for(int i=0; i<tam; i++){
      *(vec+i)=0;
   }
}
void ingresar(int *vec,int tam){
   for(int i=0; i<tam; i++){
      cout<<"Ingrese el valor del elemento "<<i+1<<": ";
      cin>>*(vec+i);
   }
}
void imprimir(int *vec, int tam){
   for(int i=0; i<tam; i++){
      cout<<"El elemento "<<i+1<<" es: "<<*(vec+i)<<endl;
   }
}

int getMax(int *arreglo, int tam){
   int max=*arreglo;
   for(int i=1; i<tam; i++){
      if(*(arreglo+i)>max){
         max=*(arreglo+i);
      }
   }
   return max;
}

void countSort(int *arreglo, int tam) {
   int *aux = new int[tam];
   encerar(aux,tam);
   int max = getMax(arreglo,tam);
   int *count = new int[max+1];
   encerar(count,max+1);
   for(int i=0; i<tam; i++){
      count[*(arreglo+i)]++;
   }
   for(int i=1; i<=max; i++){
      count[i]+=count[i-1];
   }
   for(int i=tam-1; i>=0; i--){
      aux[count[*(arreglo+i)]-1]=*(arreglo+i);
      count[*(arreglo+i)]--;
   }
   for(int i=0; i<tam; i++){
      *(arreglo+i)=aux[i];
   }
   delete[] aux;
   delete[] count;
   
}

int main() {
   int tam;
   cout<<"Ingrese el tamano del arreglo: "<<endl;
   cin>>tam;
   int *arreglo = new int[tam];//int arreglo[tam];
   ingresar(arreglo,tam);
   cout << "Arreglo original: " << endl;
   imprimir(arreglo,tam);
   countSort(arreglo,tam);
   cout << "Arreglo ordenado: " << endl;
   imprimir(arreglo,tam);
   delete[] arreglo;
   return 0;
   
}



