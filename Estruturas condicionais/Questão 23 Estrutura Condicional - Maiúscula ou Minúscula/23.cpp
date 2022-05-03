#include <iostream>

using namespace std;

int main(){
	char letra ;
	cin >> letra;
	
	if(letra >= 'A' and letra <= 'Z'){
		cout << "MAIUSCULA";
	}else if (letra >= 'a' and letra <= 'z'){
		cout << "MINUSCULA";
	}
	
	return 0;
}

