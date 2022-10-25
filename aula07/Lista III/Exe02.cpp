#include <iostream>
using namespace std;

int main(){
	
	float num1, num2;
	char operacao;
	
	cout << "Informe a operacao: ";
	cin >> operacao;
		
	cout << "Informe num1: ";
	cin >> num1;
	
	cout << "Informe num2: ";
	cin >> num2;	
	
	if(operacao == '+')	{
		cout << "Resultado: " << num1 + num2;
	}else if(operacao == '-')	{
		cout << "Resultado: " << num1 - num2;
	}else if(operacao == '*')	{
		cout << "Resultado: " << num1 * num2;
	}else if(operacao == '/')	{
		cout << "Resultado: " << num1 / num2;
	}else{
		cout << "Operacao invalida";
	}
	
}
