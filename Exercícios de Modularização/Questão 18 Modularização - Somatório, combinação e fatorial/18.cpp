#include <iostream>

using namespace std;

int somatorio(int n);
int combinacao(int n, int m);
int fatorial(int n);

int somatorio(int n){
	int soma = 0;

	for (int i = 0; i < n; i++){
		soma += combinacao(n, i);
	}
	return soma;
}

int combinacao(int n, int m){
	return fatorial(n)/(fatorial(m)*fatorial(n-m));
}

int fatorial(int n){
	if(n <= 1){
		return 1;
	} else {
		return n * fatorial(n-1);
	}
}

int main(){
	int n;

	cin >> n;

	cout << somatorio(n);

	return 0;
}
