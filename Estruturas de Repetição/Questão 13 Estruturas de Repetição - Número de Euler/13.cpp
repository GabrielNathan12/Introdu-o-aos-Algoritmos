#include <iostream>

using namespace std;

int main(){
	int n , i = 1, cont = 1;
	double fat = 1, soma = 0;

	cin >> n;
	
	while(i <= n){
		while(cont < i){
			fat *= cont;
			cont++;
		}
		soma += 1.0/fat;
		i++;
	}
	cout << soma;
	return 0;
}

