#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
1.Construa um algoritmo que possua uma fun��o que leia uma vari�vel inteira e uma procedure que escreva esta vari�vel.  
*/
int LeEntrada ()
{
	int num;
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	return num;
}

void EscreveNaTela(int n)
{
	printf("\n\nO n�mero informado foi: %d\n", n);
}

main()
{
	setlocale(LC_ALL, "Portuguese");
	int x;
	x = LeEntrada();
	EscreveNaTela(x);
	system("pause");
}


