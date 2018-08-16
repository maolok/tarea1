#include <iostream>
#include <string>

using namespace std;

string st1,st2,st3;
char letra1,letra2,letra3;
string resultado;



int main()
{
    cout<<"ingrese primer palabra : "<<endl;
    cin>>st1;
    cout<<"ingrese segunda palabra : "<<endl;
    cin>>st2;
    cout<<"ingrese tercer palabra : "<<endl;
    cin>>st3;
    
    
    std::string::iterator it=st1.begin();
     letra1 = *it;
    std::string::iterator it1=st2.begin();
     letra2 = *it1;
    std::string::iterator it2=st3.begin();
     letra3 = *it2;
     
     cout<<letra1<<endl;
     cout<<letra2<<endl;
     cout<<letra3<<endl;
     
     
     /*
     
     letra1 > letra2 ? (letra1 > letra3 ? resultado = st1 : 0 )    :  0;
     letra2 > letra3 ? (letra2 > letra1 ? resultado = st2 : 0 )    :  0;
     letra3 > letra1 ? (letra3 > letra2 ? resultado = st3 : 0 )    :  0;
     */
     
     if ((letra1 < letra2) && (letra1 < letra3))
     {
         
         resultado = st1;
         
     }
     
     else if ((letra2 < letra1) && (letra2 < letra3))
     {
         
        resultado = st2;
     }
     
     
     else if ((letra3 < letra1) && (letra3 < letra2))
     {
         
         resultado = st3;
         
     }
     cout<<"la primer palabra en orden alfabetico es : "<<resultado<<endl;
     
    return 0;
    
    
}