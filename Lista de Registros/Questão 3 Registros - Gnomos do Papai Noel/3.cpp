#include <iostream>

using namespace std;

struct Registro{
	string nome;
	int entrada[7];
	int saida[7];
};

int main(){
	int n ;
	cin >> n;
	Registro gnomos[n];
	
	for (int i = 0; i < n; i++){
		cin >> gnomos[i].nome;
		for (int j = 0; j < 7; j++){
			cin >> gnomos[i].entrada[j];
			cin >> gnomos[i].saida[j];
		}
	}
	
	int total = 0 ;
	cout << endl;
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < 7; j++){
			total += gnomos[i].saida[j] - gnomos[i].entrada[j];
		}if(total < 70){
				cout << gnomos[i].nome << " " << total << endl;
		}
		total = 0;
	}
	
	return 0;
}

