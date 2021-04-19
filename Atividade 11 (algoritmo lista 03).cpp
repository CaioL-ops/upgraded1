#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int pedeNotaFinalista(char nomeFinalista[50]);

int main(){
	setlocale(LC_ALL, "Portuguese");
	char finalista1[50];
	char finalista2[50];
	char finalista3[50];
	int pontosFinalista1 = 0;
	int pontosFinalista2 = 0;
	int pontosFinalista3 = 0;
	int quantidadeJuizes;
	
	printf("Digite os nomes dos tr�s finalistas: ");
	fgets(finalista1, 50, stdin);
	fgets(finalista2, 50, stdin);
	fgets(finalista3, 50, stdin);
	
	printf("Digite a quantidade de ju�zes: ");
	scanf("%i", &quantidadeJuizes);
	fflush(stdin);
	
	int contador = 1;
	for(int i = 0; i < quantidadeJuizes; i++){

		printf("---------ju�z n�%i---------", contador);
		
		pontosFinalista1 = pontosFinalista1 + pedeNotaFinalista(finalista1);
		pontosFinalista2 = pontosFinalista2 + pedeNotaFinalista(finalista2);
		pontosFinalista3 = pontosFinalista3 + pedeNotaFinalista(finalista3);
		contador ++;
	}
	
	printf("--------Pontua��o--------"); 
	printf("%s - %i", finalista1, pontosFinalista1); 
	printf("%s - %i", finalista2, pontosFinalista2); 
	printf("%s - %i", finalista3, pontosFinalista3); 
	
	system("PAUSE");	
	return 0;
}

{
	for(int i = 0; i < numeroDeLinhas; i++){
		printf("\n");
	}
}



int pedeNotaFinalista(char nomeFinalista[50]){
	int notaFinalista = 0;
	while(true){
		printf("Digite a nota do %s: ", nomeFinalista);
		scanf("%i", &notaFinalista);
		fflush(stdin);
		if(notaFinalista > 0 && notaFinalista <=100) break;
		else{
			printf("Nota digitada � inv�lida, tente novamente...");	
			
		}
	}
	
	return notaFinalista;		
	
}
