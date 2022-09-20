#include <iostream>

using namespace std;
//CENSO 2022
	//idade (inteiro)
	//salario (real)
	//nome (caractere)
	//sexo (caractere)
	//possui cnh? (boolean)
int main(){
	//tipoVariavel nomeVariavel
	//Nome unico dentro do bloco
	//NAO PODE comecar com numero
	//NAO PODE possuir caracteres especiais
	//NAO PODE POSSUIR ESPACOS EM BRANCO
	//BOAS PRATICAS variavel sempre deve comecar com letra minuscula
	int idadePessoa = 38;

	//Constante não pode ter seu valor alterado.
	//BOAS PRATICAS constantes deve ser nomeadas em maiuscula
	const float VALOR_CONSTANTE = 1234.50;
	
	printf("Idade: %d", idadePessoa);
	printf("Constante: %f", VALOR_CONSTANTE);
	//%d inteiro
	//%f real
	//%c caractere	
}
