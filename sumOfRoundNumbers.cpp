#include <iostream>
using namespace std;


int tam(char n[50]);

int main(){
	char numero[50];
	int qtd = 0, numRed = 0;
	cin >> qtd;
	
	while(qtd>0){
	cin >> numero;
	
	for(int i = 0; i<tam(numero); i++){
		if (numero[i] != '0'){
			numRed++;
		}
	}
	cout << numRed << endl;
	for(int i = 0; i<tam(numero); i++){
		if (numero[i] != '0'){
			cout << numero[i];
			for(int j = 1; j < tam(numero)-i; j++){
				cout << "0";
			}
			cout << " ";
		}
		
	}
	
	cout << "\n";
	qtd--;
	numRed = 0;
}
}

int tam(char n[50]){
	int size = 0, i = 0;
	while(n[i] != '\0'){
		size++;
		i++;
	}
	return size;
}