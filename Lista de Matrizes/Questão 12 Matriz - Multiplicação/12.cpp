#include <iostream>

using namespace std;

int main(){
	int n , m;
	cin >> n >> m;
	float mat[n][m];
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> mat[i][j];
		}
	}
	
	float a , b , soma = 0;
	cin >> a >> b;
	
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				if(i % 2 == 0){
					mat[i][j] *= a;
				}
			}
		}
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				if(j % 2 == 1){
					mat[i][j] *= b;
				}
			}
		}
		
	for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				soma += mat[i][j];
			}
		}
	
	cout << endl ;
	cout << soma;
	
	return 0;
}


