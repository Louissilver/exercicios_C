#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
2.Construa uma fun��o que verifique se um n�mero inteiro, passado como par�metro, � par, retornando  1 se verdadeiro e 2 caso contr�rio. 
*/
int LeEntrada()
{
	int num;
	printf("Digite um n�mero: ");
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
	printf("\n\nO resultado � ");
	if(num == 1){
		printf("%d (par)\n\n", num);
	} else{
		printf("%d (�mpar)\n\n", num);
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


