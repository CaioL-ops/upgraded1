#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	int numero, fatorialDoNumero;
	
	setlocale(LC_ALL, "Portuguese");
	printf("-------------------------------");
	printf("Programa de calcular o fatorial");
	printf("-------------------------------");
	printf("Digite o número: ");
	scanf("%i", &numero);
	
	int contador = 0;
	fatorialDoNumero = 1;
	while(contador < numero){
		fatorialDoNumero = fatorialDoNumero * (numero - contador);
		
		contador++;
	}
	
	
	printf("O fatorial do número que você digitou é %i", fatorialDoNumero);
	
	
	system("PAUSE");	
	return 0;
}

{
	printf("\n");
}
