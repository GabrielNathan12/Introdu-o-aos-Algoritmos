#include <iostream>

using namespace std;

int Xor(int n , int m){
	if(n == 1 and m == 0){
		cout << "True";
	}else if(n == 0 and m == 1){
		cout << "True";
	}else {
		cout << "False";
	}
	return 0;
}
int main(){
	int n , m;
	cin >> n >> m;
	
	if((n == 0 or n == 1) and (m == 1 or m == 0)){
		Xor(n,m);
	}
	
	return 0;
}

