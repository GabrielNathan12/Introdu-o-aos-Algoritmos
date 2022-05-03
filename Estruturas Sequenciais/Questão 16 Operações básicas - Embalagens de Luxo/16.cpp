#include <iostream>

using namespace std;

int main(){
	int n , luxo , comuns;
	cin >> n;
	
	comuns = n *2 * 1/3;
	luxo = n * 1/3;
	
	cout << endl << comuns + 1 << endl
		 << luxo ;
		 
	return 0;
}

