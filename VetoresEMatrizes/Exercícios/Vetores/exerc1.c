#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
1.Preencher um vetor X de 10 elementos (índices de 0 a 9) com o valor inteiro 30. Escrever o vetor X, após seu total preenchimento.
*/
int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int X[10];
	int i;
	
	for(i = 0; i < 10; i++)
	{
		X[i] = 30;
	}
	
	for(i = 0; i < 10; i++)
	{
		printf("X[%d] = %d \n", i, X[i]);
	}
	
	system("pause");
}
