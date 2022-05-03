#include <iostream>

using namespace std;

struct competicao{
	string nome;
	int pontos;
	int vitorias;
	int gols;
};

void Ordenar(competicao torneio[],int n);


void Ordenar(competicao torneio[], int n){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n-i-1; j++){
			if(torneio[j].pontos < torneio[j+1].pontos){
				competicao aux = torneio[j];
				torneio[j] = torneio[j + 1];
				torneio[j + 1] = aux;
			}
			if(torneio[j].pontos == torneio[j+1].pontos){
				if (torneio[j].vitorias < torneio[j+1].vitorias){
					competicao aux = torneio[j];
					torneio[j] = torneio[j+1];
					torneio[j+1] = aux;
				}
			}
			if (torneio[j].vitorias == torneio[j+1].vitorias){
				if (torneio[j].gols < torneio[j+1].gols){
					competicao aux = torneio[j];
					torneio[j] = torneio[j+1];
					torneio[j+1] = aux;
				}
			}
		}
	}
}

int main(){
	int n;

	cin >> n;

	competicao torneio[n];

	for (int i = 0; i < n; i++){
		cin >> torneio[i].nome;
		cin >> torneio[i].pontos;
		cin >> torneio[i].vitorias;
		cin >> torneio[i].gols;
	}

	cout << endl;

	Ordenar(torneio, n);

	for (int i = 0; i < n; i++){
		cout << torneio[i].nome << " "
			 << torneio[i].pontos << " "
			 << torneio[i].vitorias << " "
			 << torneio[i].gols << " " << endl;
	}

	return 0;
}
