#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
20.Escrever um algoritmo que lê 2 vetores X(10) e Y(10) e os escreve. Crie, a seguir, um vetor Z que seja:

a) a diferença entre X e Y (nos mesmos índices);
b) a soma entre X e Y (nos mesmos índices);
c) o produto entre X e Y (nos mesmos índices);

Escreva o vetor Z a cada cálculo.

*/
int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int X[10] = {0};
	int Y[10] = {0};
	int Z[10] = {0};
	int i;
	
	for(i = 0; i < 5; i++){
		printf("X[%d] = ", i);
		scanf("%d", &X[i]);
		
		printf("Y[%d] = ", i);
		scanf("%d", &Y[i]);
	}
	
	printf("\nVetor Z[] recebe a diferença de X[] e Y[]:\n");
	for(i = 0; i < 10; i++){
		Z[i] = X[i] - Y[i];
		printf("Z[%d] = X[%d] - Y[%d] = %d - %d = %d\n", i, i, i, X[i], Y[i], Z[i]);
	}
	
	printf("\nVetor Z[] recebe a soma de X[] e Y[]:\n");
	for(i = 0; i < 10; i++){
		Z[i] = X[i] + Y[i];
		printf("Z[%d] = X[%d] + Y[%d] = %d + %d = %d\n", i, i, i, X[i], Y[i], Z[i]);
	}
	
	printf("\nVetor Z[] recebe o produto de X[] e Y[]:\n");
	for(i = 0; i < 10; i++){
		Z[i] = X[i] * Y[i];
		printf("Z[%d] = X[%d] * Y[%d] = %d * %d = %d\n", i, i, i, X[i], Y[i], Z[i]);
	}
	
	
	
	
	system("pause");
}
