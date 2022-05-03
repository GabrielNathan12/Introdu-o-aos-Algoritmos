#include <iostream>

using namespace std;

struct Pessoa{
	string nome;
	float altura;
	float peso;
	char sexo;
	float IMC;
};

int main(){
	int n;
	cin >> n;
	Pessoa pessoa[n];
	float IMCMedio = 0;
	
	for (int i = 0; i < n; i++){
		cin >> pessoa[i].nome;
		cin >> pessoa[i].altura;
		cin >> pessoa[i].peso;
		cin >> pessoa[i].sexo;
		pessoa[i].IMC = pessoa[i].peso / (pessoa[i].altura *  pessoa[i].altura);
	}
	
	char S;
	cin >> S;
	int cont = 0;
	float soma = 0;
	cout << endl;
	
	for (int i = 0; i < n; i++){
		if(S == pessoa[i].sexo){
			cont++;
			soma += pessoa[i].IMC;
		}
	}
	
	IMCMedio = soma / cont;
	cout << endl; 
	
	for (int i = 0; i < n; i++){
		if(pessoa[i].IMC > IMCMedio and S == pessoa[i].sexo){
			cout << pessoa[i].nome << " ";
		}
	}
	return 0;
}

