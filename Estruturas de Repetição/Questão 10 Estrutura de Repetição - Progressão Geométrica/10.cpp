#include <iostream>

using namespace std;

int main(){
	float razao , S;
	int n , cont = 1;
	cin >> razao >> n;
	S = razao;
	cout << endl;
	cout << "1" << endl;
	while (cont < n){
		cout << razao << endl;
		razao *= S;
		cont ++;
	}
	
	return 0;
}

