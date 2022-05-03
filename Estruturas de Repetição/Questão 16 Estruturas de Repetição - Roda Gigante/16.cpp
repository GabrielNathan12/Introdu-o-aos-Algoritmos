#include <iostream>
#include <cmath>

using namespace std;

int main () {
	double raio, cadeiras, angulo, angulo2, x, y, cont;

	cont = 0;

	angulo2 = 0;

	cin >> raio >> cadeiras;

	angulo = (2*M_PI)/cadeiras;

	while (cont < cadeiras) {
		x = (cos(angulo2))*raio;
		y = (sin(angulo2))*raio;

		angulo2 += angulo;

		cout << x << " " << y << endl;

		cont++;
	}

	return 0;
}
