#include <iostream>
using namespace std;

int main(){
	//Fa�a um programa que leia dois valores inteiros A e B se os valores forem iguais 
	//dever� se somar  os  dois,  caso  contr�rio  multiplique  A  por  B.  
	//Ao  final  de  qualquer  um  dos c�lculos  deve-se atribuir  o  resultado  para  uma  
	//vari�vel  C  e  mostrar  seu  conte�do  na tela.
	
	 int a, b, c;
	 
	 cout << "Informe A: ";
	 cin >> a;
	 
	 cout << "Informe B: ";
	 cin >> b;
	 
	 if(a == b){
	 	c = a + b;
	 }else{
	 	c = a * b;
	 }
	 
	 cout << "O valor de C: " << c;
	 
}
