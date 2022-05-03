#include <iostream>

using namespace std;

float H(float n){
	if(n == 1){
		return 1;
	}else if(n >= 2){
		return (1/n + H(n-1));
	}
	return 0;
}

int main(){
	float n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
		cout << H(i - j) << " ";
		}
	}
	
	//~ cout << H(n);
	return 0;
}

