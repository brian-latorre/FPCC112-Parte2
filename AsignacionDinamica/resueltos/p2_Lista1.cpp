#include <iostream>
using namespace std;

void MatrizPlana(int **&ptr, int &F, int &C){
    int cont=0;
    int *MAXIMIN=new int[F*C];

    //recorrer cada elemento de la matriz 
    for(int i=0 ; i<F ; i++){
        for(int j=0 ; j<C ; j++){
            //en cada elemento, comparar columna
            //int para comprobar que cumple ambas condiciones
            bool filaMIN=true;
            bool columnaMAX=true;
            for(int k=0; k<C ; k++){
                if(ptr[i][j]>ptr[i][k]){
                    filaMIN=false;
                    break;
                }
            }
            //en cada elemento, comparar la columna
            for(int l=0 ; l<F ; l++){
                if(ptr[i][j]<ptr[l][j]){
                    columnaMAX=false;
                    break;
                }
            }
            //aumentar el contador si cumple ambas condiciones
            //en fila y columna
            if(filaMIN==true && columnaMAX==true){
                MAXIMIN[cont]=ptr[i][j];
                cont++;
            }
        }
    }
    if(cont==1){
        cout<<"La matriz solo tiene un punto de silla de montar"<<endl;
        cout<<"El valor MAXIMIN es: "<<MAXIMIN[0];
    }else if(cont>1){
        cout<<"La matriz tiene una zona plana"<<endl;
        cout<<"Los valores MAXIMIN son: ";
        for(int i=0 ; i<cont ; i++){
            cout<<"   "<<MAXIMIN[i];
        }
        cout<<endl;
        cout<<"Aparecen: "<<cont<<" valores MAXIMIN.";
    }else{
        cout<<"No se encontraron valores MAXIMIN"<<endl;
    }

    delete[] MAXIMIN;
}

int main()
{
    /*Generar una matriz de forma dinámica.*/
    int F; 
    int C;

    cout<<"Ingrese el valor de las Filas: "; cin>>F;

    cout<<"Ingresa el valor de las Columnas: "; cin>>C;

    int **ptr= new int*[F];

    for(int i=0 ; i<F ; i++){
        ptr[i]=new int[C];
    }
    //matriz dinámica creada

    //bucle para obtener los valores de cada columna
    for(int i=0 ; i<F ; i++){
        for(int j=0 ; j<C ; j++){
            cout<<"Elemento ["<<i<<"]["<<j<<"]: ";cin>>ptr[i][j]; 
        }
    }
    //bucle terminado

    //imprimir elementos
    for(int i=0 ; i<F ; i++){
        for(int j=0 ; j<C ; j++){
            cout<<ptr[i][j]<<"    ";
        }
        cout<<endl;
    }
    //finalizacion de impresión

    /*Elaborar una funcion que reciba int **ptr,int F,int C
    y que ingrese valores de la matriz*/
    MatrizPlana(ptr, F, C);

    //liberar memoria de cada fila
    for (int i = 0; i < F; i++) {
        delete[] ptr[i];
    }

    // Liberar la memoria del array de punteros
    delete[] ptr;
    //memoria liberada

    

    return 0;
}
