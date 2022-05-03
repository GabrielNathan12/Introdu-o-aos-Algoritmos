#include <iostream>

using namespace std;

int main(){
	float salario , gratificacao , imposto;
	cin >> salario ;
	
	gratificacao = salario * 0.05;
	imposto = salario * 0.07;
	
	cout << endl << salario + gratificacao - imposto;
	
	return 0;
}

