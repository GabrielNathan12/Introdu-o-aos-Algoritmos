#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	float vet[n];
	
	for (int i = 0; i < n; i++){
		cin >> vet[i];
	}
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - i - 1; j++){
			if(vet[j] > vet[j + 1]){
				swap(vet[j] , vet[j + 1]);
			}
		}
		
	}
	
	for (int i = 0; i < n; i++){
		cout << vet[i] << " ";
	}
	
	return 0;
}

