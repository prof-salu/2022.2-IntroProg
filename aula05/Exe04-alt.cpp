#include <iostream>
using namespace std;

int main(){
	int numero;
	
	cout << "Informe um numero: ";
	cin >> numero;
	
	for(int i = 0; i <= 1000; i++){
		cout << numero << " * " << i << " = " << (numero * i) << endl;
	}
}
