#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	char vet[n] , C1 , C2;
	
	for (int i = 0; i < n; i++){
		cin >> vet[i];
	}

	cin >> C1 >> C2;

	if(C2 < C1){
		char aux = C1;
		C1 = C2;
		C2 = aux;
	}

	for (int i = 0; i < n; i++){
		if(vet[i] > C1 and vet[i] < C2){
			cout << vet[i] << " ";
		}
	}

	return 0;
}

