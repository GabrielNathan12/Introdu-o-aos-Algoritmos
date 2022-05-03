#include <iostream>

using namespace std;

int main(){
	int a , b;
	cin >> a >> b;
	
	if (a < b){
		b = b - a;
		cout << b;
	}else {
		a -= b;
		cout << a;
	}
	
	return 0;
}

