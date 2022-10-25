#include <iostream>
using namespace std;

int main(){
	//Escreva um programa que informe se um numero é par ou impar.
	
	int numero = 12;
	
	if(numero % 2 == 0){
		cout << "Par";
	}
	
	if(numero % 2 != 0){
		cout << "Impar";
	}
}
