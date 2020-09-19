#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
24.Faça um algoritmo que leia um conjunto de 30 valores numéricos inteiros e distribua-os entre dois vetores, 
separando os números positivos dos negativos. 
Os vetores devem ter 30 posições cada. Mostre os vetores ao final do processamento.
*/
int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int geral[30] = {0};
	int positivos[30] = {0};
	int negativos[30] = {0};
	int i;
	int posicaoPositivo = 0;
	int posicaoNegativo = 0;
	
	for(i = 0; i < 30; i++){
		printf("geral[%d] = ", i);
		scanf("%d", &geral[i]);
		if(geral[i] >= 0){
			positivos[posicaoPositivo] = geral[i];
			posicaoPositivo++;
		} else{
			negativos[posicaoNegativo] = geral[i];
			posicaoNegativo++;
		}
	}
	
	printf("\nVetor geral:\n");
	for(i = 0; i < 30; i++){
		printf("geral[%d] = %d\n", i, geral[i]);
	}
	
	printf("\nVetor de positivos:\n");
	for(i = 0; i < 30; i++){
		printf("positivos[%d] = %d\n", i, positivos[i]);
	}
	
	printf("\nVetor de negativos:\n");
	for(i = 0; i < 30; i++){
		printf("negativos[%d] = %d\n", i, negativos[i]);
	}
	
	
	
	
	system("pause");
}
