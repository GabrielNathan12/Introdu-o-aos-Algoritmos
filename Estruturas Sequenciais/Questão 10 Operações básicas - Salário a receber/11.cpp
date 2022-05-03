#include <iostream>

using namespace std;

int main(){
	float salario , horaTra , salarioBruto , imposto , total;
	int horas;
	
	cin >> salario >> horas;
	
	horaTra = salario * 0.05;
	salarioBruto = horaTra * horas;
	imposto = salarioBruto * 0.23;
	
	total = salarioBruto - imposto ;
	
	cout << endl << total;
	
	return 0;
}

