#include <iostream>
#include <fstream>

using namespace std;

int main(){
	string vet[100];
	string nomeArquivo;
	cin >> nomeArquivo;

	ifstream arqE(nomeArquivo.c_str());
	ofstream arqS("cifrado");

	int cont = 0;

	if(arqE and arqS){
		while(getline(arqE, vet[cont])){
			cont++;
		}

		for (int i = 0; i < cont; i++){
			for (unsigned j = 0; j < vet[i].size(); j++){
				if(vet[i][j] >= 'A' and vet[i][j] <= 'W'){
					vet[i][j] += 3;
				} else if(vet[i][j] >= 'X' and vet[i][j] <= 'Z'){
					vet[i][j] -= 23;
				}
			}
		}

		for (int i = 0; i < cont; i++){
			arqS << vet[i] << endl;
		}

		arqE.close();
		arqS.close();
	}

	return 0;
}
