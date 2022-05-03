#include <iostream>
#include <math.h>

using namespace std;

int Fetuccine( int n , int x , int y){

cout << x << " " << y << " ";
int valorTermo;
for(int i = 3; i <= n; i++){
	if(i % 2 == 0){
		valorTermo = y - x; //para i par.	
	}
	else {
		valorTermo = y + x; //para i impar
	}
	cout << valorTermo << " ";
	x = y; 
	y = valorTermo;
	}
	return 0;
}

int main(){

int x, y, n;
cin >> n >> x >> y;

Fetuccine(n , x , y);

return 0;
}
