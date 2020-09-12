#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	char opcao; 
	
	printf("Digite uma das três opções abaixo.");
	printf("\n[I]\n[A]\n[T]\n");
	scanf("%c", &opcao);
	
	switch(opcao)
	{
		case 'I':
			printf("\n\nA opção escolhida foi Inclusão");
			break;
		
		case 'A':
			printf("\n\nA opção escolhida foi Alteração");
			break;
			
		case 'T':
			printf("\n\nA opção escolhida foi Término");
			break;
		
		default:
			printf("\n\nEssa opção não existe!");
			break;
	}
	printf("\n\n");
	
	system("PAUSE");
	return 0;
}
