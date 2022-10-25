#include <iostream>
using namespace std;

int main(){
	int tempoTrabalho;
	float salario;
	float novoSalario;
	
	cout << "Informe o tempo de trabalho em anos: ";
	cin >> tempoTrabalho;
	
	cout << "Informe o seu salario: ";
	cin >> salario;
	
	if(tempoTrabalho >= 10){
		novoSalario = salario + (salario * 30)/100;
	}else{
		novoSalario = salario * 1.375; //1.375 == 37.5%
	}
	
	cout << "Salario reajustado: " << novoSalario;
}
