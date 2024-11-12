#include <iostream>
using namespace std;

void IngresoM(int **M, int F, int C){
    for(int i=0 ;i<F ; i++){
        for(int j=0 ; j<C ; j++){
            cout<<"Ingrese el elemento ["<<i+1<<"]["<<j+1<<"]: "; cin>>M[i][j];
        }
    }
}

int IngresoV(int *V, int X, int C, int F){
    if(C!=X){
        cout<<"No se puede multiplicar una matriz de "<<F<<"x"<<C<<" con un vector de tamaño "<<X<<". "<<endl;
        cout<<"El valor de la columna de la matriz ("<<C<<") debe ser igual al tamaño del vector ("<<X<<"). "<<endl;
        return 1;
    }
    for(int i=0 ; i<X ; i++){
        cout<<"Ingrese el elemento ["<<i+1<<"]: "; cin>>V[i];
    }
    cout<<endl;
    return 0;
}

int main(){

    int F, C, X;
    cout<<"Ingrese el número de filas en la matriz: "; cin>>F;
    cout<<"Ingrese el número de columnas en la matriz: "; cin>>C;

    //creación de la matriz dinámica
    int **M=new int*[F];

    for(int i=0 ; i<F ; i++){
        M[i]=new int[C];
    }
    //ingreso de matriz y vector
    IngresoM(M, F, C);
    
    cout<<endl;
    cout<<"Ingrese el número de elementos del vector a multiplicar: "; cin>>X;
    int *V=new int[X];
    int continua=IngresoV(V, X, C, F);
    if(continua==1){
        return 0;
    }

    cout<<"A*X = "<<endl;

    int *R=new int[F];

    for(int i=0 ;i<F ; i++){
        int a=0;
        for(int j=0 ; j<C ; j++){
            a+=M[i][j]*V[j];
        }
        R[i]=a;
    }

    for(int i=0 ; i<F ; i++){
        cout<<R[i]<<endl;
    }

    for(int i=0 ; i<F ; i++){
        delete[] M[i];
    }

    delete[] M;

    delete[] V;

    return 0; 
}