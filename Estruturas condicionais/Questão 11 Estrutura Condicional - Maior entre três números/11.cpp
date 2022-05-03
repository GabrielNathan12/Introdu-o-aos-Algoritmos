#include <iostream>

using namespace std;

int main(){
	float a ,b , c;
	cin >> a >> b >> c;
	
	if(a > b and a > c){
		cout << a;
	}else if (b > a and b > c){
		cout << b;
	}else if (c > a and c > b){
		cout << c;
	}
	
	return 0;
}

