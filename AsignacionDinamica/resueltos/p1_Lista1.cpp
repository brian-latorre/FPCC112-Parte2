#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
using namespace std;

void imprimir(int &n, int notas[]){
	for(int i=0 ; i<n ; i++){
		cout<<"["<<notas[i]<<"]";
	}
	cout<<endl;
}

void GenerarNotas(int n, int notas[]){
	for(int i=0 ; i<n ; i++){
		notas[i]=rand()%(19)+1;
	}
}

void OrdenarNotas(int &n, int notas[]){
	for(int i=0 ; i<n ; i++){
		int menor=i;
		for(int j=i+1; j<n ; j++){
			if(notas[menor]>notas[j]){
				menor=j;
			}
		}
		int temp=notas[menor];
		notas[menor]=notas[i];
		notas[i]=temp;
	}
}

void ElegirNota(int &n, int notas[]){
	int aleatorio;
	
	aleatorio=notas[rand()%(n)];
	int elegido;
	do{
		cout<<endl<<"|> Adivine la nota seleccionada: "; cin>>elegido;
		if(elegido>aleatorio){
			cout<<"| La nota seleccionada es menor. "<<endl;
		}if(elegido<aleatorio){
			cout<<"| La nota seleccionada es mayor. "<<endl;
		}
	}while(elegido!=aleatorio);
	cout<<"| Adivinaste!"<<endl;
}

int main(){

	//pedir n para generar n notas.
	//generar un arreglo DINAMICO de n notas. 
	//f() ordenamiento del arreglo de notas
	//g() elegir una nota aleatoria    
	//h() intentar adivinar la nota, con ayuda.
	srand(time(NULL));
	int n;
	int *notas=new int[n];
	
	cout<<"|> Ingrese el numero de notas a generar: "; cin>>n ; cout<<endl;
	
	GenerarNotas(n, notas);
	
	OrdenarNotas(n, notas);
	
	ElegirNota(n,notas);
	
	cout<<"| Notas ordenadas: "<<endl;
	imprimir(n,notas);
	
	
	/*for(int i=0 ; i<n ; i++){
		cout<<notas[i]<<endl;
	}*/
	
    return 0; 
}