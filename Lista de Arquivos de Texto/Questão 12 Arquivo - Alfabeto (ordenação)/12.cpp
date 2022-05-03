#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream Arquivo1("entrada.txt");
	ofstream Arquivo2("saida.txt");
	
	if(Arquivo1){
		char vet[26];
		char aux;
		int cont = 0;
		while(Arquivo1 >> vet[cont]){
			cont++;
		}
		for (int i = 0; i < cont; i++){
			for (int j = 0; j < cont - i - 1; j++){
				if(vet[j] > vet[j+1]){
					aux = vet[j];
					vet[j] = vet[j+1];
					vet[j+1] = aux;
				}
			}
		}
		
		for (int i = 0; i < cont; i++){
			Arquivo2 << vet[i] << " ";
		}
		Arquivo1.close();
	}
	
	return 0;
}

