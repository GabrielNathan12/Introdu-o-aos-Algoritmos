#include <iostream>

using namespace std;

int Ricci(int F0 , int F1 , int F){
	if(F == 0){
		return F0;
	}else if(F == 1){
		return F1;
	}else if(F >= 2){
		return Ricci(F0 , F1 , F -1) + Ricci(F0 , F1 , F - 2);
	}
	return 0;
}

int main(){
	int a , b , n;
	cin >> a >> b >> n;
	
	for (int i = n; i > 0; i--){
			cout << Ricci(a , b , n - i) << " ";
	}
	
	return 0;
}

