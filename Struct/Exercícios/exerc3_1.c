#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
3) Para os programas abaixo defina uma estrutura p/ armazenar um horário composto de hora, minuto, segundo.
3.1) Escrever um programa para ler 5 horários. Escrever cada um deles no formato HH.MM.SS.
*/
int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	struct tp_horario{
		int horas;
		int minutos;
		int segundos;
	};
	
	struct tp_horario horario[5];
	
	for(i = 0; i < 5; i++){
		printf("Hora........: ");
		scanf("%d", &horario[i].horas);
		
		printf("Minuto......: ");
		scanf("%d", &horario[i].minutos);
		
		printf("Segundo.....: ");
		scanf("%d", &horario[i].segundos);
		
		printf("\n");
	}
	
	for(i = 0; i < 5; i++){
		printf("%d.%d.%d\n", horario[i].horas, horario[i].minutos, horario[i].segundos);
	}
	
	system("pause");
}
