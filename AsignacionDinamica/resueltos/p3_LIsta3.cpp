#include <iostream>
#include <cstring>
using namespace std;

char *pedirCadena(){
    cout<<"Ingrese una cadena de caracteres: ";
    char temp[200];
    cin.getline(temp,200,'\n');
    int tam=strlen(temp);
    char *ptr=new char[tam];
    strcpy(ptr,temp);
    return ptr;
}

int main(){
    /*Pedir al usuario una cadena de caracteres*/
    /*almacenar la cadena de caracteres de manera dinamica*/
    char *c;
    c=pedirCadena();
    cout<<"Cadena ingresada: ";
    cout<<c<<endl;
    cout<<"Tamaño de cadena: "<<strlen(c);
    return 0;
}