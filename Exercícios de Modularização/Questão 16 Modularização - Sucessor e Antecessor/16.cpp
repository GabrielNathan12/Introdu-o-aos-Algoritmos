#include <iostream>

using namespace std;
int Funcao(int n){
	int anterio , sucessor;
	anterio = n - 1;
	sucessor = n + 1;
	cout << anterio << " " << n << " " << sucessor;
	return 0;
}
int main(){
	int n ;
	cin >> n;
	Funcao(n);
	return 0;
}

