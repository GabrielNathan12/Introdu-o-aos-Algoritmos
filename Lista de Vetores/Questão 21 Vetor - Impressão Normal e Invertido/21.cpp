#include <iostream>

using namespace std;

int main(){
	int cod ;
	float vet[20];
	
	cin >> cod;
		for (int i = 0; i < 20; i++){
			cin >> vet[i];
		}
		
		switch(cod){
			case 0:
				return 0;
			break;
			case 1:
				for (int i = 0; i < 20; i++){
					cout << vet[i] << " ";
				}
			break;
			
			case 2:
				for (int i = 19; i >= 0; i--){
					cout << vet[i] << " ";
				}
			break;
		}
	return 0;
}


