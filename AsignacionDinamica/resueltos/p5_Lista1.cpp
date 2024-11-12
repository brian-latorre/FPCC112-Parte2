#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
using namespace std;

void GenerarNotas(int **M , int &F , int &C){
    for(int i=0 ; i<F ; i++){
        for(int j=0 ; j<C ; j++){
            M[i][j]=rand()%(20+1);
        }
    }
    
}

void imprimir(int **M , int &F , int &C){
    for(int i=0 ; i<F ; i++){
        for(int j=0 ; j<C ; j++){
            cout<<M[i][j]<<"  ";
        }
        cout<<endl;
    }
}

void ordenarCol(int **M , int &F , int &C){
    for(int i=0 ; i<C ; i++){
        for(int j=0 ; j<F-1 ; j++){
            for(int k=0 ; k<F-1 ; k++){
                if(M[k][i]<M[k+1][i]){
                    int temp=M[k][i];
                    M[k][i]=M[k+1][i];
                    M[k+1][i]=temp;
                }
            }
        }
    }
}

int main(){
    srand(time(NULL));
    /* Ingresar F y C para generar una matriz dinámica */
    int F, C;
    cout<<"Filas:      "; cin>>F;
    cout<<"Columnas:   ";cin>>C;

    int **M = new int*[F];
    for(int i=0 ; i<F ; i++){
        M[i]= new int[C];
    }
    /* matriz dinámica de notas */
    /* de manera aleatoria generar notas */
    GenerarNotas(M, F, C);
    /* imprimir la matriz y ordenar cada columna de mayor a menor */
    imprimir(M, F, C);
    ordenarCol(M, F, C);
    cout<<"Matriz de notas con las columnas ordenadas: "<<endl;
    imprimir(M,F,C);
    for(int i=0 ; i<F ; i++){
        delete[] M[i];
    }

    delete[] M;

    return 0; 
}