#include <iostream>

using namespace std;

int main (){
	int l, c;
	cin >> l >> c;
	int matriz[l][c];
	
	for (int i = 0; i < l; i++){
		for (int j = 0; j < c; j++){
			cin>>matriz[i][j];
		}
	}
	
	int i = 0, j = 0;
	while (i < l){
		j = 0;
		while (j < c){
			cout << matriz[i][j] <<" ";
			j++;
		}
		i++;
		j = (c + 1);
		if (i < l){
			while (j >= 0){
				cout << matriz[i][j]<<" ";
				j--;
			}
			i++;
		}
	}
	return 0;
}
