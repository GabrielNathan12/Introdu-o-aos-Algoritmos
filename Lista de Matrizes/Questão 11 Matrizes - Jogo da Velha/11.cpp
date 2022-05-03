#include <iostream>

using namespace std;

int main(){
	int mat[3][3];
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cin >> mat[i][j];
		}
	}
	if(mat[0][0] == 1 and mat[0][1] == 1 and mat[0][2] == 1){
		cout << "1";
	}else if(mat[1][0] == 1 and mat[1][1] == 1 and mat[1][2] == 1){
		cout << "1";
	}else if(mat[2][0] == 1 and mat[2][1] == 1 and mat[2][2] == 1){
		cout << "1";
	}else if(mat[0][0] == 1 and mat[1][0] == 1 and mat[2][0] == 1){
		cout << "1";
	}else if(mat[0][1] == 1 and mat[1][1] == 1 and mat[2][1] == 1){
		cout << "1";
	}else if(mat[0][2] == 1 and mat[1][2] == 1 and mat[2][2] == 1){
		cout << "1";
	}else if(mat[0][0] == 1 and mat[1][1] == 1 and mat[2][2] == 1){
		cout << "1";
	}else if(mat[0][2] == 1 and mat[1][1] == 1 and mat[2][0] == 1){
		cout << "1";
	}else if(mat[0][0] == 2 and mat[0][1] == 2 and mat[0][2] == 2){
		cout << "2";
	}else if(mat[1][0] == 2 and mat[1][1] == 2 and mat[1][2] == 2){
		cout << "2";
	}else if(mat[2][0] == 2 and mat[2][1] == 2 and mat[2][2] == 2){
		cout << "2";
	}else if(mat[0][0] == 2 and mat[1][0] == 2 and mat[2][0] == 2){
		cout << "2";
	}else if(mat[0][1] == 2 and mat[1][1] == 2 and mat[2][1] == 2){
		cout << "2";
	}else if(mat[0][2] == 2 and mat[1][2] == 2 and mat[2][2] == 2){
		cout << "2";
	}else if(mat[0][0] == 2 and mat[1][1] == 2 and mat[2][2] == 2){
		cout << "2";
	}else if(mat[0][2] == 2 and mat[1][1] == 2 and mat[2][0] == 2){
		cout << "2";
	}else {
		cout << "0";
	}
	
	return 0;
}

