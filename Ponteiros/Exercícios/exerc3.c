#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
3.	Implementar uma função que calcule a soma e o produto de dois valores inteiros. Essa função deve obedecer ao protótipo:

void soma_prod (int a, int b, int *s, int *p);
*/
void soma_prod (int a, int b, int *s, int *p)
{
	*s = a+b;
	*p = a*b;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int val1 = 5;
	int val2 = 10;
	int soma = 0;
	int produto = 0;
	soma_prod(val1, val2, &soma, &produto);
	printf("%d\n", soma);
	printf("%d\n", produto);
	system("pause");
}


