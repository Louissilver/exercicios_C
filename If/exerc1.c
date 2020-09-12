#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
//1.Escreva um algoritmo para ler um valor e escrever se é positivo ou negativo. Considere o valor zero como positivo.
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	if(num < 0){
		printf("\nO número é negativo!\n");
	}
	else{
		printf("\nO número é positivo!\n");
	}
	
	
	system("pause");
	return 0;
}
