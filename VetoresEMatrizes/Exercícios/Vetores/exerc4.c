#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
4-Preencher um vetor B de 10 elementos com o número 10 se o índice do elemento for ímpar, 
e com o número 20 se for par. Escrever o vetor B após o seu total preenchimento.
*/
int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int B[10];
	int i;
	
	for(i = 0; i < 10; i++)
	{
		//PAR
		if(i%2 == 0){
			B[i] = 20;
		} else{
			B[i] = 10;
		}
		
	}
	
	for(i = 0; i < 10; i++){
		printf("B[%d] = %d\n", i, B[i]);
	}
	
	
	system("pause");
}
