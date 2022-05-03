#include <iostream>

using namespace std;

int main(){
	int n , m , k = 0;
	cin >> n;
	float vet1[n];
	bool intersecao = false;
	
	for (int i = 0; i < n; i++){
		cin >> vet1[i];
	}
	cin >> m;
	float vet2[m];
	for (int i = 0; i < m; i++){
		cin >> vet2[i];
	}
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if(vet2[i] != vet1[j] and !intersecao){
				intersecao = true;
				k++;
			}
		}
	}
	
	float Vet[k];
	k = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if(vet2[i] != vet1[j]){
				Vet[k] = vet2[i];
				cout << Vet[k] << " ";
				k++;
			}
		}
	}
	if(!intersecao){
		cout << "-1";
	}
	
	
	return 0;
}

