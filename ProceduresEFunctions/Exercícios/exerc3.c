#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
3.Fa�a uma procedure que l� 50 valores inteiros e retorna o maior e o menor deles.  
*/
int Maior, Menor;

void LeNumeros()
{
	int num, menor, maior = 0, i;
	for(i = 0; i < 50; i++){
		printf("Digite o %d� n�mero: ", i+1);
		scanf("%d", &num);
		if(i == 0){
			Menor = num;
		}
		if(num < Menor){
			menor = num;
		}
		if(num > maior){
			Maior = num;
		}
	}
}

void EscreveNaTela(int mai, int men)
{
	printf("\n\nO maior n�mero informado foi: %d\n", mai);
	printf("O menor n�mero informado foi: %d\n", men);
}

main()
{
	setlocale(LC_ALL, "Portuguese");
	LeNumeros();
	EscreveNaTela(Maior, Menor);
	system("pause");
}


