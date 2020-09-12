#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//2.Escreva um algoritmo para ler um número inteiro e escrevê-lo na tela 10 vezes.
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num, i;
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	
	for(i = 1; i <= 10; i++)
	{
		printf("%d - %d\n", i, num);	
	} 
	
	system("PAUSE");
	return 0;
}
