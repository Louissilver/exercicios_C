#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
2.Gerar (sem ler) e imprimir uma matriz de 10 linhas e 10 colunas cujos elementos são 1, 2, 3, ... , 99, 100.
*/
int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[10][10] = {0};
	int i = 0;
	int j = 0;
	int contador = 1;
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			matriz[i][j] = contador;
			contador++;
		}
	}
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			printf("| %3d |", matriz[i][j]);
		}
		printf("\n");
	}
	
	system("pause");
}
