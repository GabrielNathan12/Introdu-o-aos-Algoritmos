#include <iostream>

using namespace std;


int main(){
	int n , parada = 1;;
	cin >> n;
	
	int vet[n] , j = (n-1);
	
	for (int i = 0; i < n; i++){
		cin >> vet[i];
	}
	
	for (int i = 0; i < n; i++){
		if(vet[i] != vet[j]){
			parada = 0;
		}
		j --;
	}
	
	cout << parada;
	return 0;
}

