#include <iostream>

using namespace std;

int main(){
	int n = 10 , cont = 0 , a = 0, b = 0;
	char x;
	bool achou = true;
	
	while (cont < n){
		cin >> x;
		if( x == 'a'){
			a ++;
		}else if ( x == 'b'){
			b ++;
		}
		cont ++;
	}
	if(a < b){
		achou = false;
	}
	//~ cout << a  << endl << b << endl;
	if(!achou){
		cout << "1";
	}else {
		cout << "0";
	}
	
	return 0;
}

