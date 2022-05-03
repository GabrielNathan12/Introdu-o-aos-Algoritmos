#include <iostream>

using namespace std;

int main (){
	int n, peao=2, c, l, cavalo=1;
	cin>>n;
	int xadrez[n][n];
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin>>xadrez[i][j];
			if (xadrez[i][j]==cavalo){
				l=i;
				c=j;
			}
		}
	}
	
	int qtd=0;
	
	if (((l-2)>=0)&&((c+1)<n)){
		if (xadrez[l-2][c+1]==peao){
			qtd++;
		}
	}
	if (((l-2)>=0)&&((c-1)>=0)){
		if (xadrez[l-2][c-1]==peao){
			qtd++;
		}
	}if (((l-1)>=0)&&((c+2)<n)){
		if (xadrez[l-1][c+2]==peao){
			qtd++;
		}
	}if (((l-1)>=0)&&((c-2)>=0)){
		if (xadrez[l-1][c-2]==peao){
			qtd++;
		}
	}if (((l+1)<n)&&((c-2)>=0)){
		if (xadrez[l+1][c-2]==peao){
			qtd++;
		}
	}if (((l+1)<n)&&((c+2)<n)){
		if (xadrez[l+1][c+2]==peao){
			qtd++;
		}
	}
	if (((l+2)<n)&&((c+1)<n)){
		if (xadrez[l+2][c+1]==peao){
			qtd++;
		}
	}if (((l+2)<n)&&((c-1)>=0)){
		if (xadrez[l+2][c-1]==peao){
			qtd++;
		}
	}
	cout << endl;
	cout<<qtd<<endl;
}
