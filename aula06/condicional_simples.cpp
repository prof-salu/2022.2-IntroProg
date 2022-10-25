#include <iostream>
using namespace std;
//Estrutura sequencial
int main(){
	//Verificar se um numero é multiplo de 4
	int numero = 21;
	
	//Desvio de fluxo
	if(numero % 4 == 0){
		cout << "Processando o calculo...." << endl;
		cout << "Numero multiplo de 4." << endl;
	}
		
	cout << "Fim do programa.";
}
