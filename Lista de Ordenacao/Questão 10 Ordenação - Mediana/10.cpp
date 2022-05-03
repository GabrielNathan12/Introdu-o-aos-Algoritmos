#include <iostream>
using namespace std;

void Bubble(float vet[] , int n){
	float aux;
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - i -1; j++){
			if(vet[j] > vet[j + 1]){
				aux = vet[j];
				vet[j] = vet[j + 1];
				vet[j + 1] = aux;
			}
		}
	}
}

int main(){
	int qtd = 0;
	float vet[20] , n;
	
	while (n >= 0 and qtd < 20){
		cin >> n;
		if(n >= 0){
			vet[qtd] = n;
			qtd++;
		}
	}
	
	Bubble(vet , qtd);
	
	int meio = qtd / 2;
	float mediana;
	
	if(qtd % 2 != 0){
		mediana = vet[meio];
	}else{
		mediana = (vet[meio] + vet[meio - 1]) / 2;
	}
	
	cout << mediana;
	
	return 0;
}

