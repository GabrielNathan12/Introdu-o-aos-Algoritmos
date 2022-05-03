#include <iostream>

using namespace std;

void Crecente(int vet[] , int n){
	int aux;
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - i - 1; j++){
			if(vet[j] > vet[j + 1]){
				aux = vet[j];
				vet[j] = vet[j + 1];
				vet[j +1] = aux;
			}
		}
	}
}

void Decrescente(int vet[] , int n){
	int aux;
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - i - 1; j++){
			if(vet[j] < vet[j + 1]){
				aux = vet[j];
				vet[j] = vet[j + 1];
				vet[j +1] = aux;
			}
		}
	}
}
int main(){
	int n;
	cin >> n;
	
	int mat[n][n] , vet[n];
	
	for (int i = 0; i < n ; i++){
		for (int j = 0; j < n ; j++){
			cin >> mat[i][j];
		}
	}
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			vet[j] = mat[i][j];
		}
			if(i % 2 == 0){
				Crecente(vet , n);
			}else{
				Decrescente(vet , n);
			}
			for (int k = 0; k < n; k++){
				mat[i][k] = vet[k];
			}
	}
	
	cout << endl;
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n;j++){
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	
	
	return 0;
}

