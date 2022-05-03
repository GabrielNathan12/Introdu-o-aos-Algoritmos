#include <iostream>

using namespace std;

int main(){
	float x1 , x2 , y1 , y2 , m , q;
	
	cin >> x1 >> y1 >> x2 >> y2;
	
	m = (y2 - y1)/(x2 - x1);
	q = y1 - m * x1;
	
	cout << endl << m
		 << endl << q;
		 
	return 0;
}

