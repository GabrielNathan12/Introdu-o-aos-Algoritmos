#include <iostream>

using namespace std;

int main(){
	int cont = 0 , n , E , x;
	cin >> n;
	x = n;
	while (cont < n){
		E = x *(x + 1)/2;
		cont ++;
	}
	cout << E;
	
	return 0;
}

