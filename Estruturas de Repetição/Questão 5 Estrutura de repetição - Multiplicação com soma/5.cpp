#include <iostream>

using namespace std;

int main(){
	int n1 , n2 , cont = 0 , mult;
	cin >> n1 >> n2 ;
	mult = n1;
	while (cont < n2){
		cout << n1 << endl;
		n1 += mult;
		cont ++ ;
	}
	
	return 0;
}

