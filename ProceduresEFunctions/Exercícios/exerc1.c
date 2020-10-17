#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
1.Construa um algoritmo que possua uma função que leia uma variável inteira e uma procedure que escreva esta variável.  
*/
int LeEntrada ()
{
	int num;
	printf("Digite um número: ");
	scanf("%d", &num);
	return num;
}

void EscreveNaTela(int n)
{
	printf("\n\nO número informado foi: %d\n", n);
}

main()
{
	setlocale(LC_ALL, "Portuguese");
	int x;
	x = LeEntrada();
	EscreveNaTela(x);
	system("pause");
}


