#include <iostream>

using namespace std;
int B(int n , int k){
	if(k == 0){
		return 1;
	}else if(n == k){
		return 1;
	}else {
		return B(n-1,k-1) + B(n-1 , k);
	}
	return 0;
}
int main(){
	int n , k;
	cin >> n >> k;
	
	cout << B(n,k);
	
	return 0;
}

