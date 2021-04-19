#include<stdio.h>
#include<locale.h>
#include <stdlib.h>

char perguntaSexo();
float perguntaNota();

int main(){
	setlocale(LC_ALL, "Portuguese");

	int quantidadeAlunas = 0;
	int quantidadeAlunos = 0;
	float notaTotalAlunas = 0;
	float notaTotalAlunos = 0;
	float mediaAlunos = 0;
	float mediaAlunas = 0;
	
	int contador = 1;
	while(true){
		printf("-----------aluno nº%i-----------", contador);
		char sexo = perguntaSexo();
		float nota = perguntaNota();
		
		if(nota < 0) break;
		if(sexo == 'm'){
			quantidadeAlunos ++;
			notaTotalAlunos = notaTotalAlunos + nota;
		} else {
			quantidadeAlunas ++;
			notaTotalAlunas = notaTotalAlunas + nota;
		}
		contador++;
		
		}
	
	mediaAlunas = notaTotalAlunas / quantidadeAlunas; 
	mediaAlunos = notaTotalAlunos / quantidadeAlunos;
	
	printf("A media dos alunos é igual a %.2lf e a media das alunas é %.2lf", mediaAlunos, mediaAlunas);
	
	system("PAUSE");	
	return 0;
}

char perguntaSexo(){
	char sexo;
	
	while(true){
		printf("Digite o seu sexo (m ou f): ");
		scanf("%c", &sexo);
		fflush(stdin);
		if(sexo == 'f' || sexo == 'm') break;
		else{
			printf("Sexo inválido, digite m para masculino e f para feminino.");
			}	
	}
	return sexo;
}

float perguntaNota(){
	float nota;
	
	while(true){
		printf("Digite a sua nota (0 a 10): ");
		scanf("%f", &nota);
		fflush(stdin);

		if(nota <= 10) {
			break;
		}
		else{
			printf("Nota inválida, digite um valor entre 0 e 10 no padrão do Brasil.");
		}	
	}
	return nota;
}

{
	for(int i = 0; i < linhas; i++);
	printf("\n");
}
