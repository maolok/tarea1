#include<iostream>

using namespace std;

int n1,n2,nmayor;

int main()
{
	
	cout<<"ingrese primer numero"<<endl;
	cin>>n1;
	cout<<"ingrese segundo numero"<<endl;
	cin>>n2;
	
	
	n1 > n2 ? nmayor = n1 : nmayor = n2 ;
	cout<<"el numero mayor es :"<<nmayor<<endl;
	
	
	return 0;
}