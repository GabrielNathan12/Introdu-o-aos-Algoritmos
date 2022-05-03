#include <iostream>

using namespace std;

int main(){
	float vet[10] , neg = 0 , soma = 0;
	
	for (int i = 0; i < 10; i++){
		cin >> vet[i];
	}
	
	for (int i = 0; i < 10; i++){
		if(vet[i] <0){
			neg++;
		}
	}
	
	for (int i = 0; i < 10; i++){
		if(vet[i] > 0){
			soma += vet[i];
		}
	}
	
	cout << neg << endl << soma ;
	
	return 0;
}

