#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int pedeIdentificacao();
float pedePreco();
char perguntaSeTemMaisUmProduto();

int main(){
	float preco = 0.0;
	int idProduto = 0;
	char temMaisAlgumProduto;
	
	setlocale(LC_ALL, "Portuguese");
	
	int contador = 1;
	while(true){
		printf("--------%i° produto--------\n\n", contador);
		idProduto = pedeIdentificacao();
		preco = pedePreco();
		printf("\n\n");
		printf("O produto de id %i tem agora um preço de %.2lf\n", idProduto, preco * 1.10);
		temMaisAlgumProduto = perguntaSeTemMaisUmProduto();
		if(temMaisAlgumProduto == 'n') break;
		contador++;
		printf("\n\n");
	}
	
	printf("Programa encerrado...\n");
	system("PAUSE");	
	return 0;
}

int pedeIdentificacao(){
	int identificacao = 0;
	printf("Digite a identificação do produto: ");
	scanf("%i", &identificacao);
	fflush(stdin);
	return identificacao;
}

float pedePreco(){
	float preco = 0.0;
	while(true){
		printf("Digite a o preço do produto: ");
		scanf("%f", &preco);
		fflush(stdin);
		if(preco > 0) break;
		else printf("Preço inválido, tente novamente...\n");
	}
	return preco;
}

char perguntaSeTemMaisUmProduto(){
	char temMaisUmProduto;
	while(true){
		printf("Tem mais algum produto? (s -> sim, n -> não): ");
		scanf("%c", &temMaisUmProduto);
		fflush(stdin);
		if(temMaisUmProduto == 's' || temMaisUmProduto == 'n'){
			break;
		} 
		printf("O valor digitado é inválido, tente novamente...\n");
	}
	return temMaisUmProduto;
}
