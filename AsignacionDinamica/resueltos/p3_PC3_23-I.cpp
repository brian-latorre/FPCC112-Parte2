#include <iostream>
#include <cmath>
using namespace std;

struct Punto{
    int x;
    int y;
    int z;
}p1, p2;

float Distancia(Punto p1, Punto p2){
    float d=sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2)+pow(p2.z-p1.z,2));
    return d;
}

int main(){
    float resultado;
    cout<<"Ingrese las coordenadas del primer punto: "<<endl<<"X: ";
    cin>>p1.x; 
    cout<<"Y: "; cin>>p1.y; cout<<"Z: ";cin>>p1.z;
    cout<<"Ingrese las coordenadas del segundo punto: "<<endl<<"X: ";
    cin>>p2.x; 
    cout<<"Y: "; cin>>p2.y; cout<<"Z: ";cin>>p2.z;
    resultado=Distancia(p1, p2);
    cout<<"La distancia entre los dos puntos es: " <<resultado;
    return 0;
}