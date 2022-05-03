#include <iostream>

using namespace std;

int main(){
	int quantI , n , cont = 1;
	bool achou = false;
	int premiado = 0;

	cin >> quantI;

	while(cont <= quantI){
		cin >> n;

		if(cont == n and !achou){
			achou = true;
			premiado = cont;
		}
		cont++;
	}
	cout << premiado;

	return 0;
}

