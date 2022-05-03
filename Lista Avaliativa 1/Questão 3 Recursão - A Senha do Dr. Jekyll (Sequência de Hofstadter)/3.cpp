#include <iostream>

using namespace std;

int Macho(int n);
int Femea(int n);

int Femea(int n){
	if(n == 0){
		return 1;
	}else if(n > 0){
		return n - Macho(Femea(n-1));
	}
	return 0;
}

int Macho(int n){
	if(n == 0){
		return 0;
	}else if(n > 0){
		return n - Femea(Macho(n - 1));
	}
	return 0;
}

int main(){
	int a , b , c , x , y ,z;
	cin >> a >> b >> c;
	cin >> x >> y >> z;
	
	cout << Femea(a) << " " << Femea(b) << " " << Femea(c) << " ";
	cout << Macho(x) << " " << Macho(y) << " " << Macho(z);
	
	
	return 0;
}

