#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
5.Escreva um algoritmo que leia e mostre um vetor de 20 elementos inteiros. 
A seguir, conte quantos valores pares existem no vetor.
*/
int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int B[10];
	int i;
	int contadorDePares = 0;
	
	for(i = 0; i < 20; i++)
	{
		printf("Digite um número: ");
		scanf("%d", &B[i]);
		if(B[i]%2 == 0){
			contadorDePares++;
		}
	}
	
	printf("\nA quantidade de elementos pares é %d\n", contadorDePares);
	
	//Para conferir os elementos pares
	printf("\nVetor completo:\n");
	for(i = 0; i < 20; i++){
		printf("B[%d] = %d\n", i, B[i]);
	}
	
	printf("\nElementos pares:\n");
	for(i = 0; i < 20; i++){
		if(B[i]%2 == 0){
			printf("B[%d] = %d\n", i, B[i]);
		}
	}
	
	
	system("pause");
}
