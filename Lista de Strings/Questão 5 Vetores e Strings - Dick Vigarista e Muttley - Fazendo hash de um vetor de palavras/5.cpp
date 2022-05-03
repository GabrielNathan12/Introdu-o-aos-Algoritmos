#include <iostream>

using namespace std;

int main(){
	int n , soma = 0;
	cin >> n;
	
	string palavra[n];
	
	for (int i = 0; i < n; i++){
		cin >> palavra[i];
	}
	
	const int UMPRIMO = 13;
	const int M = 10;
	long hash = 0;
		
	for (int i = 0; i < n; i++){
		for (unsigned j = 0; j < palavra[i].size(); j++) {
			hash = (UMPRIMO * hash + palavra[i][j]) % M;
		}
		soma += hash;
		cout << hash << " ";
		hash = 0;
	}
	
	cout << soma ;
	return 0;
}

