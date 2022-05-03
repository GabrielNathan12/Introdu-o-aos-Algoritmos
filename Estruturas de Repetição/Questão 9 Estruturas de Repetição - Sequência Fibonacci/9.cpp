#include <iostream>

using namespace std;

int main(){
	int cont = 0 , primeiro , segundo , terceiro , n;
	cin >> n;
	primeiro = 0;
	segundo = 1;
	cout << endl;
	
	if(n == 1){
		cout << "0";
	}else {
		cout << primeiro << endl << segundo << endl;
		while (cont < n - 2){
			terceiro = primeiro + segundo;
			primeiro = segundo;
			segundo = terceiro;
			cont ++ ;
			cout << terceiro << endl;
		}
	}
	return 0;
}

