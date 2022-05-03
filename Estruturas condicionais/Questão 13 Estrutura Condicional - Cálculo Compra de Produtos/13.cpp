#include <iostream>

using namespace std;

int main(){
	int n , quant;
	float bruto , desconto;
	cin >> n >> quant ;
	cout << endl ;
	
	if (n > 0 and n <= 10){
		cout << "10" << endl;
		bruto = quant * 10;
		cout << bruto << endl;
		if(bruto <= 250 ){
			desconto = bruto * 0.05;
			cout << desconto << endl;
			desconto = bruto - desconto;
			cout << desconto ;
		}else if(bruto > 250 and bruto <= 500){
			desconto = bruto * 0.10;
			cout << desconto << endl;
			desconto = bruto - desconto;
			cout << desconto ;
		}else if (bruto > 500){
			desconto = bruto * 0.15;
			cout << desconto << endl;
			desconto = bruto - desconto;
			cout << desconto ; 
		}
	}
	else if (n > 11 and n <= 20){
		cout << "15" << endl;
		bruto = quant * 15;
		cout << bruto << endl;
		if(bruto <= 250 ){
			desconto = bruto * 0.05;
			cout << desconto << endl;
			desconto = bruto - desconto;
			cout << desconto ;
		}else if(bruto > 250 and bruto <= 500){
			desconto = bruto * 0.10;
			cout << desconto << endl;
			desconto = bruto - desconto;
			cout << desconto ;
		}else if (bruto > 500){
			desconto = bruto * 0.15;
			cout << desconto << endl;
			desconto = bruto - desconto;
			cout << desconto ; 
		}
	}
	else if (n > 21 and n <= 30){
		cout << "20" << endl;
		bruto = quant * 20;
		cout << bruto << endl;
		if(bruto <= 250 ){
			desconto = bruto * 0.05;
			cout << desconto << endl;
			desconto = bruto - desconto;
			cout << desconto ;
		}else if(bruto > 250 and bruto <= 500){
			desconto = bruto * 0.10;
			cout << desconto << endl;
			desconto = bruto - desconto;
			cout << desconto ;
		}else if (bruto > 500){
			desconto = bruto * 0.15;
			cout << desconto << endl;
			desconto = bruto - desconto;
			cout << desconto ; 
		}
	}
	else if (n > 31 and n <= 40){
		cout << "30" << endl;
		bruto = quant * 30;
		cout << bruto << endl;
		if(bruto <= 250 ){
			desconto = bruto * 0.05;
			cout << desconto << endl;
			desconto = bruto - desconto;
			cout << desconto ;
		}else if(bruto > 250 and bruto <= 500){
			desconto = bruto * 0.10;
			cout << desconto << endl;
			desconto = bruto - desconto;
			cout << desconto ;
		}else if (bruto > 500){
			desconto = bruto * 0.15;
			cout << desconto << endl;
			desconto = bruto - desconto;
			cout << desconto ; 
		}
	}
	return 0;
}
