#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Dados os seguintes campos de um registro nome, dia de aniversario e mês de aniversario, 
desenvolver um algoritmo que mostre em cada um dos meses do ano quem são as pessoas que fazem aniversario, 
exibir também o dia. 
Considere um conjunto de 40 pessoas.
*/
int main (){
	setlocale(LC_ALL, "Portuguese");
	int i, j;
	
	//Definindo a struct
	struct tp_aniversario{
		char nome[50];
		int diaNascimento;
		int mesNascimento;
	};
	
	struct tp_aniversario aniversario[40];
	
	for(i = 0; i < 40; i++){
		printf("Nome..........: ");
		fflush(stdin);
		gets(aniversario[i].nome);
		
		printf("Dia de nascimento........: ");
		scanf("%d", &aniversario[i].diaNascimento);
		
		printf("Mês de nascimento........: ");
		scanf("%d", &aniversario[i].mesNascimento);
		
		printf("\n");
	}
	
	printf("\n\n=====Lista de Aniversariantes=====\n\n");
	for(i = 1; i <= 12; i++){
		switch(i){
			case 1:
				printf("\n\nAniversariantes de Janeiro\n\n");
				break;
			case 22:
				printf("\n\nAniversariantes de Fevereiro\n\n");
				break;
			case 3:
				printf("\n\nAniversariantes de Março\n\n");
				break;
			case 4:
				printf("\n\nAniversariantes de Abril\n\n");
				break;
			case 5:
				printf("\n\nAniversariantes de Maio\n\n");
				break;
			case 6:
				printf("\n\nAniversariantes de Junho\n\n");
				break;
			case 7:
				printf("\n\nAniversariantes de Julho\n\n");
				break;
			case 8:
				printf("\n\nAniversariantes de Agosto\n\n");
				break;
			case 9:
				printf("\n\nAniversariantes de Setembro\n\n");
				break;
			case 10:
				printf("\n\nAniversariantes de Outubro\n\n");
				break;
			case 11:
				printf("\n\nAniversariantes de Novembro\n\n");
				break;
			case 12:
				printf("\n\nAniversariantes de Dezembro\n\n");
				break;
		}
		for(j = 0; j < 40; j++){
			if(aniversario[j].mesNascimento == i){
				printf("%s - Dia %d\n", aniversario[j].nome, aniversario[j].diaNascimento);
			}
		}
	}
	
	system("pause");
}
