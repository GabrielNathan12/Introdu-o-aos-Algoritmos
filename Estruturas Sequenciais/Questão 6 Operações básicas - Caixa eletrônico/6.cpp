#include <iostream>

using namespace std;

int main(){
	int valor , resto50 , resto10 , resto5 , resto1 , R50 , R10 , R5;
	cin >> valor;
	
	resto50 = valor / 50;
	R50 = valor % 50;
	
	resto10 = R50 / 10;
	R10 = R50 % 10;
	
	resto5 = R10 / 5;
	R5 = R10 % 5;
	
	resto1 = R5;
	
	cout << endl << resto50 << endl
		 << resto10 << endl
		 << resto5 << endl
		 << resto1 ;
		 
	return 0;
}

