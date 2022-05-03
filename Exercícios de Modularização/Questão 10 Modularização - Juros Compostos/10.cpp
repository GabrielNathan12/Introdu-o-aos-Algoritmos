#include <iostream>
#include <math.h>

using namespace std;

void Juros(float C , float i , int t){
	float M;
	M = C *(pow( 1 + (i/ 100) , t));
	cout << M;
}

int main(){
	float C , i ;
	int t;
	cin >> C >> i >> t;
	Juros(C , i , t);
	return 0;
}

