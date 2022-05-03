#include <iostream>

using namespace std;

int main(){
	int n1 , n2 , n3 , n4;
	cin >> n1 >> n2 >> n3 >> n4;
	
	if ((n1 > n2 and n1 > n3 and n1 > n4) and (n2 > n3 and n2 > n4)){
		cout << n1 << endl << n2;
	}else if ((n1 > n2 and n1 > n3 and n1 > n4) and (n3 > n2 and n3 > n4)){
		cout << n1 << endl << n3;
	}else if ((n1 > n2 and n1 > n3 and n1 > n4) and (n4 > n2 and n4 > n3)){
		cout << n1 << endl << n4;
	} // n1
	
	else if ((n2 > n1 and n2 > n3 and n2 > n4) and (n1 > n3 and n1 > n4)){
		cout << n2 << endl << n1;
	}else if ((n2 > n1 and n2 > n3 and n2 > n4) and (n3 > n1 and n3 > n4)){
		cout << n2 << endl << n3;
	}else if ((n2 > n1 and n2 > n3 and n2 > n4) and (n4 > n1 and n4 > n3)){
		cout << n2 << endl << n4;
	} // n2
	
	else if ((n3 > n1 and n3 > n2 and n3 > n4) and (n1 > n2 and n1 > n4)){
		cout << n3 << endl << n1;
	}else if ((n3 > n1 and n3 > n2 and n3 > n4) and (n2 > n1 and n2 > n4)){
		cout << n3 << endl << n2;
	}else if ((n3 > n1 and n3 > n2 and n3 > n4) and (n4 > n1 and n4 > n2)){
		cout << n3 << endl << n4;
	}//n3
	
	else if ((n4 > n1 and n4 > n2 and n4 > n1) and (n1 > n2 and n1 > n3)){
		cout << n4 << endl << n1;
	}else if ((n4 > n1 and n4 > n2 and n4 > n3) and (n2 > n1 and n2 > n3)){
		cout << n2 << endl << n3;
	}else if ((n4 > n1 and n4 > n2 and n4 > n3) and (n3 > n2 and n3 > n1)){
		cout << n2 << endl << n3;
	}// n4
	else if (n1 == n2 and n1 > n3 and n1 > n4){
		cout << n1 << endl << n2;
	}else if (n1 == n3 and n1 > n2 and n1 > n4){
		cout << n1 << endl << n3;
	}else if (n1 == n4 and n1 > n2 and n1 > n3){
		cout << n1 << endl << n4;
	}

	return 0;
}

