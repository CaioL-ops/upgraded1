#include<stdio.h>
#include<locale.h>
#include<stdlib.h>


int main(){
	int numero, fatorialDoNumero;
	
	setlocale(LC_ALL, "Portuguese");
	printf("-------------------------------");
	printf("Programa de calcular o fatorial");
	printf("-------------------------------");
	printf("Digite o n�mero: ");
	scanf("%i", &numero);
	
	fatorialDoNumero = 1;
	for(int contador = 0; contador < numero ; contador++){
		fatorialDoNumero = fatorialDoNumero * (numero - contador);
	}
	
	
	printf("O fatorial do n�mero que voc� digitou � %i", fatorialDoNumero);
	
	
	system("PAUSE");	
	return 0;
}
{
	printf("\n");
}
