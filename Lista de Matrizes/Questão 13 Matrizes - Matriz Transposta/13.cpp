#include <iostream>

using namespace std;

int main(){
	int n , m;
	cin >> n >> m;
	int mat[n][m];
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> mat[i][j];
		}
	}
	
	cout << endl;
	
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cout << mat[j][i] << " ";
		}
		cout << endl;
	}
	
	return 0;
}

