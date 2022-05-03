#include <iostream>
using namespace std;

void inverter(int numeros[] ,int posicao , int MAX) {
	if (posicao < MAX/2) {
		int tmp = numeros[posicao];
		int nova_posicao = MAX-posicao-1;
		numeros[posicao] = numeros[nova_posicao];
		numeros[nova_posicao] = tmp;
		inverter(numeros, posicao+1 , MAX);
	}
}
int main(void) {
	int MAX;
	cin >> MAX;
	int numeros[MAX];
	for(int i=0; i<MAX; i++){
		cin >> numeros[i];
	}

	inverter(numeros, 0 , MAX);
	for(int i=0; i<MAX; i++) 
		cout << numeros[i] << (i == MAX-1) << " ";
	return 0;
}
