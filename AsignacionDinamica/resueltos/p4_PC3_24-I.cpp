#include <iostream>
using namespace std;

void SumaMatrices(int **A, int **B, int f, int c, int **R){
    for(int i=0 ; i<f ; i++){
        for(int j=0 ; j<c ; j++){
            R[i][j]=A[i][j]+B[i][j];
        }
    }
}

int main(){
    int f, c;
    int fA, fB;
    cout<<"| Ingrese el número de columnas de la matriz A y B: "; cin>>c;cout<<endl;
    cout<<"| Ingrese el número de filas de la matriz A: "; cin>>fA; cout<<endl;
    cout<<"| Ingrese el número de filas de la matriz B: "; cin>>fB; cout<<endl;
    if(fA>fB){
        f=fA;
    }else{
        f=fB;
    }
    int **A= new int*[f];
    for(int i=0 ; i<f ; i++){
        A[i]=new int[c];
    }

    int **B= new int*[f];
    for (int i = 0; i < f; i++){
        B[i]=new int[c];
    }
    
    cout<<"| Ingrese las filas impares de la matriz A: "<<endl;
    for(int i=0 ; i<f ; i++){
        for (int j=0; j<c; j++){
            if((i+1)%2==0 || (i+1)>fA){
                A[i][j]=0;
            }else{
                cout<<"Ingrese el elemento ["<<i<<"]"<<"["<<j<<"]: "; cin>>A[i][j];
            }
        }   
    }
    cout<<"| Ingrese las filas impares de la matriz B: "<<endl;
    for(int i=0 ; i<f ; i++){
        for (int j=0; j<c; j++){
            if((i+1)%2==0 || (i+1)>fB){
                B[i][j]=0;
            }else{
                cout<<"Ingrese el elemento ["<<i<<"]"<<"["<<j<<"]: "; cin>>B[i][j];
            }
        }
    }
    
    int **R= new int*[f];
    for(int i=0 ; i<f ; i++){
        R[i]=new int[c];
    }

    SumaMatrices(A, B, f, c, R);

    for(int i=0 ; i<f ; i++){
        cout<<"|";
        for(int j=0 ; j<c ; j++){
            cout<<R[i][j]<<"|";
        }
        cout<<endl;
    }
    for(int i=0; i<f ;i++){
        delete[] A[i];
        delete[] B[i];
        delete[] R[i];
    }
    
    delete[] A;
    delete[] B;
    delete[] R;
    return 0; 
}