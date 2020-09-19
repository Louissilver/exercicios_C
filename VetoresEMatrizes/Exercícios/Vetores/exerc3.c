#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
3.Faça um algoritmo que leia um vetor de 80 posições e encontre o menor valor. 
Mostre-o juntamente com seu número de ordem (posição).
*/
int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int X[80];
	int i;
	int menor = 0;
	int posicaoMenor = 0;
	
	for(i = 0; i < 80; i++)
	{
		printf("Digite um número: ");
		scanf("%d", &X[i]);
		printf("\n");
		if(i == 0){
			menor = X[i];
			posicaoMenor = i;
		}
		if(X[i] < menor){
			menor = X[i];
			posicaoMenor = i;
		}
	}
	
	printf("\nO menor número é %d e está em X[%d]\n", menor, posicaoMenor);
	
	//Para conferir os valores
	for(i = 0; i < 80; i++){
		printf("\n X[%d] = %d\n", i, X[i]);
	}
	
	
	system("pause");
}
