#include <iostream>
#include <fstream>

using namespace std;

int main(){
	bool entrou = false;

	ifstream arqE("entrada.txt");
	ofstream arqS("saida.txt");

	if(arqE){
		int mat[8][8];
		int peao = 0;

		while(not arqE.eof()){
			for (int i = 0; i < 8; i++){
				for (int j = 0; j < 8; j++){
					arqE >> mat[i][j];
				}
			}
		}

		for (int i = 0; i < 8; i++){
			for (int j = 0; j < 8; j++){
				if(mat[i][j] == 1 and i != 0 and j != 0 and i!= 7 and j != 7 and !entrou){
					if (mat[i-1][j-1] == 2)
						peao++;
					if (mat[i-1][j] == 2)
						peao++;
					if (mat[i-1][j+1] == 2)
						peao++;
					if (mat[i][j+1] == 2)
						peao++;
					if (mat[i+1][j+1] == 2)
						peao++;
					if (mat[i+1][j] == 2)
						peao++;
					if (mat[i+1][j-1] == 2)
						peao++;
					if (mat[i][j-1] == 2)
						peao++;

					entrou = true;

					//cout << "Meio da matriz: " << peao;
				}
				if((mat[i][0] == 1 or mat[i][7] == 1 or mat[0][j] == 1 or mat[7][j] == 1) and not entrou){
					if (mat[i][0] == 1 and (i != 0 or i != 7)){ //Primeira coluna sem os cantos
						if (mat[i-1][0] == 2)
							peao++;
						if (mat[i-1][1] == 2)
							peao++;
						if (mat[i][1] == 2)
							peao++;
						if (mat[i+1][1] == 2)
							peao++;
						if (mat[i+1][0] == 2)
							peao++;

						entrou = true;

						//cout << "Primeira coluna sem os cantos: " << peao;
					} else if (mat[i][7] == 1 and (i != 0 or i != 7)){ //Última coluna sem os cantos
						if (mat[i-1][7] == 2)
							peao++;
						if (mat[i-1][6] == 2)
							peao++;
						if (mat[i][6] == 2)
							peao++;
						if (mat[i+1][6] == 2)
							peao++;
						if (mat[i+1][7] == 2)
							peao++;

						entrou = true;
						//cout << "Última coluna sem os cantos: " << peao;
					} else if (mat[0][j] == 1 and (j != 0 or j != 7)){ //Primeira linha sem os cantos
						if (mat[0][j-1] == 2)
							peao++;
						if (mat[1][j-1] == 2)
							peao++;
						if (mat[1][j] == 2)
							peao++;
						if (mat[1][j+1] == 2)
							peao++;
						if (mat[i+1][7] == 2)
							peao++;
						
						entrou = true;
						//cout << "Primeira linha sem os cantos: " << peao;
					} else if (mat[7][j] == 1 and (j != 0 or j != 7)){ //Última linha sem os cantos
						if (mat[7][j-1] == 2)
							peao++;
						if (mat[6][j-1] == 2)
							peao++;
						if (mat[6][j] == 2)
							peao++;
						if (mat[6][j+1] == 2)
							peao++;
						if (mat[7][j+1] == 2)
							peao++;

						entrou = true;

						//cout << "Última linha sem os cantos: " << peao;
					}
				}
			}
		}

		if(not entrou){
			if (mat[0][0] == 1){ //canto superior esquerdo
				if(mat[0][1] == 2 or mat[1][0] == 2 or mat[1][1] == 2){
					peao++;
				}
				//cout << "canto superior esquerdo: " << peao;
			} else if (mat[0][7] == 1){ //canto superior direito
				if(mat[0][6] == 2 or mat[1][6] == 2 or mat[1][7] == 2){
					peao++;
				}
				//cout << "canto superior direito: " << peao;
			} else if (mat[7][0] == 1){ //canto inferior esquerdo
				if(mat[6][0] == 2 or mat[6][1] == 2 or mat[7][1] == 2){
					peao++;
				}
				//cout << "canto inferior esquerdo: " << peao;
			} else if (mat[7][7] == 1){ //canto inferior direito
				if(mat[6][7] == 2 or mat[6][6] == 2 or mat[7][6] == 2){
					peao++;
				}
				//cout << "canto inferior direito: " << peao;
			}
		}

		arqS << peao;

		arqE.close();
		arqS.close();
	}

	return 0;
}
