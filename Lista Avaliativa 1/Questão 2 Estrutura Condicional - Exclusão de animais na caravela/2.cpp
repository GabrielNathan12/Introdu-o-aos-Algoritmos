#include <iostream>

using namespace std;

int main(){
	//~ int limite;
	//~ int qtdCavalos, qtdVacas, qtdGalinhas;
	
	//~ cin >> limite
		//~ >> qtdCavalos
		//~ >> qtdVacas
		//~ >> qtdGalinhas;
	
	//~ int totalCavalo  = qtdCavalos  * 250;
	//~ int totalVacas   = qtdVacas    * 150;
	//~ int totalGalinha = qtdGalinhas * 2;
	//~ int resto;
	
	//~ if(totalGalinha <= limite){
		//~ limite -= totalGalinha;
		//~ qtdGalinhas = 0;
	//~ } else {
		//~ resto = totalGalinha % limite;
		//~ limite -= (totalGalinha - resto);
		//~ qtdGalinhas = (totalGalinha - resto)/2;
	//~ }
	
	//~ if(totalVacas <= limite){
		//~ limite -= totalVacas;
		//~ qtdVacas = 0;
	//~ } else {
		//~ resto = totalVacas % limite;
		//~ limite -= (totalVacas - resto);
		//~ qtdVacas = (totalVacas - resto)/150;
	//~ }
	
	//~ if(totalCavalo <= limite){
		//~ limite -= totalCavalo;
		//~ qtdCavalos = 0;
	//~ } else {
		//~ resto = totalCavalo % limite;
		//~ limite -= (totalCavalo - resto);
		//~ qtdCavalos = (totalCavalo - resto)/250;
	//~ }
	
	//~ cout << qtdCavalos << endl
		 //~ << qtdVacas   << endl
		 //~ << qtdGalinhas;
	int carga , cavalo1 , cavalo2 , vaca1 , galinha1 , cavalo2 , vaca2 , galinha2;
	cin >> carga >> cavalo1 >> vaca1 >> galinha1;
	
	cavalo2 = cavalo1 * 250;
	vaca2 = vaca1 * 150;
	galinha2 = galinha1 * 2;
	
	if(carga >= galinha2){
		carga -= galinha2;
	}else {
		galinha2 = (carga / 2);
		carga = 0;
		galinha1 -= galinha2;
	}
	if(carga >= vaca2){
		carga -= vaca2;
		vaca1 = 0;
	}else {
		vaca2 = (carga / 150);
		carga = 0;
		vaca1 -= vaca2;
	}
	if(carga >= cavalo2){
		carga -= cavalo2;
		cavalo1 = 0;
	}else {
		cavalo2 = (carga/ 250);
		carga = 0;
		cavalo1 -= cavalo2;
	}
	
	cout << cavalo1 << endl << vaca1 << endl << galinha1;
	
		
	return 0;
}
