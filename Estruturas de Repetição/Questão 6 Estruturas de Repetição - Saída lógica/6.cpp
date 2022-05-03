#include <iostream>

using namespace std;

int main(){
	int divisor, dividendo, quociente, resto;
	cin >> divisor;
	
	do{
		cin >> dividendo;
		quociente = dividendo/divisor;
		resto = dividendo % divisor;
	}while (resto != 2);
	
	cout << endl;
	cout << quociente;

	return 0;
}

