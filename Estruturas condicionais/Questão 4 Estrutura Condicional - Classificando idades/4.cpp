#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	if(n < 5){
		cout << "Nao registrado";
	}else if(n >= 5 and n <= 7){
		cout << "Infantil";
	}else if ( n >= 8 and n <= 10){
		cout << "Juvenil";
	}else if(n >= 11 and n <= 15){
		cout << "Adolescente";
	}else if(n >= 16 and n <= 30){
		cout << "Adulto";
	}else if(n > 30){
		cout << "Senior";
	}
	
	return 0;
}

