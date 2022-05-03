#include <iostream>

using namespace std;

void selection_sort (int vet[],int n) {
	int menor , aux;
	
	for (int i = 0; i < (n - 1); i++) {
		menor = i;
		for (int j = i + 1; j < n; j++) {
			if (vet[j] < vet[menor]) {
				menor = j;
			}
		}
		if (i != menor) {
			aux = vet[i];
			vet[i] = vet[menor];
			vet[menor] = aux;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << vet[i] << endl;
	}
}

int main () {
	int n ;
	cin >> n;
	
	int vet[n];
	
	for (int i = 0; i < n; i++){
		cin >> vet[i];
	}
	
	selection_sort (vet, n);
	
	return 0;
	
}
