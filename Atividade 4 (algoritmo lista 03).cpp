#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int pedeN();

int main(){
	int n = 0;
	float h = 0;
		
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o n�mero: ");
	scanf("%i", &n);

	int contador = 1;

	while(contador <= n){
		h = h + (1.0/contador);
		contador++;
		}
	
	printf("\nO valor de h �: %.4lf\n", h);
	system("PAUSE");	
	return 0;
}
