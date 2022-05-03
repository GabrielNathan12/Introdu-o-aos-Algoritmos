#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	char Busca[n] , A;
	bool achou = false;
	
	for (int i = 0; i < n; i++){
		cin >> Busca[i];
	}
	cin >> A;
	for (int i = 0; i < n; i++){
		if(Busca[i] == A){
			cout << i << " ";
			achou = true;
		}
	}
	
	if(!achou){
		cout << "-1";
	}
	
	return 0;
}

