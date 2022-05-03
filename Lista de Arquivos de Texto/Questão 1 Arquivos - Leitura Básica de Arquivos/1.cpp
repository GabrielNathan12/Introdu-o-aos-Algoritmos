#include <iostream>
#include <fstream>

using namespace std;

int main(){
	string Arquivo , palavra;
	cin >> Arquivo;
	
	ifstream Arq(Arquivo.c_str());
	
	if(Arq){
		while(!Arq.eof()){
			Arq >> palavra;
		}
		Arq.close();
	}
	cout << palavra;
	return 0;
}

