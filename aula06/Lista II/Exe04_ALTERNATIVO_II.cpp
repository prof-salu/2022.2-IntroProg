#include <iostream>
using namespace std;

int main(){
	int idade;
	
	cout << "Informe a sua idade: ";
	cin >> idade;
	//idade = 6
	if(idade >= 5 && idade <= 7){
		cout << "Infantil A";
	} 
	
	if(idade >= 8 && idade <= 10){
		cout << "Infantil B";
	}
	
	if(idade >= 11 && idade <= 13){
		cout << "Juvenil A";
	}
	
	if(idade >= 14 && idade <= 17){
		cout << "Juvenil B";
	}
	
	if(idade >= 18){
		cout << "Adulto";
	}			

}
