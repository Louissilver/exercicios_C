#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	char opcao; 
	
	printf("Informe seu estado civil.");
	printf("\n[C] Casado(a)");
	printf("\n[S] Solteiro(a)");
	printf("\n[D] Divorciado(a)");
	printf("\n[V] Viúvo(a)\n");
	printf("================\n");
	printf("R: ");
	scanf("%c", &opcao);
	printf("================\n");
	
	switch(opcao)
	{
		case 'C':
			printf("\nEstado civil: Casado(a)");
			break;
		
		case 'S':
			printf("\nEstado civil: Solteiro(a)");
			break;
			
		case 'D':
			printf("\nEstado civil: Divorciado(a)");
			break;
			
		case 'V':
			printf("\nEstado civil: Viúvo(a)");
			break;
		
		default:
			printf("\n\nEssa opção não existe!");
			break;
	}
	printf("\n\n");
	
	system("PAUSE");
	return 0;
}
