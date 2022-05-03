#include <iostream>

using namespace std;

int main(){
	int A[5] , B[5] , soma = 0 , soma2 = 0;
	
	for (int i = 0; i < 5; i++){
		cin >> A[i];
	}
	for (int i = 0; i < 5; i++){
		cin >> B[i];
	}
	
	for (int i = 0; i < 5; i++){
		soma += A[i];
	}
	
	for (int i = 0; i < 5; i++){
		soma2 += B[i];
	}
	
	cout << soma - soma2;
	
	return 0;
}

