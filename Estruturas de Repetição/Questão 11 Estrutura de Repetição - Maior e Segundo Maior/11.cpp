#include <iostream>

using namespace std;

int main () {
	int contador = 1;
	double n, primeiro, segundo, soma = 0;
	
	cin >> n;
	
	primeiro = n;
	
	cin >> n;
	
	segundo = n;
	
	soma = primeiro + segundo;
	
	while (contador <= 5) {
		cin >> n;
		if (n > primeiro) {
			segundo = primeiro;
			primeiro = n;
		}
		if ((n > segundo) and (n < primeiro)) {
			segundo = n;
		}
		soma = soma + n;
		contador++;
	}
	cout << endl;
	cout << primeiro << endl;
	cout << segundo << endl;
	cout << (soma - primeiro - segundo) / 5 << endl;

	return 0;
}
