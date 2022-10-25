#include <iostream>
using namespace std;

int main(){

	//Faça um programa que receba o número do mês e mostre o mês correspondente.
	//Valide mês inválido.
	
	int mes = 9;
	
	while(mes > 0 && mes <= 12 ){
		cout << "Informe o valor do mes [1-12]: ";
		cin >> mes;
	
		//NO SWITCH ACEITA APENAS VALORES INTEIROS OU CHAR
		switch(mes){
			case 1:
				cout << "Janeiro";
				break;
			case 2: 
				cout << "Fevereiro";
				break;
			case 3: 
				cout << "Marco";
				break;
			case 4:
				cout << "Abril";
				break;
			case 5:
				cout << "Maio";
				break;
			case 6:
				cout << "Junho";
				break;
			case 7:
				cout << "Julho";
				break;
			case 8:
				cout << "Agosto";
				break;
			case 9:
				cout << "Setembro";
				break;
			case 10:
				cout << "Outubro";
				break;
			case 11:
				cout << "Novembro";
				break;
			case 12:
				cout << "Dezembro";
				break;
			default:
				cout << "Valor invalido";
		}
	}
	
	
}
