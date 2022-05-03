#include <iostream>

using namespace std;

int Soma(int n , int m){
	return n + m;
	
}

int main(){
	int n , m , x;
	cin >> n >> m;
	
	x = Soma(n,m);
	
	cout << x;
	
	return 0;
}

