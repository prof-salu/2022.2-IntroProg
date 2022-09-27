#include <iostream>
using namespace std;

int main(){
	int valor;
	int notas50, notas20, notas10, notas5;
	
	cout << "Valor do saque: ";
	cin >> valor;
	
	notas50 = valor / 50;
	notas20 = (valor % 50) / 20;
	notas10 = ((valor % 50) % 20)/ 10;
	notas5 = ((((valor % 50) % 20) % 10)/5);
	
	cout << "Notas de 50: " << notas50 <<endl;
	cout << "Notas de 20: " << notas20 <<endl;
	cout << "Notas de 10: " << notas10 <<endl;
	cout << "Notas de 5: " << notas5 <<endl;
}
