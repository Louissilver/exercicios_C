#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
4.Dada uma matriz M[1..6,1..8], criar um vetor C que contenha, 
em cada posição, a quantidade de elementos negativos da linha correspondente de M.
*/
int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[7][9] = {0};
	int vetor[7];
	int i = 0;
	int j = 0;
	int contador = 1;
	int negativos = 0;
	
	for(i = 1; i <= 6; i++){
		printf("Informe os valores da %dª linha\n", i);
		for(j = 1; j <= 8; j++){
			printf("Coluna %d = ", j);
			scanf("%d", &matriz[i][j]);
			if(matriz[i][j] < 0){
				negativos++;
			}
		}
		vetor[i] = negativos;
		negativos = 0;
		printf("\n");
	}
	
	for(i = 1; i <= 6; i++){
		for(j = 1; j <= 8; j++){
			printf("| %3d |", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nVetor de negativos:\n");
	for(i = 1; i <= 6; i++){
		printf("vetor[%d] = %d números negativos\n", i, vetor[i]);
	}
	
	system("pause");
}
