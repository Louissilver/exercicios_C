#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*10.Escreva um algoritmo para repetir a leitura de um n�mero enquanto o valor fornecido for diferente de 0. 
Para cada n�mero fornecido, imprimir se ele � NEGATIVO ou POSITIVO. 
Quando o n�mero 0 for fornecido a repeti��o deve ser encerrada sem imprimir mensagem alguma.*/
int main() {
	setlocale(LC_ALL, "Portuguese");
	int num = 0;
	
	do{
		printf("Digite um n�mero: ");
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
