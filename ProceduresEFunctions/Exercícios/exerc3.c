#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
3.Faça uma procedure que lê 50 valores inteiros e retorna o maior e o menor deles.  
*/
int Maior, Menor;

void LeNumeros()
{
	int num, menor, maior = 0, i;
	for(i = 0; i < 50; i++){
		printf("Digite o %dº número: ", i+1);
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
	printf("\n\nO maior número informado foi: %d\n", mai);
	printf("O menor número informado foi: %d\n", men);
}

main()
{
	setlocale(LC_ALL, "Portuguese");
	LeNumeros();
	EscreveNaTela(Maior, Menor);
	system("pause");
}


