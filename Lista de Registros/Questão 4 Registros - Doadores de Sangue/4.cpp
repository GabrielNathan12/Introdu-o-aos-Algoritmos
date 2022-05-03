#include <iostream>

using namespace std;

struct Doador{
	string nome;
	string tipo;
};

int main(){
	int n;
	cin >> n;
	string sangue;
	Doador Pessoa[n];
	
	for (int i = 0; i < n; i++){
		cin >> Pessoa[i].nome;
		cin >> Pessoa[i].tipo;
	}
	
	cin >> sangue;
	cout << endl;
	
	
	if(sangue == "A"){
		for (int i = 0; i < n; i++){
			if(Pessoa[i].tipo == "A"){
				cout << Pessoa[i].nome << endl;
			}
		}
	}
	
	if(sangue == "A"){
		for (int i = 0; i < n; i++){
			if(Pessoa[i].tipo == "O"){
				cout << Pessoa[i].nome << endl;
			}
		}
	}
	
	
	if(sangue == "B"){
		for (int i = 0; i < n; i++){
			if(Pessoa[i].tipo == "B"){
				cout << Pessoa[i].nome << endl;
			}
		}
	}
	
	if(sangue == "B"){
		for (int i = 0; i < n; i++){
			if(Pessoa[i].tipo == "O"){
				cout << Pessoa[i].nome << endl;
			}
		}
	}
	
	if(sangue == "AB"){
		for (int i = 0; i < n; i++){
			if(Pessoa[i].tipo == "AB"){
				cout << Pessoa[i].nome << endl;
			}
		}
	}
	if(sangue == "AB"){
		for (int i = 0; i < n; i++){
			if(Pessoa[i].tipo == "A"){
				cout << Pessoa[i].nome << endl;
			}
		}
	}
	
	if(sangue == "AB"){
		for (int i = 0; i < n; i++){
			if(Pessoa[i].tipo == "B"){
				cout << Pessoa[i].nome << endl;
			}
		}
	}
	
	if(sangue == "AB"){
		for (int i = 0; i < n; i++){
			if(Pessoa[i].tipo == "O"){
				cout << Pessoa[i].nome << endl;
			}
		}
	}
	
	if(sangue == "O"){
		for (int i = 0; i < n; i++){
			if(Pessoa[i].tipo == sangue){
				cout << Pessoa[i].nome << endl;
			}
		}
	}
	
	return 0;
}

