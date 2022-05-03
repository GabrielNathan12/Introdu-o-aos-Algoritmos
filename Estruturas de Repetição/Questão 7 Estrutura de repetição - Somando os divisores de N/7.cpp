#include <iostream>

using namespace std;

int main(){
	int n , cont = 1 , soma = 0;
	cin >> n;
	//~ bool sinal = false;
	while (cont <= n){
		if(n % cont == 0){
			soma += cont ;
			cout << cont;
			if(cont < n){
				cout << "+";
			}
		}
		cont ++;
	}
	cout << "="<< soma ;
	return 0;
}

