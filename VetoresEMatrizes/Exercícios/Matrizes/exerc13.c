#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
13.Escreva um algoritmo que lê uma matriz M(5,5) e calcula as somas:
a)	da linha 4 de M
b)	da coluna 2 de M
c)	da diagonal principal
d)	todos os elementos da matriz M
Escrever essas somas e a matriz.
*/
int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[6][6] = {0};
	int i = 1;
	int j = 1;
	int somaLinhaQuatro = 0;
	int somaColunaDois = 0;
	int somaDiagonalPrincipal = 0;
	int somaGeral = 0;
	
	for(i = 1; i <= 5; i++){
		printf("Informe os valores da %dª linha\n", i);
		for(j = 1; j <= 5; j++){
			printf("Coluna %d = ", j);
			scanf("%d", &matriz[i][j]);
			if(i == 4){
				somaLinhaQuatro += matriz[i][j];
			}
			if(j == 2){
				somaColunaDois += matriz[i][j];
			}
			if(i == j){
				somaDiagonalPrincipal += matriz[i][j];
			}
			somaGeral += matriz[i][j];
		}
		printf("\n");
	}
	
	for(i = 1; i <= 5; i++){
		for(j = 1; j <= 5; j++){
			printf("| %3d |", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\nSoma dos elementos da linha 4 da matriz = %d", somaLinhaQuatro);
	printf("\nSoma dos elementos da coluna 2 da matriz = %d", somaColunaDois);
	printf("\nSoma dos elementos da diagonal principal da matriz = %d", somaDiagonalPrincipal);
	printf("\nSoma dos elementos da matriz = %d\n", somaGeral);
	
	system("pause");
}
