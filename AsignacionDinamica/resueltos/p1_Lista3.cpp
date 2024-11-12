#include <iostream>
using namespace std;

int main(){
    /*Solicitar un entero n*/
    int n;
    cout<<"| Ingrese un entero: "; cin>>n;
    /*Crear un arreglo dinámico te tamaño n*/
    int *V = new int[n];
    /*Llenar el arreglo con números ingresador por el usuario*/
    cout<<"| Complete el arreglo con "<<n<<" números enteros: "<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<"| Ingese el elemento "<<i<<" del arreglo: |> ";cin>>V[i];
    }
    cout<<"| Creaste un arreglo de "<<n<<" elementos: "<<endl;
    cout<<"|";
    for(int i=0 ; i<n ; i++){
        cout<<V[i]<<"|";
    }
    return 0;
}