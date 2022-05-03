#include <iostream>

using namespace std;

int main(){
	int n , maior = 0, menor , centro , j;
	cin >> n;
	float vet[n];
	bool central = false , M = false , m = false;
	
	for (int i = 0; i < n; i++){
		cin >> vet[i];
	}
	
	for (int i = 0; i < n; i++){
		if(vet[i] > maior){
			maior = vet[i];
			cout << i << " ";
		}
		
		j = i;
		if(vet[j] < menor){
			menor = vet[i];
		}
	}
	
	//~ cout << endl;
	//~ cout << maior << endl;
	//~ cout << menor << " "<< y << endl;
	
	return 0;
}

