/*Programa que calcula de manera recursiva 
la suma de los digitos de un número n.*/

#include <iostream>
#include <cmath>

using namespace std;

int sumatoria(int n){
	if(n==0){
		return 0;
	}
	else{
		return ((n%10)+ sumatoria(n/10));
	}
}

int main(){
	int num=0, suma=0;
	
	cout<<"SUMATORIA DE LOS DIGITOS DE UN NUMERO"<<endl;
	cout<<"Ingrese un numero: "; cin>>num;
	
	suma= sumatoria(num);
	
	cout<<"\nLa sumatoria de los digitos de "<<num<<" es: "<<suma;	
	
	return 0;
}
