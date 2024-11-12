#include <iostream>
#include <cstring>
using namespace std; 


/*usamos un array de structuras para poder tener char, char e ints
respecto a una persona*/

struct trabajador{
    char nombre[20];
    char puesto[20];
    int salario;
}personas[9];

void imprimir_puesto(char *puesto, trabajador personas[9]){
    int promedio=0;
    int cont=0;
    for(int i=0 ; i<9 ; i++){
        if(strcmp(personas[i].puesto,puesto)==0){
            cout<<personas[i].nombre<<"  "<<personas[i].salario<<endl;
            promedio+=personas[i].salario;
            cont++;
        }
    }
    cout<<"El promedio de SUELDO es: "<<promedio/cont<<endl;
    cout<<"--------------------------"<<endl;
}

int main()
{
    char puesto[20];
    
    /*Determinamos ya los valores para cada persona*/
    personas[0] = {"VIDAL", "ASISTENTE", 800},
    personas[1] = {"MORALES", "VENTAS", 1600},
    personas[2] = {"SANZ", "VENTAS", 1250},
    personas[3] = {"IGLESIAS", "GERENTE", 2975},
    personas[4] = {"MARTIN", "VENTAS", 1250},
    personas[5] = {"VAZQUEZ", "GERENTE", 2850},
    personas[6] = {"MORENO", "GERENTE", 2450},
    personas[7] = {"JIMENEZ", "ANALISTA", 300},
    personas[8] = {"GARCIA", "PRESIDENTE", 5000};

    /*bucle for para imprimir*/
    for(int i=0 ; i<9 ; i++){
        cout<<personas[i].nombre<<"  "<<personas[i].puesto<<"  "<<personas[i].salario<<endl;
    }
    
    /*pedir el puesto que desea el usuario*/
    cout<<"--------------------------"<<endl;
    cout<<"El puesto es: "; cin.getline(puesto,20,'\n');
    cout<<"--------------------------"<<endl;
    /*cout de las personas que son del puesto pedido y su respectivo 
    salario (int puesto, trabajador personas[9]);
    cout del promedio de sueldo*/
    imprimir_puesto(puesto,personas);
    
    return 0;
}
