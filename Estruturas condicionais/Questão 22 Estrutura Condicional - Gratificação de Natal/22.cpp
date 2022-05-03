#include <iostream>

using namespace std;

int main(){
	float extra , falta , H;
	cin >> extra >> falta ;
	
	H = extra - (( 2/3) * falta);
	H *= 60;
	if(H > 2400){
		cout << "500";
	}else if(H > 1800 and H <= 2400){
		cout << "400";
	}else if (H > 1200 and H <= 1800){
		cout <<"300";
	}else if(H > 600 and H <= 1200){
		cout << "200";
	}else if(H <= 600){
		cout << "100";
	}
	
	return 0;
}

