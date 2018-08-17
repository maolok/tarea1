#include<iostream>
#include<string>

using namespace std;

int main()
{

string palabra1,palabra2,palabra3,palabra4,palabra5,palabra6;
cout<<"ingrese primera palabra"<<endl;
cin>>palabra1;
palabra2 = palabra1.substr(0,1);
cout<<"ingrese segunda palabra"<<endl;
cin>>palabra3;
palabra4 = palabra3.substr(0,1);
cout<<"ingrese tercer palabra"<<endl;
cin>>palabra5;
palabra6 = palabra5.substr(0,1);





palabra2<palabra4 && palabra2<palabra6 ? cout<<"la primera palabra por orden alfabetico es :"<<palabra1 : ((palabra4<palabra2 && palabra4<palabra6) ? cout<<"la primera palabra por orden alfabetico es :"<<palabra3 : cout<<"la primera palabra por orden alfabetico es :"<<palabra5);



return 0;
}
