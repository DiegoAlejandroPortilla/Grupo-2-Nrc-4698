/*Universidad de las Fuerzas Armadas ESPE
  Enunciado:QUICKSORT
  Autores:  Johanna Pila
            Adriana Diaz
            Ayme Escobar
            Mateo Tituaña
  Fecha de creación: 20/06/2022
  Fecha de modificación: 20/06/2022
  Github:
*/

#include <iostream>


using namespace std;

void ingresar(int *,int);
void imprimir(int *,int);
void ordenar(int *, int izq, int der);
void encerar(int *,int);

void ingresar(int *X, int dim)
{
    for (int i = 0; i < dim; i++)
    {
        cout << "Ingrese el dato: ";
        cin >> X[i]; 
    }
}
void imprimir(int *X,int dim)
{
    for (int i = 0; i < dim; i++) {
        cout << X[i] << " ";
    }
    cout << "\n";
}

void ordenar(int *x, int izq, int der)
{
    int i = izq;
    int j = der;
    int aux;
    int p = x[(izq + der) / 2];//pivote
    while (i <= j) {
        while (x[i] < p) {
            i++;
        }
        while (x[j] > p) {
            j--;
        }
        if (i <= j) {
            aux = x[i];
            x[i] = x[j];
            x[j] = aux;
            i++;
            j--;
        }
    }
    if (izq < j)
        ordenar(x, izq, j);
    if (i < der)
        ordenar(x, i, der);
}
void encerar(int *X, int dim)
{
    for (int i = 0; i < dim; i++)
    {
        X[i] = 0;
    }
}


int main()
{
    int dim;
    char op;
    do {
        system("cls");
        cout << "Arreglo: " << endl;
        cout << "ingresa el tañano del vector: ";
        cin >> dim;
        int* A = new int[dim];
        ingresar(A,dim);
        cout << "Arreglo desordenado: ";
        imprimir(A,dim);
        cout << "Arreglo ordenado: ";
        ordenar(A,0,dim-1);
        imprimir(A,dim);
        encerar(A,dim);
        cout << "Desea ordenar otro arreglo(s/n): ";
        cin >> op;
    } while (op != 'n');
    cout << "Gracias por usar el porgrama :)" << endl;

    return 0;
}