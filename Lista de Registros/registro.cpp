#include <iostream>
using namespace std;

struct pessoas{
	int num;
	double peso;
	string nome;
};

int main(){
int n;
cin >> n;

pessoas Pe[n];

for (int i = 0; i < n; i++){
	cin >> Pe[i].peso >> Pe[i].nome >> Pe[i].num;
}
	int m;
	cin >> m;
	
	for (int i = 0; i < n; i++){
		if(m == Pe[i].num){
			cout << Pe[i].peso << " " << Pe[i].nome;
				}
			}
	
	return 0;
}

