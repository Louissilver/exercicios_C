#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*10.Escreva um algoritmo para repetir a leitura de um número enquanto o valor fornecido for diferente de 0. 
Para cada número fornecido, imprimir se ele é NEGATIVO ou POSITIVO. 
Quando o número 0 for fornecido a repetição deve ser encerrada sem imprimir mensagem alguma.*/
int main() {
	setlocale(LC_ALL, "Portuguese");
	int num = 0;
	
	do{
		printf("Digite um número: ");
		scanf("%d", &num);
		if(num > 0){
			printf("POSITIVO\n\n");
		} 
		else if(num < 0){
			printf("NEGATIVO\n\n");
		}
	} while(num != 0);
		
	system("PAUSE");
	return 0;
}
