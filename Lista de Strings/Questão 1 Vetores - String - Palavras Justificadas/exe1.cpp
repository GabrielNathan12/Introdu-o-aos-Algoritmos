#include <iostream>

using namespace std;

int main(){
	int tam;

	cin >> tam;

	string vet[tam];
	int maior;

	for (int i = 0; i < tam; i++){
		cin >> vet[i];

		int qtd = (vet[i]).size();

		if(i == 0){
			maior = qtd;
		}
		if (maior < qtd){
			maior = qtd;
		}
	}

	for (int i = 0; i < tam; i++){
		for (unsigned j = 0; j < maior-(vet[i]).size(); j++){
			cout << "*";
		}
		cout << vet[i] << endl;
	}

	return 0;
}

