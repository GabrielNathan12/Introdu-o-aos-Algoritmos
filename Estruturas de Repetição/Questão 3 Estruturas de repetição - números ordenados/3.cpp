#include <iostream>

using namespace std;

int main(){
	int n, i = 0, anterior;
	bool ordenado = true;

	cin >> n;

	anterior = n;

	while (i < 4){
		cin >> n;

		if(n > anterior and ordenado){
			anterior = n;
		} else {
			ordenado = false;
		}
		i++;
	}

	cout << ordenado;
	
	return 0;
}

