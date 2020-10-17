#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
2.Construa uma função que verifique se um número inteiro, passado como parâmetro, é par, retornando  1 se verdadeiro e 2 caso contrário. 
*/
int LeEntrada()
{
	int num;
	printf("Digite um número: ");
	scanf("%d", &num);
	return num;
}

int VerificaSeEPar(num)
{
	if(num%2==0){
		return 1;
	} else{
		return 2;
	}
}

void EscreveNaTela(int num)
{
	printf("\n\nO resultado é ");
	if(num == 1){
		printf("%d (par)\n\n", num);
	} else{
		printf("%d (ímpar)\n\n", num);
	}
}

main()
{
	setlocale(LC_ALL, "Portuguese");
	int numeroInformado, ParOuImpar;
	numeroInformado = LeEntrada();
	ParOuImpar = VerificaSeEPar(numeroInformado);
	EscreveNaTela(ParOuImpar);
	system("pause");
}


