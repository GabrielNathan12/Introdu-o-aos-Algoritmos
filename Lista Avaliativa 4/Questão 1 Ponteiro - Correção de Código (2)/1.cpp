#include <iostream>

using namespace std;
// CORRIJA -> registro composto de um campo inteiro e um ponteiro para um outro registro do mesmo tipo
// Corrigido
struct noh{
	int dado;
	noh* prox;
};

int main() {
	int i, total, soma=0;
	int ptrV[5] = {5,4,3,2,1};
	
	// CORRIJA -> aloca um vetor de registro dinamicamente
	// Corrigido
	noh* vetor = new noh[5];
	i=0;
	
	while(i < 5) {
		vetor[i].dado = ptrV[i];
		soma+=vetor[i].dado;
		if (i != 4){
			vetor[i].prox = &vetor[i+1];
		}else{
			vetor[i].prox = nullptr;
		}
		 i++;
	}
	
	//CORRIJA -> atribui o dobro de soma ao valor apontado por ptrValor 
	//(não é permitido usar soma diretamente)
	// Corrigido
	int *ptrValor = &total;
	*ptrValor = soma * 2;
	
	
	// CORRIJA -> imprime o  valor apontado por prox em cada posição e o valor de total (indiretamente)
	// (note: imprime valor apontado, não o endereço).
	// Se não for possível imprimir o valor apontado por prox, imprima 0
	// Corrigido
	for (int i = 0; i < 5; i++){
		if(vetor[i].prox != nullptr){
			cout << vetor[i].prox-> dado << " " << *ptrValor << endl;
		} else {
			cout << "0" << " " << *ptrValor << endl;
		}
	}
	
	// CORRIJA -> desaloca objetos alocados dinamicamente 
	// (apenas objetos alocados dinamicamente devem ser desalocados)
	// Corrigido
	
	delete[] ptrValor;
	delete[] vetor;
	
	ptrValor = nullptr;
	vetor = nullptr;
	return 0;
}

