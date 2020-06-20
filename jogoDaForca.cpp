#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int tentativas = 6, tam = 0, i = 0, acertos = 0;
	bool acerto = false;
	char palavra[50];
	char secreta[30];
	char letra[1];
	
	cout << "Digite sua palavra: " ;
	cin >> palavra;
	
	system("cls");
	
	
	while(palavra[i] != '\0'){
		tam++;
		i++;
	}
	
	for(int i = 0; i < 30; i++){
		secreta[i] = '_';
	}
	
	
	while((tentativas>0) && (acertos != tam)){
		system("cls");
		cout << "Tentativas: " << tentativas << endl;
		for(int i = 0; i<tam; i++){
			cout << secreta[i] << " ";
		}
		
		cout << endl << endl << "Digite uma letra: ";
		cin >> letra[0];
		
		for(int z = 0; z < tam; z++){
			if(letra[0] == palavra[z]){
				secreta[z] = letra[0];
				acertos++;
				acerto = true;
			}
		}
		
		if(!acerto){	
			tentativas--;
		}
		else {
			acerto = false;
		}
		
		
	}
	
	if(acertos == tam){
		cout << "Parabens, voce ganhou o jogo!";
	}
	else {
		cout << "Perdeu, que pena!";
	}
	
	
	
	
return 0;

}