#include <iostream>

using namespace std;

int main(){
	int cod;
	float salario , aux;
	cin >> cod >> salario ;
	
	cout << endl;
	if(cod == 1){
		aux = salario * 0.50;
		cout << "Escriturario" << endl << aux << endl;
		aux += salario;
		cout << aux;
	}else if ( cod == 2 ){
		aux = salario * 0.35;
		cout << "Secretario" << endl << aux << endl;
		aux += salario;
		cout << aux;
	}else if(cod == 3){
		aux = salario * 0.20;
		cout << "Caixa" << endl << aux << endl;
		aux += salario;
		cout << aux;
	}else if (cod == 4){
		aux = salario * 0.10;
		cout << "Gerente" << endl << aux << endl;
		aux += salario;
		cout << aux;
	}else if(cod == 5){
		cout << "Diretor" << endl << "0" << endl << salario;
	}
	return 0;
}

