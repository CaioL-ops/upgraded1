#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
 
float pedirAltura();

int main(){
	setlocale(LC_ALL, "Portuguese");
		
	int contador = 0;
	float maiorAltura = 0;
	while(contador < 10){
		float altura = pedirAltura();
		if(altura > maiorAltura) maiorAltura = altura;	
		contador++;
		}
	
	printf("A maior altura que você digitou é: %.2lf", maiorAltura);
	
	system("PAUSE");
	return 0;
}

float pedirAltura(){
	float altura = 0;
	
	while(true){
		printf("Digite uma altura (em formato brasileiro): ");
		scanf("%f", &altura);
		fflush(stdin);
		if(altura > 3 || altura < 0.50) {
			printf("Altura inválida!");
			}
		else break;
	}
	return altura;
}

{
	printf("\n");
}
