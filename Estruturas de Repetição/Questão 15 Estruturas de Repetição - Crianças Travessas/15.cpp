#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int num, aux, cont = 1;

	cin >> num;

	while (cont <= num){
		aux = cont;

		if (pow(aux,2) <= num) {
			aux = pow(aux,2);
			cout << aux << " ";
		}
		cont++;
	}
	return 0;
}
