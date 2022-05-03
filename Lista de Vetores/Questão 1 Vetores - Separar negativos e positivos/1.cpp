#include <iostream>

using namespace std;

int main(){
	int vet[8] , posi, neg;
	
	for (int i = 0; i < 8; i++){
		cin >> vet[i];
	}
	
	for (int i = 0; i < 8; i++){
		if(vet[i] > 0){
			posi = vet[i];
			cout << posi << " ";
		}
	}
	cout << endl;
	
	for (int i = 0; i < 8; i++){
		if(vet[i] < 0){
			neg = vet[i];
			cout << neg << " ";
		}
	}
	
	
	return 0;
}

