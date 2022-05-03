#include <iostream>

using namespace std;

int main(){
	int horas , min , totalH , totalMin ,seg;
	cin >> horas >> min;
	
	totalH = horas * 60;
	totalMin = totalH + min;
	seg = totalMin * 60;
	
	cout << endl << totalH << endl
		 << totalMin << endl
		 << seg ;
		 
	return 0;
}

