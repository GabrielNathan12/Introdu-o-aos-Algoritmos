#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char vet1[100], vet2[100];
	int cont = 0;
	int n = 0, m = 0;
	cin.getline(vet1, 100);
	cin.getline(vet2, 100);
	
	for (unsigned i = 0; i < strlen(vet1); i++){
		if (vet1[i] != ' '){
			n++;
		}
	}
	for (unsigned i = 0; i < strlen(vet2); i++){
		if (vet2[i] != ' '){
			m++;
		}
	}
	
	char* vet3 = new char[n+m];
	
	for (unsigned i = 0; i < strlen(vet1); i++){
		if (vet1[i] != ' '){
			vet3[cont] = vet1[i];
			cont++;
		}
	}
	for (unsigned i = 0; i < strlen(vet2); i++){
		if (vet2[i] != ' '){
			vet3[cont] = vet2[i];
			cont++;
		}
	}
	int soma = n + m;
	cout << endl;
	for (int i = 0; i < soma; i++){
		cout << vet3[i] << " ";
	}

	return 0;
}
