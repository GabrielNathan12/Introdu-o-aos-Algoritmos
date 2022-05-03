#include <iostream>

using namespace std;

int main(){
	int x , y , maior , menor;
	cin >> x >> y;
	
	if (x > y){
		menor = y;
		maior = x;
	}else{
		menor = x;
		maior = y;
	}
	
	int auxMaior , auxMenor;
	
	while (menor > 0){
		auxMaior = maior;
		auxMenor = menor;
		maior = menor;
		menor = auxMaior % auxMenor;
	}
	
	cout << maior;
	return 0;
}

