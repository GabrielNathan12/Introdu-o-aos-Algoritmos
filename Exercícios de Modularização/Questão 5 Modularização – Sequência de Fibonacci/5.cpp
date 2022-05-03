#include <iostream>

using namespace std;
int Fibonacci(int n){
	int primeiro = 0, segundo = 1, terceiro;
	
	if(n == 0){
		cout << "0";
	}else if(n == 1){
		cout << "1";
	}else{
		cout << primeiro << " " << segundo << " ";
		for (int i = 0; i < n - 2; i++){
			terceiro = primeiro + segundo ;
			primeiro = segundo;
			segundo = terceiro;
			cout << terceiro << " ";
		}
	}
	return 0;
}

int main(){
	int n ;
	cin >> n;
	Fibonacci(n);
	
	return 0;
}

