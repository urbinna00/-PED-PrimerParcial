#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main(){
    string cadena;
    
    cout<<"Ingrese una palabra: "; cin>>cadena;
    
	string aux_cadena(cadena.begin(), cadena.end());
    reverse(aux_cadena.begin(), aux_cadena.end());
    
	cadena=aux_cadena;
 
    cout<<"El texto invertido es: "<<cadena<<endl;
    
	return 0;
}
