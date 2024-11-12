#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
using namespace std;

int Sumatoria(){
    int sum=0;

    return sum;
}

int Sumatoria(int *p, int cont){
    int sum=0;
    for(int i=0 ; i<cont ;i++){
        sum+=p[i];
    }

    return sum;
}

int main(){
   /*f() recibe un arreglo dinamico de enteros con su tamaño*/
   /*Devuelve la suma de todos los elementos*/
	int tam=1, cont=0;
    int n;
    int *p = new int[tam];
    cout<<"Ingrese numeros enteros positivos (0 para detenerse): "<<endl;

    while(true){
        cout<<"Ingrese un número al arreglo: "; cin>>n;
        if(n==0){
            break;
        }
        p[cont]=n; cont++;
        if(tam==cont){
            int *ptemp= new int[2*tam];
            for(int i=0 ; i<tam ; i++){
                ptemp[i]=p[i];
            }
            delete[] p;
        p = ptemp;
        tam*=2;
        }
    }
    
    cout<<"Arreglo final: "<<endl;
    cout<<"|";
    
    for(int i=0 ; i<cont ; i++){
        cout<<p[i]<<"|";
    }
    cout<<endl;
    int sum=Sumatoria(p,cont);
    cout<<"Sumatoria de los elementos: "<<sum<<endl;
    return 0; 
}