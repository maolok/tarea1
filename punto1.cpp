#include<iostream>

using namespace std;

int nentero;
float nflotante;
int main()
{
	
	nentero = 234;
	nflotante = nentero; // conversion implicita de entero a flotante
	cout<<nflotante<<endl;
	
	nflotante = 234.56;
	nentero = nflotante; // conversion implicita de flotante a entero
	cout<<nentero<<endl;
	
	nentero = 1616;
	nflotante = int (nentero); //conversion explicita de entero a flotante
	cout<<nflotante<<endl;
	
	nflotante = 7677.892;
	nentero = float (nflotante); //conversion explicita de flotante a entero
	cout<<nentero<<endl;
	
	return 0;
}