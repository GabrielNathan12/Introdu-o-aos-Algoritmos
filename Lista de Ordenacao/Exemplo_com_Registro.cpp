#include <iostream>

using namespace std;

struct exemplo{
	string nome;
	int matricula;
	int nota;
};

void Ordena(exemplo vet[] , int n){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - i - 1; j++){
		  if(vet[j].nota > vet[j+1].nota){
				exemplo aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
			}
		}
	}
}

int main(){
	int n;
	cin >> n;
	exemplo vet[n];
	
	for (int i = 0; i < n; i++){
		cin >> vet[i].nome;
		cin >> vet[i].matricula;
		cin >> vet[i].nota;
	}
	
	Ordena(vet , n);
	cout << endl;
	
	for (int i = 0; i < n; i++){
		cout << vet[i].nome << " ";
		cout << vet[i].matricula << " ";
		cout << vet[i].nota << " " << endl;
	}
	
	return 0;
}

