#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float raio;
	cin >> raio;
	
	cout << endl << 2 * raio << endl
		 << (4 * 3.14)*pow(raio, 2) << endl
		 << ((4*3.14)*pow(raio , 3))/3;
		 
	return 0;
}

