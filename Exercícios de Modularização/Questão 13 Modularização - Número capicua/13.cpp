#include <iostream>

using namespace std;
int capicua(int n){
	int resto = 0 , i = 1;
	
	while(i<= n){
		resto*=10;
		resto+=(n%(i*10)-n%i)/i;
		i*=10;
	}
	if(resto == n){
	cout << "sim";
	}else {
		cout << "nao";
	}
	
	return 0;
}
int main(){
	int n ;
	cin >> n;
	
	capicua(n);
	
	return 0;
}

