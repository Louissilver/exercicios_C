#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
4. Uma pessoa cadastrou um conjunto de 15 registro contendo o nome da loja, 
telefone e preço de um eletrodoméstico. Desenvolver um algoritmo que permita exibir qual foi a média dos preços.
*/
int main (){
		setlocale(LC_ALL, "Portuguese");
	
	int i;
	float soma = 0;
	float media = 0;
	
	struct tp_compra{
		char nomeDaLoja[50];
		int telefoneDaLoja;
		float precoProduto;
	};
	
	struct tp_compra compra[15];
	
	for(i = 0; i < 15; i++){
		printf("Nome da Loja........: ");
		fflush(stdin);
		gets(compra[i].nomeDaLoja);
		
		printf("Telefone da Loja....: ");
		scanf("%d", &compra[i].telefoneDaLoja);
		
		printf("Preço do Produto....: ");
		scanf("%f", &compra[i].precoProduto);
		
		soma += compra[i].precoProduto;
		
		printf("\n");
	}
	
	media = soma/15;
	
	printf("\n\nA média dos preços dos eletrodomesticos saiu em torno de R$ %.2f\n\n", media);
	
	system("pause");
}
