#include <iostream>

using namespace std;

struct ponto{
	int x, y;
};

struct retangulos{
	ponto v1;
	ponto v2;
};

int main (){
	ponto pontos;
	cin>>pontos.x>>pontos.y;
	
	int n;
	cin>>n;
	
	retangulos vertices[n];
	for (int i = 0; i < n; i++){
		cin>>vertices[i].v1.x;
		cin>>vertices[i].v1.y;
		cin>>vertices[i].v2.x;
		cin>>vertices[i].v2.y;
	}
	
	int qtd=0;
	for (int i = 0; i < n; i++){
		if (((vertices[i].v1.x<=pontos.x)&&(vertices[i].v2.x>=pontos.x))
			&&((vertices[i].v1.y<=pontos.y)&&(vertices[i].v2.y>=pontos.y))){
			qtd++;
		}
	}
	cout << endl;
	cout<< qtd <<endl;
}

