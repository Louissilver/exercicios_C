#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
3.Fa�a um algoritmo que leia um vetor de 80 posi��es e encontre o menor valor. 
Mostre-o juntamente com seu n�mero de ordem (posi��o).
*/
int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int X[80];
	int i;
	int menor = 0;
	int posicaoMenor = 0;
	
	for(i = 0; i < 80; i++)
	{
		printf("Digite um n�mero: ");
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
	
	printf("\nO menor n�mero � %d e est� em X[%d]\n", menor, posicaoMenor);
	
	//Para conferir os valores
	for(i = 0; i < 80; i++){
		printf("\n X[%d] = %d\n", i, X[i]);
	}
	
	
	system("pause");
}
