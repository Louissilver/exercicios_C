#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[3][3] = {0};
	int i = 0;
	int j = 0;
	
	for(i = 0; i < 3; i++){
		printf("Informe os valores da %dª linha\n", i+1);
		for(j = 0; j < 3; j++){
			printf("Coluna %d = ", j+1);
			scanf("%d", &matriz[i][j]);
			printf("\n");
		}
		printf("\n");
	}
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("| %d |", matriz[i][j]);
		}
		printf("\n");
	}
	
	system("pause");
}
