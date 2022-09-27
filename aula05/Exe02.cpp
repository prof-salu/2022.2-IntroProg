#include <iostream>

int main(){
	// Crie um programa que leia as quatro notas de um 
	// aluno e mostra na tela a sua média final.
	
	float nota1, nota2, nota3, nota4, media;
	
	printf("Informe a nota 01: ");
	scanf("%f", &nota1);
	
	printf("Informe a nota 02: ");
	scanf("%f", &nota2);
	
	printf("Informe a nota 03: ");
	scanf("%f", &nota3);
	
	printf("Informe a nota 04: ");
	scanf("%f", &nota4);
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	printf("Media: %.1f", media);
}
