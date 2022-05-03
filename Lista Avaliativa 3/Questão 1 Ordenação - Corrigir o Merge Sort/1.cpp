#include <iostream>

using namespace std;

void Troca(int &A, int &B){
	int aux = A;
	A = B;
	B = aux;
}

void Merge(int V[], int p, int q, int r, int U[]) {
	int a = p;
	int b = q;
	
	for (int i = p; i < r; i++) {
		if ((a < q) and ((b >= r) or (V[a] < V[b]))) {
			U[i] = V[a];
			++a;
		}
		else {
			U[i] = V[b];
			++b;
		}
	}
	for (int i = p; i < r; ++i) {
		V[i] = U[i];
	}
}

void MergeSort(int V[], int primeira, int ultima, int U[]) {
	if ((ultima - primeira) < 2) return;
	int meio = ((primeira + ultima)/2);
	MergeSort(V, primeira, meio, U);
	MergeSort(V, meio, ultima, U);
	Merge(V, primeira, meio, ultima, U);
	
}

void MergeSort1(int V[], int tamanho) { 
	int U[tamanho];
	MergeSort(V, 0, tamanho, U);
}

int main(){
	int n;
	cin >> n;
	int vet[n];
	
	for (int i = 0; i < n; i++){
		cin >> vet[i];
	}
	
	MergeSort1(vet , n);
	
	for (int i = 0; i < n; i++){
		cout << vet[i] << " ";
	}
	
	return 0;
}
