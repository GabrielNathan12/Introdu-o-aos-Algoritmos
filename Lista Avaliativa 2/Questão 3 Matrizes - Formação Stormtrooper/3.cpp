#include <iostream>

using namespace std;

int main(){
	int meio;
	cin >> meio;
	
	int mat[meio/2][meio/2];
	
	int m = 0;
	int n = 0;
	int k = 1, cont = 0;
	
	while (m < meio){
		int aux = 0;
		n = 0;
		while (n <= m){
			aux++;
			mat[m][n] = k;
			k++;
			n++;
			if (k == meio){
				cont++;
			}
		}
		if(cont == 1){
			for (int i = 0; i < aux; i++){
				cout << mat[aux-1][i];
				if (i+1 < aux){
					cout << "--";
				}
				m = meio;
			}
		}
		m++;
	}
	
	return 0;
}
