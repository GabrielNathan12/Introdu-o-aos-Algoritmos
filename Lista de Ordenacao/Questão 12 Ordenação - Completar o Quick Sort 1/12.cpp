#include <iostream>

using namespace std;
int Rearranja(int V[], int e, int d, int pivo, int U[]){
	int j = e, k = d;

	swap(V[pivo], V[d]);
	pivo = d;

	for(int i = e; i <= d; i++){
		if(V[i] <= V[pivo]){
			U[j++] = V[i];
		} else {
			U[k--] = V[i];
		}
	}
	for(int i = e; i <= d; i++){
		V[i] = U[i];
	}
	return j-1;
}

void QuickSort(int V[], int e, int d, int U[]){
	if(e >= d){
		return;
	}
	int pivo = e;

	pivo = Rearranja(V, e, d, pivo, U);
	QuickSort(V, e, d-1, U);
	QuickSort(V, e+1, d, U);
}

int main(){
	int n;

	cin >> n;

	int V[n], U[n];

	for (int i = 0; i < n; i++){
		cin >> V[i];
	}

	QuickSort(V, 0, n-1, U);

	for (int i = 0; i < n; i++){
		cout << V[i] << " ";
	}
	return 0;
}

//~ 8
//~ 8 3 2 4 5 5 6 0
