#include <iostream>
using namespace std;

int main(){
	//Declaracao das variaveis
	int idade = 38; //(TIPOS PRIMITIVO) armazena um valor inteiro
	float salario = 3250.78;//(TIPOS PRIMITIVO)armazena um valor real
	bool temCnh;//(TIPOS PRIMITIVO)armazena um valor logico {0, 1}
	char sexo;//(TIPOS PRIMITIVO)armazena UM caractere
	string nome;//armazena varios caracteres (C++)
	
	temCnh = true;// true => 1 || false => 0
	sexo = 'm'; //Tipo char deve ser passado entre aspas simples
	nome = "Salustiano"; //Tipo string deve ser passado entre aspas duplas
	//C++
	
	//Comando de captura (cin)
	cout << "Informe o seu nome: \n";
	cin >> nome;
	
	cout << "Informe a sua idade: \n";
	cin >> idade;
	
	cout << "Informe o seu sexo: \n";
	cin >> sexo;
	
	cout << "Possui CNH: \n";
	cin >> temCnh;
	
	cout << "Informe o seu salario: \n";
	cin >> salario;
	
	
	//Comando de impressao (cout)
	cout << "Nome: " << nome << "\n"; //CONCATENAÇÃO
	cout << "Idade: " << idade << "\n";
	cout << "Sexo: " << sexo << "\n";
	cout << "CNH: " << temCnh << "\n";
	cout << "Salario: " << salario << "\n";
}
