#include <iostream>

using namespace std;

void Maior(int n[]){
	int maior = 0;
	for (int i = 0; i < 5; i++){
		if(n[i] >= maior){
			maior = n[i];
		}
	}
	cout << endl << maior;
}

int main(){
	int n[5];
	cout << endl;
	for (int i = 0; i < 5; i++){
		cin >> n[i];
	}
	for (int i = 0; i < 5; i++){
		cout << n[i] << " ";
	}
	Maior(n);
	return 0;
}

