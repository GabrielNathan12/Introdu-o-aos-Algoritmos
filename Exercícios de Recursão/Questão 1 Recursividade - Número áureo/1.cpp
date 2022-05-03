#include <iostream>

using namespace std;

double Aureo(double n){
	if(n == 1){
		return 1;
	}else if(n > 1){
		return 1 + (1 / Aureo(n-1));
	}
	return 0;
}
int main(){
	double n;
	cin >> n;
	
	cout << Aureo(n);
	
	return 0;
}

