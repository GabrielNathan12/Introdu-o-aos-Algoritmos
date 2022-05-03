#include <iostream>
#include <math.h>

using namespace std;

int main(){
	double H , metros ;
	int Ndegraus;
	cin >> H >> metros ;
	H = H / 100;
	Ndegraus = (int) ceil(metros / H);
	
	cout << endl << Ndegraus;
	
	return 0;
}

