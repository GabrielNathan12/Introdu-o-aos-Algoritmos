#include <iostream>

using namespace std;

int main () {
	int d, h, min, duracao, d2, h2, min2;
	
	cin >> d >> h >> min >> duracao;
	
	d2 = (duracao / 1440);
	d2 += d;
	duracao = (duracao % 1440);
	h2 = (duracao / 60);
	h2 += h;
	duracao = (duracao % 60);
	min2 = min + duracao;
	
	if (min2 >= 60) {
		min2 = min2 - 60;
		h2 = h2 + 1;
	}
	if (h2 >= 24) {
		h2 = h2 - 24;
		d2 = d2 + 1;
	}
	
	cout << endl << d2 << " " << h2 << " " << min2 << endl;
	
	return 0;
}
