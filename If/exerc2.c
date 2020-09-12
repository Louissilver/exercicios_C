#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
/*
2.	Escreva um algoritmo para ler um valor numérico inteiro positivo ou negativo 
e apresentar o valor lido como sendo um valor positivo, 
ou seja, se o valor lido for menor ou igual a zero, ele deve ser multiplicado por -1.
*/
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	if(num < 0){
		num = num * -1;
	}
	printf("%d\n", num);
	
	system("pause");
	return 0;
}
