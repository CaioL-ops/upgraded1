#include<stdio.h>
#include<locale.h>
#include <stdlib.h>

int maiorIdade
float porcentagem
char pedeSexo();
char pedeCorDosOlhos();
char pedeCorDosCabelos();
int pedeIdade();

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int contadorDeEntrevistados = 0;
	int maiorIdade = 0;  
	int quantidade; // essa variavel representa a quantidade de indivíduos do sexo feminino cuja idade 
	//está entre 18 e 35 anos que tenham olhos verdes e cabelos loiros.
	
	while(true){
		printf("-----entrevistado nº%i--------\n", contadorDeEntrevistados + 1);

		char sexo = pedeSexo();
		char olhos = pedeCorDosOlhos();
		char cabelos = pedeCorDosCabelos();
		int idade = pedeIdade();
		
		if(idade < 0) break; //para que quando um cidadão com idade negativa for informada o programa para de pedir
		// por usuários
		if(idade > maiorIdade) maiorIdade = idade;
		if(estaDentroDasCaracteristicas(sexo, olhos, cabelos, idade)) quantidade++; 
		contadorDeEntrevistados++;
	}
	
	imprimeAMaiorIdadeEAPorcentagem(maiorIdade, calculaPorcentagem(contadorDeEntrevistados, quantidade));
		
	system("PAUSE");	
	return 0;
}

bool estaDentroDasCaracteristicas(char sexo, char olhos,char cabelos, int idade ){
	return sexo == 'f' && olhos == 'v' && cabelos == 'l' && idade <= 35 && idade >= 18; 
}

float calculaPorcentagem(int total, int fracao){
	return (fracao * 100) / total;
}

int maiorIdade
float porcentagem{
	printf("\n\nA maior idade encontrada é: %i\n\n", maiorIdade);
	printf("A porcentagem de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos que tenham olhos verdes e cabelos loiros é %.2f%% \n\n", porcentagem);
	printf("\n");
}

char pedeSexo(){
	char sexo;

	while(true){
		printf("Digite o sexo: ");
		scanf("%c", &sexo);
		fflush(stdin);
		
		if(sexo == 'f' || sexo == 'm') break;
		else {
			printf("Sexo inválido, digite m para masculino ou f para feminino...");
			
		}
	}

	return sexo;
}

char pedeCorDosOlhos(){
	char corDosOlhos;
	while(true){
		printf("Digite a cor dos olhos: ");
		scanf("%c", &corDosOlhos);
		fflush(stdin);
		
		if(corDosOlhos == 'a' || corDosOlhos == 'v' || corDosOlhos == 'c' || corDosOlhos == 'p') break;
		else {
			printf("Cor dos olhos inválida, digite a para azuis, v para verdes, p para pretos ou c para castanhos");
		}
	}
	
	return corDosOlhos;
}

char pedeCorDosCabelos(){
	char corDosCabelos;
	while(true){
		printf("Digite a cor dos cabelos: ");
		scanf("%c", &corDosCabelos);
		fflush(stdin);
		
		if(corDosCabelos == 'l' || corDosCabelos == 'c' || corDosCabelos == 'p') break;
		else {
			printf("Cor dos cabelos inválida, digite l para loiros, c para castanhos ou p para pretos");
		}
	}
	
	return corDosCabelos;
}

int pedeIdade(){
	int idade;
	while(true){
		printf("Digite a idade (em anos): ");
		scanf("%i", &idade);
		fflush(stdin);
		
		if(idade < 120) break;
		else {
			printf("Ninguém tem mais de 120 anos!");
		}
	}
	return idade;
}

