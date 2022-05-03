#include <iostream>

using namespace std;

int main(){
	int n ;
	cin >> n;
	char vet[n];
	bool achou = false;
	for (int i = 0; i < n; i++){
		cin >> vet[i];
	}
	char x;
	cin >> x;
	
	for (int i = 0; i < n; i++){
		if(vet[i] == x){
			achou = true;
			cout << i << " ";
		}
	}
	if(!achou){
		cout << "-1";
	}
		
	return 0;
}

