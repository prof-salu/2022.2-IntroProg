#include <iostream>
using namespace std;

int main(){

	//Fa�a um programa que receba o n�mero do m�s e mostre o m�s correspondente.
	//Valide m�s inv�lido.
	
	int mes;
	
	cout << "Informe o valor do mes [1-12]: ";
	cin >> mes;
	
	if(mes == 1){
		cout << "Janeiro";
	}else if (mes == 2){
		cout << "Fevereiro";
	}else if (mes == 3){
		cout << "Marco";
	}else if (mes == 4){
		cout << "Abril";
	}else if (mes == 5){
		cout << "Maio";
	}else if (mes == 6){
		cout << "Junho";
	}else if (mes == 7){
		cout << "Julho";
	}else if (mes == 8){
		cout << "AGosto";
	}else if (mes == 9){
		cout << "Setembro";
	}else if (mes == 10){
		cout << "Outubro";
	}else if (mes == 11){
		cout << "Novembro";
	}else if (mes == 12){
		cout << "Dezembro";
	}else{
		cout << "Valor invalido";
	}
}
