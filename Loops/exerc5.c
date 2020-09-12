#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//5.Escreva um algoritmo que imprima na tela os 10 primeiros números inteiros maiores que 100.
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	
	int i;
	
	for(i = 101; i <= 110; i++)
	{
		printf("%d\n", i);	
	} 
	
	system("PAUSE");
	return 0;
}
