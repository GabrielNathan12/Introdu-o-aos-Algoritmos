#include <iostream>

using namespace std;
bool busca(int vet[] , int n , int x , int &cont){
	while(cont < n){
		if(vet[cont] == x){
			return true;
		}else {
			cont ++;
			return busca(vet , n , x , cont);
		}
	}
	return 0;
}

int main(){
	int n , x , cont = 0;
	cin >> n;
	int vet[n];
	
	for (int i = 0; i < n; i++){
		cin >> vet[i];
	}
	cin >> x;
	
	cout << busca(vet , n , x , cont);
	
	return 0;
}

