#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calculoA (int *num, int exp)
{
	*num = *num * exp;
}

void calculoB (int num, int exp)
{
	num = num * exp;
}

main()
{
	setlocale(LC_ALL, "Portuguese");
	int n = 3;
	int e = 2;
	calculoA(&n, e);
	calculoB(n, e);
	printf("%d\n", n);
	system("pause");
}


