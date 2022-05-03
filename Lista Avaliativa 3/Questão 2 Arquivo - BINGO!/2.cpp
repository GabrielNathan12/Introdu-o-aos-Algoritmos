#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int mat[5][5];
	int vet[10];
	
	ifstream ArqE("entrada.txt");
	
	if(ArqE){
		while(!ArqE.eof()){
			for (int i = 0; i < 5; i++){
				for (int j = 0; j < 5; j++){
					ArqE >> mat[i][j];
				}
			}
			for (int i = 0; i < 10; i++){
				ArqE >> vet[i];
			}
		}
		
		int linha1 = 0 , linha2 = 0 , linha3 = 0 , linha4 = 0 , linha5 = 0;
		int coluna1 = 0 , coluna2 = 0 , coluna3 = 0 , coluna4 = 0 , coluna5 = 0;
		int diagonalP = 0 , diagonalS = 0;
		
		for (int i = 0; i < 10; i++){
			if(mat[0][0] == vet[i]){
				linha1++;
			}
			if(mat[0][1] == vet[i]){
				linha1++;
			}
			if(mat[0][2] == vet[i]){
				linha1++;
			}
			if(mat[0][3] == vet[i]){
				linha1++;
			}
			if(mat[0][4] == vet[i]){
				linha1++;
			}
		}
		// Verifica a 1 linha
		//~ cout << linha1 << endl;
		
		for (int i = 0; i < 10; i++){
			if(mat[1][0] == vet[i]){
				linha2++;
			}
			if(mat[1][1] == vet[i]){
				linha2++;
			}
			if(mat[1][2] == vet[i]){
				linha2++;
			}
			if(mat[1][3] == vet[i]){
				linha2++;
			}
			if(mat[1][4] == vet[i]){
				linha2++;
			}
		}
		// Verifica a 2 linha
		//~ cout << linha2 << endl;
		
		for (int i = 0; i < 10; i++){
			if(mat[2][0] == vet[i]){
				linha3++;
			}
			if(mat[2][1] == vet[i]){
				linha3++;
			}
			if(mat[2][3] == vet[i]){
				linha3++;
			}
			if(mat[2][4] == vet[i]){
				linha3++;
			}
		}
		// Verifica a 3 linha
		//~ cout << linha3 << endl;
		
		for (int i = 0; i < 10; i++){
			if(mat[3][0] == vet[i]){
				linha4++;
			}
			if(mat[3][1] == vet[i]){
				linha4++;
			}
			if(mat[3][2] == vet[i]){
				linha4++;
			}
			if(mat[3][3] == vet[i]){
				linha4++;
			}
			if(mat[3][4] == vet[i]){
				linha4++;
			}
		}
		//Verifica a 4 linha
		//~ cout << linha4 << endl;
		
		for (int i = 0; i < 10; i++){
			if(mat[4][0] == vet[i]){
				linha5++;
			}
			if(mat[4][1] == vet[i]){
				linha5++;
			}
			if(mat[4][2] == vet[i]){
				linha5++;
			}
			if(mat[4][3] == vet[i]){
				linha5++;
			}
			if(mat[4][4] == vet[i]){
				linha5++;
			}
		}
		
		//Verifica a 5 linha
		
		//~ cout << linha5 << endl;
		
		for (int i = 0; i < 10; i++){
			if(mat[0][0] == vet[i]){
				coluna1++;
			}
			if(mat[1][0] == vet[i]){
				coluna1++;
			}
			if(mat[2][0] == vet[i]){
				coluna1++;
			}
			if(mat[3][0] == vet[i]){
				coluna1++;
			}
			if(mat[4][0] == vet[i]){
				coluna1++;
			}
		}
		//Verifica 1 coluna
		//~ cout << coluna1 << endl;
		
		for (int i = 0; i < 10; i++){
			if(mat[0][1] == vet[i]){
				coluna2++;
			}
			if(mat[1][1] == vet[i]){
				coluna2++;
			}
			if(mat[2][1] == vet[i]){
				coluna2++;
			}
			if(mat[3][1] == vet[i]){
				coluna2++;
			}
			if(mat[4][1] == vet[i]){
				coluna2++;
			}
		}
		
		//Verifica a 2 coluna
		//~ cout << coluna2 << endl;
		
		for (int i = 0; i < 10; i++){
			if(mat[0][2] == vet[i]){
				coluna3++;
			}
			if(mat[1][2] == vet[i]){
				coluna3++;
			}
			if(mat[3][2] == vet[i]){
				coluna3++;
			}
			if(mat[4][2] == vet[i]){
				coluna3++;
			}
		}
		
		//Verifica a 3 coluna
		//~ cout << coluna3 << endl;
		
		for (int i = 0; i < 10; i++){
			if(mat[0][3] == vet[i]){
				coluna4++;
			}
			if(mat[1][3] == vet[i]){
				coluna4++;
			}
			if(mat[2][3] == vet[i]){
				coluna4++;
			}
			if(mat[3][3] == vet[i]){
				coluna4++;
			}
			if(mat[4][3] == vet[i]){
				coluna4++;
			}
		}
		//Verifica a 4 coluna
		
		//~ cout << coluna4 << endl;
		
		for (int i = 0; i < 10; i++){
			if(mat[0][4] == vet[i]){
				coluna5++;
			}
			if(mat[1][4] == vet[i]){
				coluna5++;
			}
			if(mat[2][4] == vet[i]){
				coluna5++;
			}
			if(mat[3][4] == vet[i]){
				coluna5++;
			}
			if(mat[4][4] == vet[i]){
				coluna5++;
			}
		}
		
		//Verifica a 5 coluna
		
		//~ cout << coluna5 << endl;
		
		for (int i = 0; i < 10; i++){
			if(mat[0][0] == vet[i]){
				diagonalP++;
			}
			if(mat[1][1] == vet[i]){
				diagonalP++;
			}
			if(mat[2][2] == vet[i]){
				diagonalP++;
			}
			if(mat[3][3] == vet[i]){
				diagonalP++;
			}
			if(mat[4][4] == vet[i]){
				diagonalP++;
			}
		}
		
		//verifica a diagonal principal
		//~ cout << diagonalP << endl;
		
		for (int i = 0; i < 10; i++){
			if(mat[0][4] == vet[i]){
				diagonalS++;
			}
			if(mat[1][3] == vet[i]){
				diagonalS++;
			}
			if(mat[3][1] == vet[i]){
				diagonalS++;
			}
			if(mat[4][0] == vet[i]){
				diagonalS++;
			}
		}
		//Verifica a diagonal Secundaria
		//~ cout << diagonalS << endl;
		
		if(linha1 == 5 or linha2 == 5 or linha3 == 4 or linha4 == 5 or linha5 == 5){
			cout << "1";
		}else if(coluna1 == 5 or coluna2 == 5 or coluna3 == 4 or coluna4 == 5 or coluna5 == 5){
			cout << "2";
		}else if(diagonalP == 4){
			cout << "3";
		}else if(diagonalS == 4){
			cout << "4";
		}else{
			cout << "-1";
		}
		ArqE.close();
	}
	return 0;
}

