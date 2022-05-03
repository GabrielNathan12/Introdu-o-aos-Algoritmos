#include <iostream>
#include <fstream>

using namespace std;

int main (){
	
	ifstream ArqE("entrada.txt");
	
	if(ArqE){
		int n, peao=2, c, l, cavalo=1;
		ArqE >> n;
		int mat[n][n];
		
		while(!ArqE.eof()){
			for (int i = 0; i < n; i++){
				for (int j = 0; j < n; j++){
					ArqE >> mat[i][j];
					if (mat[i][j]==cavalo){
						l=i;
						c=j;
					}
				}
			}
		}
		
		int qtd = 0;
		
		if (((l-2)>=0)&&((c+1)<n)){
			if (mat[l-2][c+1]==peao){
				qtd++;
			}
		}
		if (((l-2)>=0)&&((c-1)>=0)){
			if (mat[l-2][c-1]==peao){
				qtd++;
			}
		}if (((l-1)>=0)&&((c+2)<n)){
			if (mat[l-1][c+2]==peao){
				qtd++;
			}
		}if (((l-1)>=0)&&((c-2)>=0)){
			if (mat[l-1][c-2]==peao){
				qtd++;
			}
		}if (((l+1)<n)&&((c-2)>=0)){
			if (mat[l+1][c-2]==peao){
				qtd++;
			}
		}if (((l+1)<n)&&((c+2)<n)){
			if (mat[l+1][c+2]==peao){
				qtd++;
			}
		}
		if (((l+2)<n)&&((c+1)<n)){
			if (mat[l+2][c+1]==peao){
				qtd++;
			}
		}if (((l+2)<n)&&((c-1)>=0)){
			if (mat[l+2][c-1]==peao){
				qtd++;
			}
		}
		cout << endl;
		cout<<qtd<<endl;
		ArqE.close();
	}
	return 0;
}
