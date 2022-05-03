#include <iostream>

using namespace std;

int main () {

	int lado1, lado2, lado3;

	cin >> lado1 >> lado2 >> lado3;

	if (lado1 > lado2 + lado3 or lado2 > lado1 + lado3 or lado3 > lado1 + lado2) {
		cout << "-1" << endl;
	} else {
		if (lado1 == lado2 and lado2 == lado3) {
			cout << "equilatero" << endl;
		} else {
			if (lado1 == lado2 or lado1 == lado3 or lado2 == lado3) {
				cout << "isosceles" << endl;
			} else {
				if (lado1 != lado2 and lado1 != lado3 and lado2 != lado3) {
					cout << "escaleno" << endl;
				}
			}
		}
	}
	return 0;
}
