#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
3.Criar e imprimir a matriz identidade MI[1..7,1..7] 
em que todos os elementos da diagonal principal são iguais a 1 e os demais são nulos.
*/
int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[8][8] = {0};
	int i = 0;
	int j = 0;
	
	for(i = 1; i < 8; i++){
		for(j = 1; j < 8; j++){
			if(j == i){
				matriz[i][j] = 1;
			}
		}
	}
	
	printf("\n\n***********************************");
	printf("\n        MATRIZ IDENTIDADE");
	printf("\n***********************************\n\n");
	for(i = 1; i < 8; i++){
		for(j = 1; j < 8; j++){
			printf("| %3d |", matriz[i][j]);
		}
		printf("\n");
	}
	
	system("pause");
}
