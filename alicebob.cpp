#include <iostream>
using namespace std;
int main(){
	int somaA = 0, somaB = 0, tam;
	int t;
	cin >> t;
	int somaTA = 0, somaTB = 0;
	int vezes = 0;
	int num = 0;
	bool v = true;
	
	
while(t > 0){
	cin >> tam;
	int cand[tam];
	char x[tam];
	
	for(int i = 0; i<tam; i++){
		cin >> cand[i];
		x[i] = 'T';
	}
	while(v){
		num = 0;
		if(somaTA<=somaTB){
			vezes++;
			somaTA = 0;
			for(int i = 0; i<tam; i++){
				if((x[i]=='T') && (somaTA<=somaTB)){
					somaTA+=cand[i];
					somaA+=cand[i];
					x[i]='F';
				}
				
				if(x[i]=='F'){
					num++;
				}
		}
		}
		
		else if(somaTB<=somaTA) {
			vezes++;
			somaTB = 0;
			for(int i = tam-1; i>=0; i--){
				if((x[i]=='T') && (somaTB<=somaTA)){
					somaTB+=cand[i];
					somaB+=cand[i];
					x[i]='F';
					
				}
				
				if(x[i]=='F'){
					num++;
				}
		}
		}
		
		if(num == tam){
			v = false;
		}
	}
	
	cout << vezes << " " <<somaA << " " << somaB << endl;
	somaA = 0;
	somaB = 0;
	somaTA = 0; 
	somaTB = 0;
	vezes = 0;
	num = 0;
	v = true;
	t--;
}
	return 0;
}