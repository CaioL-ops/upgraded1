#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int pedirFruta();

int main(){
	setlocale(LC_ALL, "Portuguese");
	int quantidadeAbacaxi = 0;
	int quantidadeMaca = 0;
	int quantidadePera = 0;
	
	
	while(true){
		int frutaId = pedirFruta();
		if(frutaId == 0) break;
		switch (frutaId){
			case 1: quantidadeAbacaxi++; break;
			case 2: quantidadeMaca++; break;
			case 3: quantidadePera++; break;
			}
	}
	
	printf("Você comprou %i abacaxi(s), %i maçã(s) e %i pera(s)", quantidadeAbacaxi, quantidadeMaca, quantidadePera);
	
	system("PAUSE");	
	return 0;
}

int pedirFruta(){
	
	int fruta;
	while(true){
		printf("Digite o número da fruta: ");
		scanf("%i", &fruta);
		if(fruta < 4 && fruta >= 0 ) break;
		else {
			printf("Fruta indisponível, tente novamente...");
		}
	}
	
	return fruta;
}

void pulaLinhas(int numeroDeLinhas){
	for(int i = 0; i < numeroDeLinhas; i++){
		printf("\n");
	}
}
