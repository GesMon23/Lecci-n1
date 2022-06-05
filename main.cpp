#include <iostream>
#include "biblioteca.hpp"
using namespace std;
int main(){
	int numero1, numero2, resultado;
	cout<<"SUMA"<<endl;
	cout<<"INGRESE EL PRIMER NUMERO"<<endl;
	cin>>numero1;
	cout<<"INGRESE EL SEGUNDO NUMERO"<<endl;
	cin>>numero2;
	resultado=suma(numero1, numero2);
	cout<<"El resultado es: "<<resultado<<endl;
	system ("pause");
}
