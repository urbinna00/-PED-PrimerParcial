/*Programa que calcula de manera iterativa la suma de los dígitos
de un número n.*/

#include <iostream>
#include <cmath>

using namespace std;

int suma(int n){
	
	int suma=0;
	
	while(n>0){
		suma=suma+(n%10);
		n=n/10;
	}
	
	return suma;
	}

int main(){
	
	int num=0, sumatoria=0;
	
	cout<<"SUMATORIA DE LOS DIGITOS DE UN NUMERO.";
	cout<<"\nIngrese un numero: "; cin>>num;
	
	sumatoria= suma(num);
	
	cout<<"\nLa sumatoria de los digitos de "<<num<<" es: "<<sumatoria;
	
	return 0;
}
