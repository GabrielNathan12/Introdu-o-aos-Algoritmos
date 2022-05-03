#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream arquivoP ("palavras.txt");
	ifstream arquivoN ("numeros.txt");
	ofstream arquivoF ("frase.txt");

	if(arquivoP and arquivoN and arquivoF){
		string vet[50];
		int tam = 0;
		int n;

		while(!arquivoP.eof()){
			arquivoP >> vet[tam];
			tam++;
		}
		while(!arquivoN.eof()){
			arquivoN >> n;

			arquivoF << vet[n-1] << " ";
		}
	}

	arquivoP.close();
	arquivoN.close();
	arquivoF.close();

	return 0;
}
