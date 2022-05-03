#include <iostream>

using namespace std;

int main(){
	int n , n100 , r100 , n50 , r50 , n20 , r20 , n10 , r10 , n5 , r5 , n2 , r2 , n1;
	
	cin >> n;
	
	n100 = n / 100;
	r100 = n % 100;
	n50 = r100 / 50;
	r50 = r100 % 50;
	n20 = r50 / 20;
	r20 = r50 % 20;
	n10 = r20 / 10;
	r10 = r20 % 10;
	n5 = r10 / 5;
	r5 = r10 % 5;
	n2 = r5 / 2;
	r2 = r5 % 2;
	n1 = r2 / 1;
	
	
	cout << endl << n100 << endl
		 << n50 << endl
		 << n20 << endl 
		 << n10 << endl
		 << n5 << endl
		 << n2 << endl
		 << n1 ;
		 
	return 0;
}

