#include <iostream>

using namespace std;

struct Visitante{
	string nome;
	string nomeCesta;
};

struct Cesta{
	string NomeCesta;
	int quant;
};

int main(){
	int n , soma = 0;
	cin >> n;
	Cesta cestas[n];
	
	for (int i = 0; i < n; i++){
		cin >> cestas[i].NomeCesta;
		cin >> cestas[i].quant;
	}
	
	int m;
	cin >> m;
	Visitante pessoa[m];
	
	for (int i = 0; i < m; i++){
		cin >> pessoa[i].nome;
		cin >> pessoa[i].nomeCesta;
	}
	
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if(cestas[i].NomeCesta == pessoa[j].nomeCesta){
				soma += cestas[i].quant;
			}
		}
	}
	
	cout << endl;
	cout << soma ;
	return 0;
}

