#include <iostream>

using namespace std;
void insertion_sort(int vet[] , int n) {

	for (int i = 1; i < n; i++) {
		int escolhido = vet[i];
		int j = i - 1;
		
		while (j >= 0 and vet[j] > escolhido) {
			vet[j + 1] = vet[j];
			j--;
		}
		
		vet[j + 1] = escolhido;
		for (int i = 0; i < n; i++){
			cout << vet[i] << " ";
		}
		cout << endl;
	}
	
}
int main(){
	int n;
	cin >> n;
	
	int vet[n];
	
	for (int i = 0; i < n; i++){
		cin >> vet[i];
	}
	
	cout << endl;
	insertion_sort(vet , n);
	
	return 0;
}

