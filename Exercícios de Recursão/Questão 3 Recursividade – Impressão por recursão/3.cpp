#include <iostream>

using namespace std;

void imp(int N, int X = 0);

void imp(int N, int X){
	cout << X << " ";
	
	if (N > X){
		imp(N, ++X); 
	}
}

int main(){
	int N;

	cin >> N;

	imp(N);

	return 0;
}
