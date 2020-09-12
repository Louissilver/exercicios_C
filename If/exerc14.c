#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
/*
14.Faça um algoritmo para ler dois números e imprimir o maior e o menor número lido, 
acompanhados da mensagem Menor ou Maior, conforme o caso. 
Se iguais, imprimir os dois números acompanhados da mensagem São iguais.
*/
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	
	printf("Informe o primeiro número: ");
	scanf("%d", &num1);
	printf("Informe o segundo número: ");
	scanf("%d", &num2);
	
	if(num1 > num2)
	{
		printf("\n%d é o maior!\n", num1);
	}
	else if(num2 > num1)
	{
		printf("\n%d é o maior!\n", num2);
	}
	else
	{
		printf("\n%d e %d são iguais!\n", num1, num2);
	}
	
	system("pause");
	return 0;
}
