#include <iostream>

using namespace std;

int main(){
	int n , d1 , d2 , d3 , r2 , r3;
	cin >> n;
	
	d3 = n / 100;
	r3 = n % 100;
	d2 = r3 / 10;
	r2 = r3 % 10;
	d1 = r2 / 1;
	
	cout << endl << d1 * d2 * d3;
	
	return 0;
}

