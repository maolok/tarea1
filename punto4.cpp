#include<iostream>
#include<string>

using namespace std;

int numero,r1,r2,r3,r4,r5;

int main()
{
	
	cout<<"INGRESE NUMERO"<<endl;
	cin>>numero;
	
	
	r5 = numero%10;
	numero =  numero/10;
	r4 = numero%10;
	numero =  numero/10;
	r3 = numero%10;
	numero = numero/10;
	r2 = numero%10;
	numero = numero/10;
	r1 = numero%10;
	numero = numero/10;
	
	
	cout<<r1<<"   "<<r2<<"   "<<r3<<"   "<<r4<<"   "<<r5<<endl;
	

	
	return 0;
	
}
