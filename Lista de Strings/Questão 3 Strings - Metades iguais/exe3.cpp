#include <iostream>

using namespace std;

struct matPalavra{
	int qtdLetras;
	string palavra;
};

int main(){
	int cont;
	int tompero1 = 0;
	int tompero2 = 0;
	int letrasIguais = 0;
	string palavra;

	cin >> cont;

	matPalavra vet[cont];
	matPalavra vetSi[cont];
	matPalavra vetNo[cont];

	for (int i = 0; i < cont; i++){
		cin >> vet[i].palavra;

		vet[i].qtdLetras = (vet[i].palavra).length();
	}

	for (int i = 0; i < cont; i++){
		string palavraAux = vet[i].palavra;
		int qtd = vet[i].qtdLetras;

		if(qtd % 2 == 0){ // Verifica se a palavra tem tamanho par
			int meio = qtd/2; // Pega o meio da palavra
			bool achou = false;

			for (int m = 0; m <= meio-1; m++){ //Vai do inicio até o meio da palavra
				for (int n = meio; n < qtd; n++){ // Vai do meio da palavra até o final
					if (palavraAux[m] == palavraAux[n] and !achou){ // Olha se a letra que esta na primeira na primeira parte tambem esta na segunda
						palavraAux[m] = '*';
						palavraAux[n] = '*';
						achou = true;

						letrasIguais++;
					}
				}
				achou = false;
			}
			if (letrasIguais == meio){
				vetSi[tompero1] = vet[i];
				tompero1++;
			} else {
				vetNo[tompero2] = vet[i];
				tompero2++;
			}
			letrasIguais = 0;
		} else { // Verifica se a palavra tem tamanho impar
			int meio = qtd/2; // Pega o meio da palavra
			bool achou = false;

			for (int m = 0; m <= meio-1; m++){ //Vai do inicio até o meio da palavra
				for (int n = meio+1; n < qtd; n++){ // Vai do meio da palavra até o final
					if (palavraAux[m] == palavraAux[n] and !achou){ // Olha se a letra que esta na primeira parte tambem esta na segunda
						palavraAux[m] = '*';
						palavraAux[n] = '*';
						achou = true;

						letrasIguais++;
					}
				}
				achou = false;
			}
			if (letrasIguais == meio){
				vetSi[tompero1] = vet[i];
				tompero1++;
			} else {
				vetNo[tompero2] = vet[i];
				tompero2++;
			}
			letrasIguais = 0;
		}
	}

	for (int i = 0; i < tompero1; i++){ // Ordena o vetor que tem as palavras com mesma quantidade
		for (int j = 0; j < tompero1-i-1; j++){
			if (vetSi[j+1].qtdLetras < vetSi[j].qtdLetras){
				matPalavra aux = vetSi[j];
				vetSi[j] = vetSi[j+1];
				vetSi[j+1] = aux;
			}
		}
	}
	for (int i = 0; i < tompero1; i++){
		cout << vetSi[i].palavra << endl;
	}
	for (int i = 0; i < tompero2; i++){  // Ordena o vetor que tem as palavras com diferentes quantidades
		for (int j = 0; j < tompero2-i-1; j++){
			if (vetNo[j+1].qtdLetras < vetNo[j].qtdLetras){
				matPalavra aux = vetNo[j];
				vetNo[j] = vetNo[j+1];
				vetNo[j+1] = aux;
			}
		}
	}
	for (int i = 0; i < tompero2; i++){
		cout << vetNo[i].palavra << endl;
	}

	cout << endl;

	return 0;
}

