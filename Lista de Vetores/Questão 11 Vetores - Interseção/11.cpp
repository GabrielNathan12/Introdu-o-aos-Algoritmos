#include <iostream>

using namespace std;

int main(){
	int n , m , k = 0;
	cin >> n >> m;
	float vet1[n] , vet2[m];
	bool intersecao = false;
	
	for (int i = 0; i < n; i++){
		cin >> vet1[i];
	}
	for (int i = 0; i < m; i++){
		cin >> vet2[i];
	}
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if(vet2[j] == vet1[i] and !intersecao){
				intersecao = true;
				k++;
			}
		}
	}
	
	float Vet[k];
	k = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if(vet2[j] == vet1[i]){
				Vet[k] = vet2[j];
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

