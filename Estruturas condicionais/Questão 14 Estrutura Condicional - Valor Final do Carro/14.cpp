#include <iostream>

using namespace std;

int main(){
	float preco , concessionaria , imposto , aux;
	cin >> preco;
	
	if (preco <= 20000){
		concessionaria = preco * 0.05;
		concessionaria += preco;
		cout << concessionaria;
	}else if ( preco > 20000 and preco <= 40000){
		concessionaria = preco * 0.10;
		aux = concessionaria * 0.30;
		imposto = preco * 0.30;
		imposto += preco + concessionaria + aux;
		cout << imposto;
	}else if(preco > 40000){
		concessionaria = preco * 0.15;
		aux = concessionaria * 0.40;
		imposto = preco * 0.45;
		imposto += preco + concessionaria + aux;
		cout << imposto;
	}
	
	return 0;
}

