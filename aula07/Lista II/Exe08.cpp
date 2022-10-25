#include <iostream>
using namespace std;

int main(){
	float peso;
	float altura;
	float imc;
	
	cout << "Informe o seu peso: ";
	cin >> peso;
	
	cout << "Informe a sua altura: ";
	cin >> altura;
	
	imc = peso / (altura * altura);
	
	if(imc < 18.5){
		cout << "Abaixo do peso";
	}else if(imc >= 18.5 && imc < 25){
		cout << "Peso normal";
	}else if(imc >= 25 && imc < 30){
		cout << "Sobrepeso";
	}else if(imc >= 30 && imc < 35){
		cout << "Obesidade Grau I";
	}else if(imc >= 35 && imc < 40){
		cout << "Obesidade Grau II";
	}else{
		cout << "Obesidade Grau III";
	}
}
