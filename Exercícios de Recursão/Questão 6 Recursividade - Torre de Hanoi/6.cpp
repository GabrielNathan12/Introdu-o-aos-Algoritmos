#include <iostream>

using namespace std;
int Torre(int n){
	if(n == 1){
		return 1;
	}else if(n >1){
		return 2* Torre(n-1) + 1;
	}
	return 0;
}
int main(){
	int n;
	cin >> n ;
	
	cout << Torre(n);
	
	return 0;
}

