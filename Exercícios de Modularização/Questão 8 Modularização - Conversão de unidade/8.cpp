#include <iostream>

using namespace std;

void Dist(float n){
	float cent;
	cent = n * 100;
	cout << cent << " cm";
}

void Conv(float n){
	float cent;
	cent = n / 100;
	cout << cent << " m";
}

int main(){
	float n;
	string distancia;
	cin >> n >> distancia;
	
	if(distancia == "centimetro"){
		Dist(n);
	}else if(distancia == "metro"){
		Conv(n);
	}else{
		cout << "ERRO";
	}
	
	return 0;
}

