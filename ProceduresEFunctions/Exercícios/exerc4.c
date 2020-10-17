#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
4.Faça uma procedure que recebe, por parâmetro, um valor N e calcula e escreve a tabuada de 1 até N. Mostre a tabuada na forma:
1 x N = N 
2 x N = 2N 
... 
N x N = N2 
  
*/
int LeEntrada ()
{
	int num;
	printf("Digite um número: ");
	scanf("%d", &num);
	return num;
}

void EscreveTabuada(int n)
{
	int i;
	for(i = 1; i <= n; i++){
		printf("%d X %d = %d\n", i, n, i*n);
	}
}

main()
{
	setlocale(LC_ALL, "Portuguese");
	int x;
	x = LeEntrada();
	EscreveTabuada(x);
	system("pause");
}


