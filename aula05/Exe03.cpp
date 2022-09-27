#include <iostream>

int main(){
	int lado;
	
	printf("Informe o lado do quadrado: ");
	scanf("%d", &lado);
	
	printf("Perimetro: %d", (lado * 4));
	printf("\nArea: %d", (lado * 2));
}
