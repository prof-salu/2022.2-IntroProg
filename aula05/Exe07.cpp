#include <iostream>
#include <math.h>

using namespace std;

int somar(int a, int b){
	return a + b;	
}

void imprime( float salario){
	cout << "Seu salario: " << salario;
}

int main(){
	int num1;
	int num2;
	int soma;
	
	cout << "Informe num1: ";
	cin >> num1;
	
	cout << "Informe num2: ";
	cin >> num2;
	
	soma = num1 + num2;
	
	cout << "Soma ao quadrado: " << pow(soma, 2) << endl;
	cout << "Raiz quadrada: " << sqrt(pow(soma, 2)) << endl;
	
	cout << "Minha soma: " << somar(num1, num2) << endl;
	cout << "Outra soma: " << somar(99, 321) << endl;
	imprime(5000);
	
}
