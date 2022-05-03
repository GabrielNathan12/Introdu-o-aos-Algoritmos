#include <iostream>
#include <cmath>

using namespace std;

struct Registro{
	int x;
	int y;
	double D;
};

int main(){
	Registro pontos[5];

	double menorD;
	int menorPos;

	cin >> pontos[0].x >> pontos[0].y;

	for (int i = 1; i < 5; i++){
		cin >> pontos[i].x >> pontos[i].y;

		pontos[i].D = sqrt(pow((pontos[i].x - pontos[0].x), 2) + pow((pontos[i].y - pontos[0].y), 2));

		if(i == 1){
			menorD = pontos[i].D;
		}
		if (pontos[i].D < menorD){
			menorD = pontos[i].D;
			menorPos = i;
		}
	}

	cout << endl << pontos[menorPos].x << " " << pontos[menorPos].y;

	return 0;
}

// Esqueci de terminar essa pra contabilar frequencia foi so depois da minha aula das 21 que um amigo meu tava me pedindo ajuda para fazer , espero que aceitem
