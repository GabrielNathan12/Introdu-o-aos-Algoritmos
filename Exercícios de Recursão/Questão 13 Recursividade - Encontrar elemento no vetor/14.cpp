#include <iostream>
using namespace std;
int menor( int vec[], int n ){
	if( n == 1 ){
		return vec[0];
	}
	int m = menor(vec + 1, n - 1 );
	return ( vec[0] < m ) ? vec[0] : m;
}

	int main( void ){
		int n;
		cin >> n;
		int vetor[n];
		
		for (int i = 0; i < n; i++){
			cin >> vetor[i];
		}
		int min = menor( vetor, n );
		cout << min ;

		return 0;
	}
