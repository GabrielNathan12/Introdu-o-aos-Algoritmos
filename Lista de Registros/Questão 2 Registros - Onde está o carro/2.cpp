#include <iostream>

using namespace std;

struct Carro{
	float cord1;
	float cord2;
};

struct Posicao{
	Carro posicao;
	Carro velocidade;
};

int main(){
	
	Posicao car;
	
	cin >> car.posicao.cord1 >> car.posicao.cord2;
	cin >> car.velocidade.cord1 >> car.velocidade.cord2;
	
	float tempo;
	cin >> tempo;
	
	car.posicao.cord1 += car.velocidade.cord1 * tempo;
	car.posicao.cord2 += car.velocidade.cord2 * tempo;
	
	cout << endl;
	cout << car.posicao.cord1 << " " << car.posicao.cord2;
	
	return 0;
}

