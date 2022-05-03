#include <iostream>

using namespace std;

int main(){
	int mili , horas , min , restante;
	float seg;
	cin >> mili;
	
	horas = mili / 3600000;
	restante = mili % 3600000;
	min = restante / 60000;
	restante = restante % 60000;
	seg = restante / 1000.0;
	
	cout << endl << horas << " : " << min << " : " << seg;
	
	return 0;
}
