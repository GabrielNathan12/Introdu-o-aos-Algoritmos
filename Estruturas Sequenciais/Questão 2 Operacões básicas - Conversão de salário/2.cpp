#include <iostream>

using namespace std;

int main(){
	float salario , dolar , euro , libra;
	cin >> salario;
	
	dolar = salario / 2.13;
	euro = salario / 2.84;
	libra = salario / 3.34;
	
	cout << endl << dolar << endl 
		 << euro << endl
		 << libra;
		
	return 0;
}

