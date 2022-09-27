#include <iostream>

int main(){
	//Crie um programa que leia o salário de um 
	//funcionário e mostra na tela o seu salário anual.
	
	float salario;
	float salarioAnual;
	
	printf("Informe o seu salario: ");
	scanf("%f", &salario);
	
	salarioAnual = salario * 12;
	
	printf("Salario anual: R$ %.2f", salarioAnual);
}
