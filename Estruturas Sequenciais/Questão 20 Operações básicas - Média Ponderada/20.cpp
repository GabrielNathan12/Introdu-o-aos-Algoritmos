#include <iostream>

using namespace std;

int main(){
	float n1 , n2 , n3;
	int peso1 , peso2 , peso3;
	
	cin >> n1 >> n2 >> n3;
	cin >> peso1 >> peso2 >> peso3;
	
	cout << (peso1 * n1 + peso2 * n2 + peso3 * n3)/(peso1 + peso2 + peso3);
	
	return 0;
}

