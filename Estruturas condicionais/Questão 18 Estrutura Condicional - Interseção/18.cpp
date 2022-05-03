#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;

int main() {
	float x1, y1, x2, y2, m, coord_conhecida, coord_desconhecida;
	char tipo;
	char x = 'x';
	char y = 'y';
	
	cin >> x1 >> y1 >> x2 >> y2 >> tipo >> coord_conhecida;
	
	const char* teste = "nada";
	
	if ((tipo == x and x1 == x2) or (tipo == y and y1 == y2)) {
		teste = "nenhuma";
		cout << teste << endl;
	}else {
		m = (y1 - y2)/(x1 - x2);
	}
	if (tipo == x and (strcmp(teste, "nada")==0)) {
		coord_desconhecida = (m*(coord_conhecida - x1)) + y1;
		cout << coord_desconhecida << endl;
	}else if (tipo == y and (strcmp(teste, "nada")==0)) {
		coord_desconhecida = ((coord_conhecida - y1)/m) + x1;
		cout << coord_desconhecida << endl;
	}
	
	return 0;
	
}
