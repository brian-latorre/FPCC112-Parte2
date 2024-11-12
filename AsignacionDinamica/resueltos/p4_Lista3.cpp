#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
using namespace std;

char *ConseguirArreglo1(){
    int tam;
    char temp[1000];
    cout<<"| Ingrese la primera cadena: "; cin.getline(temp,1000,'\n'); cout<<endl;
    tam=strlen(temp);
    char *p=new char[tam];
    strcpy(p, temp);
    return p;
}

char *ConseguirArreglo2(){
    int tam;
    char temp[1000];
    cout<<"| Ingrese la segunda cadena: "; cin.getline(temp,1000,'\n'); cout<<endl;
    tam=strlen(temp);
    char *m=new char[tam];
    strcpy(m, temp);
    return m;
}

char *Concatenar(char *p,char *m, int n, int l){
    int tam=n+l+1;
    char *temp=new char[tam];
    temp[0]='\0';
    strcat(temp,p);
    strcat(temp,m);
    return temp;
}

int main(){
    char *p;
    char *m;
    int n, l;
    //hacer la cadena dinamica con el tamaño correcto
    p=ConseguirArreglo1();
    m=ConseguirArreglo2();
    n=strlen(p);
    l=strlen(m);
   /*f() Recibe dos arreglos dinámicos y sus tamaños*/
    int tam=n+l+1;
    char *r;
	r=Concatenar(p, m, n , l);
    /* devuelve un nuevo arreglo dinámico que sea la concatenación de ambos*/
    cout<<"|> Cadenas concatenadas: "<<r<<endl;
    cout<<"|> Tamaño del arreglo concatenado: "<<strlen(r)<<endl;
    delete[] p;
    delete[] m;
    delete[] r;
    return 0; 
}