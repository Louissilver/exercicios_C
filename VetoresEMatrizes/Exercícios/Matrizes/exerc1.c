#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
1.Faça um algoritmo que leia, mostre e calcule a soma dos elementos de uma matriz 7 X 9 de inteiros.
*/
int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[7][9] = {0};
	int i = 0;
	int j = 0;
	int soma = 0;
	
	for(i = 0; i < 7; i++){
		printf("Informe os valores da %dª linha\n", i+1);
		for(j = 0; j < 9; j++){
			printf("Coluna %d = ", j+1);
			scanf("%d", &matriz[i][j]);
			soma += matriz[i][j];
		}
		printf("\n");
	}
	
	for(i = 0; i < 7; i++){
		for(j = 0; j < 9; j++){
			printf("| %4d |", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\nA soma de todos os elementos da matriz é %d\n", soma);
	
	
	
	system("pause");
}
