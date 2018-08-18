#include<iostream>
#include<string>

using namespace std;

int numero;
float res;
string resultado;

int main()
{
	
	cout<<"ingrese numero"<<endl;
	cin>>numero;
	
	res = numero % 2;
	
	numero != 0 ?  (res != 0 ?  resultado = "NUMERO IMPAR" : resultado = "NUMERO PAR" )   : resultado = "NUMERO es 0";
	
	cout<<resultado<<endl;
	

	
	return 0;
}