#include <iostream>

using namespace std;

int main (){
	int n, cont = 1, i, j;
	cin >> i >> j;
	cout << i << endl << j << endl;
	
	if (j > i){
		n = j - i;
	}else if (i > j){
		n = i - j;
	}
	
	while (n != 1){
		if (n % 2 == 0){
			n = n/2;
			cont++;
		}else {
			n = (n * 3) + 1;
			cont++;
		}
	}
	cout << cont;
	
	return 0;
}

