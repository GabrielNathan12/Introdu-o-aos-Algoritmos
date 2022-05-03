#include <iostream>

using namespace std;

int main(){
	int fat = 1, cont = 1 , n;
	cin >> n;
	
	while(cont <= n){
		fat *= cont;
		cont ++;
	}
	cout << fat;
	
	return 0;
}

