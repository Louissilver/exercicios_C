#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*7.Fa�a um programa que leia o dia da semana (Domingo, Segunda, Ter�a, Quarta, Quinta, Sexta e Sabado). 
Esse dia deve ser um texto. Se for S�bado ou Domingo imprimir "Final de Semana", 
sen�o imprimir "Dia �til". Dica: Utilizar as fun��es de compara��o de string, no material da aula 5.*/
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char diaDaSemana[7];
	int saida = 1;
	
	do
	{
	printf("Informe um dia da semana, ou se quiser sair digite Sair.\n");
	scanf("%s", &diaDaSemana); 
		
	if(strcmp(diaDaSemana, "Domingo") == 0)	
		printf("Final de Semana\n");		
	else if(strcmp(diaDaSemana, "Segunda") == 0)	
		printf("Dia �til\n");
	else if(strcmp(diaDaSemana, "Ter�a") == 0)	
		printf("Dia �til\n");
	else if(strcmp(diaDaSemana, "Quarta") == 0)	
		printf("Dia �til\n");
	else if(strcmp(diaDaSemana, "Quinta") == 0)	
		printf("Dia �til\n");
	else if(strcmp(diaDaSemana, "Sexta") == 0)	
		printf("Dia �til\n");
	else if(strcmp(diaDaSemana, "Sabado") == 0)	
		printf("Final de Semana\n");
	else if (strcmp(diaDaSemana, "Sair") == 0)
		saida = 0;
	else
		printf("Esse dia n�o existe!!!\n");
	} while(saida != 0);
	
	
	
	system("PAUSE");
	return 0;
}
