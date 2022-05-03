#include <iostream>

using namespace std;

void selection_sort(int vet[] , int tam){
	int maior;
	int posMaior;
	int aux;
	int n = tam;
	
	for (int i = 0; i < tam-1; i++){
		maior = 0;
		for (int j = 0; j < n; j++){
			if (vet[j] > maior){
				maior = vet[j];
				posMaior = j;
			}
		}
		aux = vet[n-1];
		vet[n-1] = vet[posMaior];
		vet[posMaior] = aux;
		n--;
		for (int j = 0; j < tam; j++){
			cout << vet[j] << " ";
		}
		cout << endl;
	}
}
int main(){
	int n;
	cin >> n;
	int vet[n];
	
	for (int i = 0; i < n; i++){
		cin >> vet[i];
	}
	
	selection_sort(vet , n);
	
	return 0;
}
