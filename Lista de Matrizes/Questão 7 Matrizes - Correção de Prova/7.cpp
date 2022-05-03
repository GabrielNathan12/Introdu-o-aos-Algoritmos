#include <iostream>

using namespace std;

int main(){
	int n , m , certos = 0;
	cin >> n >> m;
	
	char prov[n][m] , gab[n][m];
	bool verifica = true;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> prov[i][j];
		}
	}
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> gab[i][j];
		}
	}
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if(prov[i][j] != gab[i][j]){
				verifica = false;
			}
		}
		if(verifica){
			certos++;
		}
		verifica = true;
	}
	
	cout << certos;
	return 0;
}

