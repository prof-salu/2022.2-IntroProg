#include <iostream>
using namespace std;

int main(){
	//Entrada
	int codigo;
	float salario;
	//Saida
	float novoSalario;
	float valorAumento;
	
	cout << "Informe o codigo do cargo: ";
	cin >> codigo;
	
	cout << "Informe o seu salario: ";
	cin >> salario;
	
	if(codigo == 1){
		valorAumento = salario * 0.5;
		cout << "Cargo: Escriturario" << endl;
	}else if(codigo == 2){
		valorAumento = salario * 0.35;
		cout << "Cargo: Secretario" << endl;
	}else if(codigo == 3){
		valorAumento = salario * 0.2;		
		cout << "Cargo: Caixa" << endl;
	}else if(codigo == 4){
		valorAumento = salario * 0.1;
		cout << "Cargo: Gerente" << endl;
	}else if(codigo == 5){
		valorAumento = 0;
		cout << "Cargo: Diretor" << endl;
	}
	novoSalario = salario + valorAumento;
	cout << "Valor do aumento: " << valorAumento << endl;
	cout << "Novo Salario: " << novoSalario << endl;	
}
