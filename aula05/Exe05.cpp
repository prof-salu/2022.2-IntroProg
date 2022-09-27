#include <iostream>

using namespace std;

int main(){
	int marcaA;	
	int marcaB;
	int marcaC;
	
	cout << "Informe a quantidade chuteiras da marca A: ";
	cin >> marcaA;
	
	cout << "Informe a quantidade chuteiras da marca B: ";
	cin >> marcaB;
	
	cout << "Informe a quantidade chuteiras da marca C: ";
	cin >> marcaC;
	
	cout << "MarcaA: " << marcaA << endl;
	cout << "MarcaB: " << marcaB << endl;
	cout << "MarcaC: " << marcaC << endl;
	cout << "Total de chuteiras: " << (marcaA + marcaB + marcaC) << endl;
}
