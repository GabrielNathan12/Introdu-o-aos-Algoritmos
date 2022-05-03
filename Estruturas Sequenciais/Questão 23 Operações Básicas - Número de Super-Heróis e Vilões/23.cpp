#include <iostream>

using namespace std;

int main(){
	int SH ,V , A , Sp ;
	cin >> A >> Sp;
	
	V = Sp - 2 * SH;
	SH = A - 2 * V;
	
	cout << endl << V << endl
		 << SH ;
	return 0;
}

