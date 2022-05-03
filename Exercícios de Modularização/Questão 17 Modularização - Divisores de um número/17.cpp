#include <iostream>

using namespace std;

int Div(int n , int &sMenor , int &sMaior){
	int maior , y = 0 , aux = 0;
	bool primo = false , entrou = false;
	
	for (int i = 1; i <= n; i++){
		if(n%i==0){
			y++;
		}
	}
	if(y == 2){
		primo = true;
	}
	if(!primo){
		for (int i = 1; i <= n; i++){
		
			if (i == 1){
				maior = i;
				sMenor = i;
				sMaior = i;
			}
			
			if(n % i == 0){
				aux ++;
				cout << i << endl;
				
				if(aux == 2 and !entrou){
					sMenor = i;
					entrou = true;
				}
				if( i > maior){
					sMaior = maior;
					maior = i;
				}
			}
		}
	}else{
		sMenor = 1;
		sMaior = n;
		cout << sMenor << endl << sMaior << endl;
	}
	
	return 0;
}

int main(){
	int n , sMenor = 0, sMaior = 0;
	cin >> n;
	
	Div(n , sMenor , sMaior);
	cout << sMenor << " " << sMaior;
	
	return 0;
}

