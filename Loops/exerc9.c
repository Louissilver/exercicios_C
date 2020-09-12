#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*9.Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles. Mostre o resultado.*/
int main() {
	setlocale(LC_ALL, "Portuguese");
	int i = 0;
	int num = 0;
	int maior = 0;
	int menor = 0;
	
	for(i = 1; i <= 50; i ++){
		printf("Digite um número: ");
		scanf("%d", &num);
		printf("\n");
		
		if(i == 1){
			maior = num;
			menor = num;
		}
		if(num > maior){
			maior = num;
		}
		if(num < menor){
			menor = num;
		}
	}
	
	
	printf("O maior número informado foi %d e o menor foi %d\n", maior, menor);
		
	
	
	
	
	system("PAUSE");
	return 0;
}
