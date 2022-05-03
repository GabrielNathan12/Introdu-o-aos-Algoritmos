#include <iostream>

using namespace std;

int main(){
	int n, E ,  comparacoes = 0;
	cin >> n;
	int p = -1 , p1 = 0 , pf = n - 1 , meio;
	int vet[n];
	bool achou = false;
	
	for (int i = 0; i < n; i++){
		cin >> vet[i];
	}
	cin >> E;
	
	while(p1 <= pf){
		meio = (p1 + pf)/2;

		if(E == vet[meio]){
			p = meio;
			p1 = pf + 1;
		} else {
			if(E > vet[meio]){
				p1 = meio + 1;
			}else {
				pf = meio - 1;
			}
		}
		achou = true;
		comparacoes++;
	}
	
	cout << endl;
	if(!achou){
		cout << "-1" << endl << comparacoes;
	}else {
		cout << p << endl << comparacoes;
	}
		
	return 0;
}

