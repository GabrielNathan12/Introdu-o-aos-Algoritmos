#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int mat[n][n];
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> mat[i][j];
		}
	}
	
	int menor = 99999;
	int k = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if(mat[i][j] < menor){
				menor = mat[i][j];
				k = i;
			}
		}
	}
	
	cout << k;
	return 0;
}

