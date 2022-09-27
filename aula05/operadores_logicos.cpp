#include <iostream>
using namespace std;

int main(){
    bool a, b;

    cout<<"Entre com o valor logico de a (0 ou 1): ";
    cin>>a;
    cout<<"Entre com o valor logico de b (0 ou 1): ";
    cin>>b;

    cout<<"\n\nOperacao logica entre os valores "<<a<<" e "<<b;
    cout<<"\n\nNegacao de a: "<<(!a);
    cout<<"\nNegacao de b: "<<(!b);
    cout<<"\nConjuncao (E) de a e b: "<<(a && b);
    cout<<"\nDisjuncao (OU) de a e b: "<<(a || b);    
}

