#include <iostream>
using namespace std;

int main(){
	//Declaracao das variaveis
	int idade = 38; //(TIPO PRIMITIVO) armazena um valor inteiro
	float salario = 3250.78;//(TIPO PRIMITIVO)armazena um valor real
	bool temCnh;//(TIPO PRIMITIVO)armazena um valor logico {0, 1}
	char sexo;//(TIPO PRIMITIVO)armazena UM caractere
	string nome;//armazena varios caracteres (C++)
	
	temCnh = true;// true => 1 || false => 0
	sexo = 'm'; //Tipo char deve ser passado entre aspas simples
	nome = "Salustiano"; //Tipo string deve ser passado entre aspas duplas
	
	//Comando de captura (scanf)
	//Captura dos dados
	printf("Informe o seu salario: ");
	scanf("%f", &salario);
	
	printf("Informe o sexo: ");
	scanf("%s", &sexo);
		
	printf("Tem CNH?");
	scanf("%d", &temCnh);
		
	printf("Sua idade: ");
	scanf("%d", &idade);
	
	//Comando de impressao (printf)
	//printf("Nome: %s", nome);
	
	//Impressao do relatorio
	printf("\nSexo: %c", sexo);
	printf("\nIdade: %d", idade);
	printf("\nCNH: %d", temCnh);
	printf("\nSalario: %.2f", salario);
	
	
}
