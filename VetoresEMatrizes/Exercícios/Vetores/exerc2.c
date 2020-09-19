#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
2.Preencher um vetor A de 10 elementos (índices de 0 a 9) com os números inteiros 10,20,30,40,50,...,100. 
Escrever o vetor A após o seu total preenchimento.
*/
int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int X[10];
	int i;
	int num = 0;
	
	for(i = 0; i < 10; i++)
	{
		num = num + 10;
		X[i] = num;
	}
	
	for(i = 0; i < 10; i++)
	{
		printf("X[%d] = %d \n", i, X[i]);
	}
	
	system("pause");
}
