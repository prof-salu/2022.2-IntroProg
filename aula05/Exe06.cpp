#include <iostream>
using namespace std;

int main(){
	int tempo;
	
	int horas;
	int minutos;
	int segundos;
	
	cout << "Informe o tempo em segundos: ";
	cin >> tempo;
	
	horas = tempo / 3600;
	minutos = (tempo % 3600) / 60;
	segundos = tempo % 60;
	
	cout << horas << " horas" << endl;
	cout << minutos << " minutos" << endl;
	cout << segundos << " segundos" << endl;
}
