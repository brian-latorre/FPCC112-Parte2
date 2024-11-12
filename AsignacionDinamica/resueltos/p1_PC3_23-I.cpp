#include <iostream>
using namespace std;

int main(){
    int tam=1, cont=0, n;
    int max=0;
    /*crear un arreglo dinámico con valores enteros positivos 
    ingresados por el usuario*/
    int *v=new int[tam];
    while(true){
        cout<<"| Ingrese un valor entero positivo (0 para salir) : "; cin>>n;
        if(n==0){
            break;
        }
        bool exists = false;
        for (int i = 0; i < cont; i++) {
            if (v[i] == n) {
                exists = true;
                break;
            }
        }
        if (exists) {
            cout << "| El valor ya está en el arreglo, intenta con otro." << endl;
            continue;
        }
        /*Solo se puede ingresar valores no repetidos*/
        
        if(n<max){
            int *vtemp=new int[tam];
            vtemp[0]=n;
            for(int i=0 ; i<tam ; i++){
                 vtemp[i+1]=v[i];
             }
             delete[] v;
              v=vtemp;
          }
        if(n>max){
             v[tam-1]=n;
            max=n;
        }
        //si coloco la misma cantidad de elementos que el tamaño, crece el arreglo
        cont++;
        if(cont==tam){
            int *temp=new int[tam+1];
            for(int i=0 ; i<tam ; i++){
                temp[i]=v[i];
            }
            tam++;
            delete[] v;
            v=temp;
        }
    }
    /*Si el valor "n" ingresado es mayor que el máximo, 
    será colocado al final del arreglo*/

    /*Si el valor "n" ingresado es menor, se coloca al inicio del
    arreglo con un nuevo arreglo temporal*/
    cout<<"|";
    for(int i=0 ; i<cont ; i++){
        cout<<v[i]<<"|";
    }cout<<endl;
    delete[] v;
    cout<<"|> El valor máximo es: "<<max;
    return 0;
}