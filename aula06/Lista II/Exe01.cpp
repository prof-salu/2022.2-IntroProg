#include <iostream>
using namespace std;

int main(){
	//Fa�a um programa que leia os valores A, B, C e 
	//imprima na tela se a soma de A + B � menor que C.
	
	 int a, b, c;
	 
	 cout << "Informe A: ";
	 cin >> a;
	 
	 cout << "Informe B: ";
	 cin >> b;
	 
	 cout << "Informe C: ";
	 cin >> c;
	 
	 if((a + b) > c){
	 	cout << "A soma de A + B e MAIOR que C.";
	 }else{
	 	cout << "A soma de A + b e MENOR do que C.";
	 }
}
