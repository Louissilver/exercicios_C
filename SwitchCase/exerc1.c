#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	char opcao; 
	
	printf("Digite uma das tr�s op��es abaixo.");
	printf("\n[I]\n[A]\n[T]\n");
	scanf("%c", &opcao);
	
	switch(opcao)
	{
		case 'I':
			printf("\n\nA op��o escolhida foi Inclus�o");
			break;
		
		case 'A':
			printf("\n\nA op��o escolhida foi Altera��o");
			break;
			
		case 'T':
			printf("\n\nA op��o escolhida foi T�rmino");
			break;
		
		default:
			printf("\n\nEssa op��o n�o existe!");
			break;
	}
	printf("\n\n");
	
	system("PAUSE");
	return 0;
}
