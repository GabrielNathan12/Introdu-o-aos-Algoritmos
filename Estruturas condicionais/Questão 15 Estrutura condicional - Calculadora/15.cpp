#include <iostream>

using namespace std;

int main(){
	float n , m , S;
	char x;
	cin >> n >> x >> m;
	cout << endl ;
	
	if (x == '+'){
		S =  n + m;
		cout << S;
	}else if (x == '-'){
		S= n - m;
		cout << S;
	}else if (x == '*'){
		S = n * m;
		cout << S;
	}else if (x == '/' and m != 0){
		S = n / m;
		cout << S;
	}else {
		cout << "erro";
	}
	
	return 0;
}

