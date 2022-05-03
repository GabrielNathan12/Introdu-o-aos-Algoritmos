#include <iostream>

using namespace std;

int main(){
	float produto , desconto , prestacao5x , prestacao10x , total;
	cin >> produto ;
	
	desconto = produto * 0.10;
	desconto -= produto ;
	prestacao5x = produto / 5;
	total = produto / 10;
	prestacao10x = total * 0.20;
	prestacao10x += total;
	
	cout << endl << (-1 * desconto) << endl
		 << prestacao5x << endl
		 << prestacao10x;
		 
	return 0;
}

