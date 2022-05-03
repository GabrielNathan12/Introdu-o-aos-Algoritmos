#include <iostream>

using namespace std;

int min(int a, int b, int c){
	int menor = a;
	
	if (menor > b){
		menor = b;
	}
	if (menor > c){
		menor = c;
	}
	return menor;
}

int f(int n){
	if (n > 3){
		return min(f(n-1), f(n-2), f(n-3)) + 1;
	} else {
		return n;
	}
}

int main (){
	int n;
	
	cin >> n;
	
	cout << f(n);
	
	return 0;
}
