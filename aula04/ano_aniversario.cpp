#include <iostream>
using namespace std;

int main(){
	// Escreva um programa que leia o ano atual e o ano em 
	// que uma pessoa nasceu em seguida retorne a idade da pessoa?
	int anoNascimento = 0;
	const int ANO_ATUAL = 2022;//CONSTANTE
	
	cout << "\nInforme o ano que voce nasceu: ";
	cin >> anoNascimento;
	
	cout << "Sua idade: " << (ANO_ATUAL - anoNascimento);
} 
