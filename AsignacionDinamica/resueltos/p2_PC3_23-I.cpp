#include <iostream>
#include <cstring>
using namespace std;

struct Estudiante{
    char nombre[50];
    int nota;
};

void Ordenar(Estudiante *E, int &n){
    for(int i=0 ; i<n; i++){
        for(int j=0; j<n-1 ; j++){
            if(E[j].nota<E[j+1].nota){
                Estudiante temp=E[j];
                E[j]=E[j+1];
                E[j+1]=temp;
            }
        }
    }
}

int main(){
    int n;
    cout<<"Ingrese el número de estudiantes: "; cin>>n;
    Estudiante *E=new Estudiante [n];
    cin.ignore();
    for(int i=0 ; i<n ; i++){
        cout<<"Ingrese el nombre del estudiante: "<<i+1<<": "; cin.getline(E[i].nombre,50);
        cout<<"Ingrese la nota del estudiante: "<<i+1<<": "; cin>>E[i].nota; cout<<endl; 
        cin.ignore();
    }
    Ordenar(E, n);
    for(int i=0 ; i<n ; i++){
        cout<<"Estudiante en posición "<<i+1<<": "<<E[i].nombre<<" con nota: "<<E[i].nota<<endl;
    }
    cout<<endl;
    cout<<"|> El estudiante con la mayor nota es: "<<E[0].nombre<<endl;
    cout<<"|> Nota: "<<E[0].nota<<endl;
    return 0;
} 