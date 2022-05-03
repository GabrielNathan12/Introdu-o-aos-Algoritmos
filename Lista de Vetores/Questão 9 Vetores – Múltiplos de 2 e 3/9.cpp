#include <iostream>

using namespace std;

int main(){
	int vet[7]; 
	bool entrou = false;
	
	for (int i = 0; i < 7; i++){
		cin >> vet[i];
	}
	
	for (int i = 0; i < 7; i++){
		if (vet[i] % 2 == 0){
			cout << vet[i] << " ";
			entrou = true;
		}
	}
	if (!entrou){
		cout << "0";
	}
	cout << endl;
	
	entrou = false;
	
	for (int i = 0; i < 7; i++){
		if (vet[i] % 3 == 0){
			cout << vet[i] << " ";
			entrou = true;
		}
	}
	if (!entrou){
		cout << "0";
	}
	cout << endl;

	entrou = false;

	for (int i = 0; i < 7; i++){
		if (vet[i] % 6 == 0 ){
			cout << vet[i] << " ";
			entrou = true;
		}
	}
	
	if (!entrou){
		cout << "0";
	}
	
	return 0;
}

