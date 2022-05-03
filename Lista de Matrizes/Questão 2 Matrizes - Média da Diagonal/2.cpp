#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	float mat[n][n] , soma = 0 , cont = 0;
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> mat[i][j];
		}
	}
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if(i == j){
				soma += mat[i][j];
				cont ++;
			}
		}
	}
	
	cout << soma / cont;
	
	return 0;
}

