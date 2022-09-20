#include <iostream>
using namespace std;

int main(){
	float num1 = 0;
	float num2 = 0;
	
	cout << "Informe num1: ";
	cin >> num1;
	
	cout << "Informe num2: ";
	cin >> num2;
	
	float soma = num1 + num2;
	float subtracao = num1 - num2;
	float multiplicacao = num1 * num2;
	float divisao = num1 / num2;
	int resto = (int) num1 % (int) num2; //TypeCast
	
	cout << "Soma: " << soma;
	cout << "\nSubtracao: " << subtracao;
	cout << "\nMultiplicacao: " << multiplicacao
	cout << "\nDivisao: " << divisao;
	cout << "\nResto: " << resto;
} 
