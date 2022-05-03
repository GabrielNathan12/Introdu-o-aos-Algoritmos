#include <iostream>

using namespace std;

struct sabre{
	string cristal;
	string cor;
};

struct jedi{
	string nome;
	string posicao;
	sabre espada;
};

int main(){
	int n;
	
	cin >> n;
	
	jedi guerreiros[n];
	
	for (int i = 0; i < n; i++){
		cin >> guerreiros[i].nome
			>> guerreiros[i].posicao
			>> guerreiros[i].espada.cristal
			>> guerreiros[i].espada.cor;
	}
	
	string corBusca, hierarquia[3];
	hierarquia[0] = guerreiros[0].posicao;
	
	for (int i = 1; i < n; i++){
		if (hierarquia[0] != guerreiros[i].posicao){
			hierarquia[1] = guerreiros[i].posicao;
		}
	}
	
	for (int i = 2; i < n; i++){
		if ((hierarquia[0] != guerreiros[i].posicao) and (hierarquia[1] != guerreiros[i].posicao)){
			hierarquia[2] = guerreiros[i].posicao;
		}
	}
	
	cin >> corBusca;
	
	int qtd1 = 0, qtd2 = 0, qtd3 = 0;
	
	for (int i = 0; i < n; i++){
		if ((corBusca == guerreiros[i].espada.cor) and (guerreiros[i].posicao == hierarquia[0])){
			qtd1++;
		} else if ((corBusca == guerreiros[i].espada.cor) and (guerreiros[i].posicao == hierarquia[1])){
			qtd2++;
		} else if ((corBusca == guerreiros[i].espada.cor) and (guerreiros[i].posicao == hierarquia[2])){
			qtd3++;
		}
	}
	
	cout << hierarquia[0] << " " <<qtd1 << endl
		 << hierarquia[1] << " " <<qtd2 << endl
		 << hierarquia[2] << " " <<qtd3 << endl;
	
	return 0;
}
