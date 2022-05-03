#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	float vet[n], diferenca, media, soma = 0;
	
	for (int i = 0; i < n; i++){
		cin >> vet[i];
		soma += vet[i];
	}
	
	media = soma/n;
	cin >> diferenca;
	
	cout << endl << media << endl;
	
	for (int i = 0; i < n; i++){
		if(media - vet[i] < 0){
			cout << (media - vet[i]) * -1 << " ";
		} else {
			cout << media - vet[i] << " ";
		}
	}
	
	cout << endl;
	
	for (int i = 0; i < n; i++){
		if(media - vet[i] < 0){
			if((media - vet[i])*-1 <= diferenca){
				cout << vet[i] << " ";
			}
		} else {
			if(media - vet[i] <= diferenca){
				cout << vet[i] << " ";
			}
		}
	}
	

	return 0;
}

