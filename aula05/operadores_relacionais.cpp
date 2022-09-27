#include <iostream>
using namespace std;

int main(){
    bool a, b;

    cout<<"Entre com o valor logico de a (0 ou 1): ";
    cin>>a;
    cout<<"Entre com o valor logico de b (0 ou 1): ";
    cin>>b;

    cout<<"\n\nRelacoes entre os valores "<<a<<" e "<<b;
    cout<<"\n\n Igualdade entre a e b: "<<(a == b);
    cout<<"\nDiferenca entre a e b: "<<(a != b);
    cout<<"\na e maior do que b: "<<(a > b);
    cout<<"\na e menor do que b: "<<(a < b);
    cout<<"\na e maior ou igual a b: "<<(a >= b);
    cout<<"\na e menor ou igual a b: "<<(a <= b);
}

