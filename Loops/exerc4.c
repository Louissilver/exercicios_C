#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//4.Faça um programa que apresente os quadrados dos números inteiros de 15 a 200.
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	
	int i, quadrado = 0;
	
	for(i = 15; i <= 200; i++)
	{
		quadrado = i*i;
		printf("Quadrado de %d = %d\n", i, quadrado);	
	} 
	
	system("PAUSE");
	return 0;
}
