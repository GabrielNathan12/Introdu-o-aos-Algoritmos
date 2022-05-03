#include <iostream>

using namespace std;

struct aluno {
	int id;
	int matricula;
};


int main(){
	int n;
	cin >> n;
	aluno cadastro[n];
	
	for (int i = 0; i < n; i++){
		cin >> cadastro[i].id;
		cin >> cadastro[i].matricula;
	}
	
	int idsParaBusca[4];
	
	for (int i = 0; i < 4; i++){
		cin >> idsParaBusca[i];
	}
	
	
	int aux;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - i - 1; j++){
			if(cadastro[j].id > cadastro[j+1].id){
				aux = cadastro[j].id;
				cadastro[j].id = cadastro[j+1].id;
				cadastro[j+1].id = aux;
			}
		}
	}
	
	cout << endl;
	
	for (int i = 0; i < n; i++){
		cout << cadastro[i].id << " ";
	}
	cout << endl;
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < 4; j++){
			if(idsParaBusca[j] == cadastro[i].id){
				cout << cadastro[i].matricula << endl;
			}
		}
	}
	
	return 0;
}

