#include <iostream>

using namespace std;

int main(){
	int valor , compra , n20 , n10 , n5 , n2 , n1 , r20 , r10 , r5 , r2 , troco;
	cin >> valor >> compra ;
	
	troco = valor - compra ;
	
	n20 = troco / 20;
	r20 = troco % 20;
	n10 = r20 / 10;
	r10 = r20 % 10;
	n5 = r10 / 5;
	r5 = r10 % 5;
	n2 = r5 / 2;
	r2 = r5 % 2;
	n1 = r2 /1;
	
	cout << endl << n20 << endl
		 << n10 << endl
		 << n5 << endl
		 << n2 << endl
		 << n1;
	
	return 0;
}

