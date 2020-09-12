#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	char opcao; 
	
	printf("Qual sua entrada para o cinema?");
	printf("\n[E] ou [e] Estudante");
	printf("\n[A] ou [a] Aposentado");
	printf("\n[N] ou [n] Normal\n");
	printf("================\n");
	printf("R: ");
	scanf("%c", &opcao);
	printf("================\n");
	
	switch(opcao)
	{
		case 'E':
			printf("\n\nDesconto na entrada: 50%%");
			break;
			
		case 'e':
			printf("\n\nDesconto na entrada: 50%%");
			break;
		
		case 'A':
			printf("\n\nDesconto na entrada: 30%%");
			break;
			
		case 'a':
			printf("\n\nDesconto na entrada: 30%%");
			break;
			
		case 'N':
			printf("\n\nEntrada normal paga ingresso completo");
			break;
			
		case 'n':
			printf("\n\nEntrada normal paga ingresso completo");
			break;
		
		default:
			printf("\n\nEssa opção não existe!");
			break;
	}
	printf("\n\n");
	
	system("PAUSE");
	return 0;
}
