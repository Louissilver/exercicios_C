#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
/*
14.Fa�a um algoritmo para ler dois n�meros e imprimir o maior e o menor n�mero lido, 
acompanhados da mensagem Menor ou Maior, conforme o caso. 
Se iguais, imprimir os dois n�meros acompanhados da mensagem S�o iguais.
*/
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	
	printf("Informe o primeiro n�mero: ");
	scanf("%d", &num1);
	printf("Informe o segundo n�mero: ");
	scanf("%d", &num2);
	
	if(num1 > num2)
	{
		printf("\n%d � o maior!\n", num1);
	}
	else if(num2 > num1)
	{
		printf("\n%d � o maior!\n", num2);
	}
	else
	{
		printf("\n%d e %d s�o iguais!\n", num1, num2);
	}
	
	system("pause");
	return 0;
}
