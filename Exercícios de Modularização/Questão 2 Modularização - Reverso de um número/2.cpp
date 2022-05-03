#include <iostream>

using namespace std;

int reverte(int n){
	int resto = 0 , i = 1;
	
	while(i<= n){
		resto*=10;
		resto+=(n%(i*10)-n%i)/i;
		i*=10;
	}
	cout << resto;
	return 0;
}

int main(){
	int n;
	cin >> n;
	reverte(n);
	
	return 0;
}

