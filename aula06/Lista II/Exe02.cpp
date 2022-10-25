#include <iostream>
using namespace std;

int main(){
	//Faça um programa que leia dois valores inteiros A e B se os valores forem iguais 
	//deverá se somar  os  dois,  caso  contrário  multiplique  A  por  B.  
	//Ao  final  de  qualquer  um  dos cálculos  deve-se atribuir  o  resultado  para  uma  
	//variável  C  e  mostrar  seu  conteúdo  na tela.
	
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
