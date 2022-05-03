#include <iostream>

using namespace std;

int main(){
	float vet[12] , x = 0 , y = 0 ;
	
	for (int i = 0; i < 12; i++){
		cin >> vet[i];
	}
	
	float maior = 0 , menor = 9999999999;
	
	for (int i = 0; i < 12; i++){
		if(vet[i] > maior){
			maior = vet[i];
			x = i;
		}
	}
	
	for (int i = 0; i < 12; i++){
		if(vet[i] < menor){
			menor = vet[i];
			y = i;
		}
	}
	
	cout << endl;
	
	if(x == 0){
		cout << "janeiro" << endl;
	}else if(x == 1){
		cout << "fevereiro" << endl;
	}else if(x == 2){
		cout << "marco" << endl;
	}else if(x == 3){
		cout << "abril" << endl;
	}else if(x == 4){
		cout << "maio" << endl;
	}else if(x == 5){
		cout << "junho" << endl;
	}else if(x == 6){
		cout << "julho" << endl;
	}else if(x == 7){
		cout << "agosto" << endl;
	}else if(x == 8){
		cout << "setembro" << endl;
	}else if(x == 9){
		cout << "outubro" << endl;
	}else if(x == 10){
		cout << "novembro" << endl;
	}else if(x == 11){
		cout << "dezembro" << endl;
	}
	
	
	if(y == 0){
		cout << "janeiro" << endl;
	}else if(y == 1){
		cout << "fevereiro" << endl;
	}else if(y == 2){
		cout << "marco" << endl;
	}else if(y == 3){
		cout << "abril" << endl;
	}else if(y == 4){
		cout << "maio" << endl;
	}else if(y == 5){
		cout << "junho" << endl;
	}else if(y == 6){
		cout << "julho" << endl;
	}else if(y == 7){
		cout << "agosto" << endl;
	}else if(y == 8){
		cout << "setembro" << endl;
	}else if(y == 9){
		cout << "outubro" << endl;
	}else if(y == 10){
		cout << "novembro" << endl;
	}else if(y == 11){
		cout << "dezembro" << endl;
	}
	return 0;
}

