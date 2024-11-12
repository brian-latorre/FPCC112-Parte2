#include <iostream>
#include <ctime>
using namespace std;

void imprimir(int V[], int n){
    cout<<"|";
    for(int i=0 ; i<n ; i++){
        cout<<V[i]<<"|";
    }
    cout<<endl;
}

int *arreglo(int n){
    cout<<"| El arreglo será de tamaño "<<n<<": "<<endl;
    int *V= new int[n];
    for(int i=0 ; i<n ; i++){
        V[i]=rand()%(100+1);
    }
    return V;
}

int main(){
    srand(time(NULL));
    /*crear una función *ptr=int *arreglo(int n)*/
    int *ptr;
    int n;
    cout<<"| Ingrese el tamaño del arreglo a generar: "; cin>>n;
    ptr=arreglo(n);
    imprimir(ptr, n);
    return 0;
}