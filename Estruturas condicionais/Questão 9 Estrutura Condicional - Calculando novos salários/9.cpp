#include <iostream>

using namespace std;

int main(){
	float salario , novoSalario;
	cin >> salario ;
	
	if (salario < 300){
		novoSalario = salario * 0.15;
		cout << novoSalario << endl;
		novoSalario += salario;
		cout << novoSalario ;
	}else if (salario > 300 and salario <= 600){
		novoSalario = salario * 0.10;
		cout << novoSalario << endl;
		novoSalario += salario;
		cout << novoSalario ;
	}else if (salario > 600 and salario <= 900){
		novoSalario = salario * 0.05;
		cout << novoSalario << endl;
		novoSalario += salario;
		cout << novoSalario ;
	}else if (salario > 900){
		novoSalario = salario ;
		cout << novoSalario ;
	}
	
	return 0;
}

