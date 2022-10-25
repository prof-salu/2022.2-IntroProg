#include <iostream>
using namespace std;

int main(){
	//Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo,
	//imprimindo o resultado.
	
	 int a;
	 
	 cout << "Informe A: ";
	 cin >> a;
	 
	 if(a > 0){
	 	cout << "Valor: " << a * 2;
	 }
	 
	 if(a < 0){
	 	cout << "Valor: " << a * 3;
	 }
}
