#include <iostream>

int main(){
	//Crie um programa que leia o sal�rio de um 
	//funcion�rio e mostra na tela o seu sal�rio anual.
	
	float salario;
	float salarioAnual;
	
	printf("Informe o seu salario: ");
	scanf("%f", &salario);
	
	salarioAnual = salario * 12;
	
	printf("Salario anual: R$ %.2f", salarioAnual);
}
