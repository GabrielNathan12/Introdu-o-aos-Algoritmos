#include <iostream>

using namespace std;

void bubbleSort(int vet[], int tam){
	int meio = tam/2;

	int aux;

	for (int i = 0; i < tam; i++){
		if(tam % 2 == 0){ // Pares
			for (int j = 0; j < meio-i-1; j++){//Ordena subindo
				if (vet[j] > vet[j+1]){
					//swap(vet[j], vet[j+1]);
					aux = vet[j];
					vet[j] = vet[j+1];
					vet[j+1] = aux;
				}
			}
			for (int j = meio; j < tam-i-1; j++){  //Ordena descendo
				if (vet[j] < vet[j+1]){
					//swap(vet[j], vet[j+1]);
					aux = vet[j];
					vet[j] = vet[j+1];
					vet[j+1] = aux;
				}
			}
		} else { // Impares
			for (int j = 0; j < (meio+1)-i-1; j++){//Ordena subindo
				if (vet[j] > vet[j+1]){
					//swap(vet[j], vet[j+1]);
					aux = vet[j];
					vet[j] = vet[j+1];
					vet[j+1] = aux;
				}
			}
			for (int j = (meio+1); j < tam-i-1; j++){  //Ordena descendo
				if (vet[j] < vet[j+1]){
					//swap(vet[j], vet[j+1]);
					aux = vet[j];
					vet[j] = vet[j+1];
					vet[j+1] = aux;
				}
			}
		}
	}
}

int main(){
	int tam;

	cin >> tam;

	int vet[tam];

	for (int i = 0; i < tam; i++){
		cin >> vet[i];
	}

	bubbleSort(vet, tam);

	cout << endl;

	for (int i = 0; i < tam; i++){
		cout << vet[i] << " ";
	}

	return 0;
}
