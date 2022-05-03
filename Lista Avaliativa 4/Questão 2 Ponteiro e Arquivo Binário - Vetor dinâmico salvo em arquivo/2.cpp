#include <iostream>
#include <fstream>

using namespace std;

void Alocacao(int* &vet, int &cont2, int qtd){
	int *aux = new int[cont2];
	
	for(int i = 0; i < qtd; i++){
		aux[i] = vet[i];
	}
	cont2 += 5;
	delete[] vet;
	vet = new int[cont2];
	
	for(int i = 0; i < qtd; i++){
		vet[i] = aux[i];
	}
	delete[] aux;
	aux = nullptr;
}

int main(){
	
	ifstream ArqE("dados.bin", ios::binary);
	
	int cont2 = 5;
	int qtd = 0;
	int n, cont = 0;
	int *vet = new int[cont2];	
	if(ArqE){
		do{
			ArqE >> n;
			if(n > 0){
				if(qtd == cont2){
					Alocacao(vet, cont2, qtd);
					cont++;
				}
				vet[qtd] = n;
				qtd++;
			}
		} 
		while (n > 0);
			ArqE.close();
	}
	do{
		cin >> n;
		if(n > 0){
			if(qtd == cont2){
				Alocacao(vet, cont2, qtd);
				cont++;
			}
			vet[qtd] = n;
			qtd++;
		}
	} 
	while (n > 0);
		for (int i = 0; i < qtd; i++){
			cout << vet[i] << " ";
		}
		cout << endl << cont2 << endl << cont;
		ofstream ArqS("dados.bin", ios::binary);
	
	for (int i = 0; i < qtd; i++){
		ArqS << vet[i] << " ";
	}
	
	delete[] vet;
	
	vet = nullptr;

	return 0;
}
