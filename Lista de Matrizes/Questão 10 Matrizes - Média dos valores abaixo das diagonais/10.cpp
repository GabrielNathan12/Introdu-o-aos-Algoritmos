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
	
	float somaP = 0 , contP = 0, somaS = 0 , contS = 0;
	
	cout << endl ;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if(i >= j){
				somaP += mat[i][j];
				contP++;
			}
			if(j >=  n - i - 1){
				somaS += mat[i][j];
				contS++;
			}
		}
	}
	
	cout << somaP / contP << endl << somaS / contS;
	
	return 0;
}

