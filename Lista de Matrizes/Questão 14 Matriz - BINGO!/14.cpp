#include <iostream>

using namespace std;

int main(){
	int mat[5][5];
	
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			cin >> mat[i][j];
		}
	}
	//linha
	cout << endl;
	
	if(mat[0][0] == 1 and mat[0][1] and mat[0][2] and mat[0][3] and mat[0][4]){
		cout << "1";
	}else if(mat[1][0] == 1 and mat[1][1] and mat[1][2] and mat[1][3] and mat[1][4]){
		cout << "1";
	}else if(mat[2][0] == 1 and mat[2][1] and mat[2][2] and mat[2][3] and mat[2][4]){
		cout << "1";
	}else if(mat[3][0] == 1 and mat[3][1] and mat[3][2] and mat[3][3] and mat[3][4]){
		cout << "1";
	}else if(mat[4][0] == 1 and mat[4][1] and mat[4][2] and mat[4][3] and mat[4][4]){
		cout << "1";
	}//coluna
	else if(mat[0][0] == 1 and mat[1][0] and mat[2][0] and mat[3][0] and mat[4][0]){
		cout << "2";
	}else if(mat[0][1] == 1 and mat[1][1] and mat[2][1] and mat[3][1] and mat[4][1]){
		cout << "2";
	}else if(mat[0][2] == 1 and mat[1][2] and mat[2][2] and mat[3][2] and mat[4][2]){
		cout << "2";
	}else if(mat[0][3] == 1 and mat[1][3] and mat[2][3] and mat[3][3] and mat[4][3]){
		cout << "2";
	}else if(mat[0][4] == 1 and mat[1][4] and mat[2][4] and mat[3][4] and mat[4][4]){
		cout << "2";
	}//diagonal principal
	else if(mat[0][0] == 1 and mat[1][1] and mat[2][2] and mat[3][3] and mat[4][4]){
		cout << "3";
	} // diagonal secundaria
	else if(mat[0][4] == 1 and mat[1][3] and mat[2][2] and mat[3][1] and mat[4][0]){
		cout << "4";
	}else{
		cout << "-1";
	}
	return 0;
}

