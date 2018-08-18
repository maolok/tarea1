#include<iostream>
#include<string>

using namespace std;

float n1,n2,n3,nmayor;

string resultado;

int main()
{
	
	cout<<"INGRESE NUMERO 1"<<endl;
	cin>>n1;
	
	cout<<"INGRESE NUMERO 2"<<endl;
	cin>>n2;
	
	cout<<"INGRESE NUMERO 3"<<endl;
	cin>>n3;
	
	
	n1 > n2 ? (n1 > n3 ? nmayor = n1 : 0 ) : 0 ;
	n2 > n1 ? (n2 > n3 ? nmayor = n2 : 0 ) : 0 ;
	n3 > n1 ? (n3 > n2 ? nmayor = n3 : 0 ) : 0 ;
	
	cout<<"el numero mayor es :"<<nmayor<<endl;
	

	
	return 0;
	
}