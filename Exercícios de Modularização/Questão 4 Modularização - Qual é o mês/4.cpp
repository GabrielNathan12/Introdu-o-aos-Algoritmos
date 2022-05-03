#include <iostream>

using namespace std;
int mes(int n){
	if( n == 1){
		cout << "janeiro";
	}else if(n == 2){
		cout << "fevereiro";
	}else if(n == 3){
		cout << "marco";
	}else if(n == 4){
		cout << "abril";
	}else if(n == 5){
		cout << "maio";
	}else if(n == 6){
		cout << "junho";
	}else if(n == 7){
		cout << "julho";
	}else if(n == 8){
		cout << "agosto";
	}else if(n == 9){
		cout << "setembro";
	}else if(n == 10){
		cout << "outubro";
	}else if(n == 11){
		cout << "novembro";
	}else if(n == 12){
		cout << "dezembro";
	}else {
		cout << "erro";
	}
	
	return 0;
}
int main(){
	int n;
	cin >> n;
	mes(n);
	
	return 0;
}

