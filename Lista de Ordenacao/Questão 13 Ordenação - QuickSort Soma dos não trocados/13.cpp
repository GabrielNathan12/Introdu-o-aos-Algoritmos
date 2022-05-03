#include <iostream>

using namespace std;

void quickSort(int v[], int esq, int dir) {
	int i, j, aux, pivo;
	i = esq;
	j = dir;
	pivo = v[(esq+dir)/2];
	
	
	while (i < j) {
		while (v[i] < pivo and i < dir) {
			i++;
		}
		while (v[j] > pivo and j > esq) {
			j--;
		}
		if (i <= j) {
			aux = v[i];
			v[i] = v[j];
			v[j] = aux;
			i++;
			j--;
		}
	}
	
	if (j > esq) {
		for (int i = 0; i < dir + 1; i++){
			cout << v[i] << " ";
		}
		cout << endl;
		quickSort(v, esq, j);
		
	}
	if (i < dir) {
		for (int j = 0; j < dir + 1; j++){
			cout << v[j] << " ";
		}
		cout << endl;
		quickSort(v, i , dir);
	}

}

int main(){
	int n;

	cin >> n;

	int V[n];

	for (int i = 0; i < n; i++){
		cin >> V[i];
	}
	cout << endl;
	quickSort(V, 0, n - 1);

	return 0;
}
