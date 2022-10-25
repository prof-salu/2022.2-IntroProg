#include <iostream>
using namespace std;

int main(){
	//Receber a media de uma aluno e exibir a sua situacao:
	
		//media < 4 ==> REPROVADO
		//media >= 4 E media < 6 ==> PROVA FINAL
		//media >= 6 ==> APROVADO
		
		float media = 9;
		
		if(media < 4){
			cout << "REPROVADO";
		}else{
			if(media >= 4 && media < 6){
				cout << "PROVA FINAL";
			}else{
				cout << "APROVADO";
			}
		}
}
