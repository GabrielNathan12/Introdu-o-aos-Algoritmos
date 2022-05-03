#include <iostream>
#include <string>
using namespace std;
int main(){

	string palavra;
	bool diferente = false ;
	cin >> palavra;
	int i = 0, j;
	int tam = palavra.size();

	while ( i < tam and !diferente){
		j = 0;
		diferente = true;
		while( j < tam and diferente){
			if (palavra[i] == palavra[j] and i != j){
				diferente = false;
			}
			j ++;
		}
		if (diferente){
			cout << palavra[i] << " ";
		}
		i++;
	}
	return 0;
}
