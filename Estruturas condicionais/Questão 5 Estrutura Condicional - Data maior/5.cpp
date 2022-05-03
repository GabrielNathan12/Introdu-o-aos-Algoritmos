#include <iostream>

using namespace std;

int main(){
	int d1 , m1 , a1 , d2 , m2 , a2;
	cin >> d1 >> m1 >> a1 >> d2 >> m2 >> a2;
	
	if(a1 > a2){
		cout << d1 << " " << m1 << " " << a1 ;
	}else if((a1 == a2 and m1 >= m2)){
		cout << d1 << " " << m1 << " " << a1 ;
	}else if ((a1 == a2 and m1 == m2) and d1 > d2){
		cout << d1 << " " << m1 << " " << a1 ;
	}else {
		cout << d2 << " " << m2 << " " << a2 ;
	}
	
	return 0;
}

