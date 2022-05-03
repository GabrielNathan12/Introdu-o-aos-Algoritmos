#include <iostream>

using namespace std;

int main(){
	int n ;
	float x , poupanca , renda;
	cin >> n >> x;
	
	if(n == 1){
		poupanca = x * 0.005;
		x += poupanca;
		cout << x;
	}else if (n == 2){
		renda = x * 0.03 - 30;
		x += renda;
		cout << x;
	}
		
	return 0;
}

