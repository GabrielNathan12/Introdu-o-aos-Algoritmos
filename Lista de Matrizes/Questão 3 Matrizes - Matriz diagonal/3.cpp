#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream arquivo("matriz.txt");
	bool diagonal = false;
	int n;
	
	if(arquivo){
		arquivo >> n;
		float mat[n][n];
		
		while(!arquivo.eof()){
			for (int i = 0; i < n; i++){
				for (int j = 0; j < n; j++){
					arquivo >> mat[i][j];
				}
			}
		}
		
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				if(i != j){
					if(mat[i][j]){
						diagonal = true;
					}
				}
			}
		}
		
		if(!diagonal){
			cout << "diagonal";
		}else{
			cout << "nao diagonal";
		}
	}
	
	return 0;
}

