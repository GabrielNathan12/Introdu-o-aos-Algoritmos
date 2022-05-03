#include <iostream>

using namespace std;

int main(){
	int vet[20];
	double maior;
	for (int i = 0; i < 20; i++){
		cin >> vet[i];
		
		if(i == 0){
			maior = vet[i];
		}
		if(vet[i] > maior){
			maior = vet[i];
		}
	}
	
	cout << endl;
	
	for (int i = 0; i < 20; i++){
		cout << double(vet[i]/maior) << " ";
	}

	return 0;
}

