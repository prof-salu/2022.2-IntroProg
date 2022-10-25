#include <iostream>
using namespace std;

int main(){
	float n1, n2, n3, media;
	
	cout << "Informe a N1: ";
	cin >> n1;
	
	cout << "Informe a N2: ";
	cin >> n2;
	
	cout << "Informe a N3: ";
	cin >> n3;
	
	media = (n1 + n2 + n3) / 3;	
	
	cout << "Media: " << media << endl;
	
	if(media >= 0 && media < 5){
		cout << "Conceito: Insuficiente";
	}else if(media >= 5 && media < 7){
		cout << "Conceito: Recuperacao";
	}else if(media >= 7 && media < 9){
		cout << "Conceito: Bom";
	}else{
		cout << "Conceito: Muito Bom";
	}
}
