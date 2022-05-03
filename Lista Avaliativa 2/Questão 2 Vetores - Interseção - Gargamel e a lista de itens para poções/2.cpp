#include <iostream>

using namespace std;

int main(){
	int n , m;
	cin >> n;
	bool achou = false;
	string palavra1[n];
	
	for (int i = 0; i < n; i++){
		cin >> palavra1[i];
	}
	
	cin >> m;
	string palavra2[m];
	
	for (int i = 0; i < m; i++){
		cin >> palavra2[i];
	}
	
	cout << endl;
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if(palavra1[i] == palavra2[j]){
				cout << palavra1[i] << endl;
				achou = true;
			}
		}
	}
	
	if(!achou){
		cout << "NADA";
	}
	
	return 0;
}

