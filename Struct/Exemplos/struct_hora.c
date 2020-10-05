#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	//Definindo a struct
	struct horario{
		int horas;
		int minutos;
		int segundos;
	};
	
	struct horario teste[5] = 
	{{10, 20, 30}, 
	{20, 30, 40}, 
	{30, 40, 50}, 
	{40, 50, 60}, 
	{50, 60, 70}};
	
	int i;
	for(i = 0; i < 5; i++){
		printf("%d:%d:%d\n", teste[i].horas, teste[i].minutos, teste[i].segundos);
	}
	
	/*
	//Iniciando a struct
	struct horario agora;
	
	printf("\n=========== Cadastro de horário ============\n\n\n");
	
	printf("Informe a hora.......: ");
	scanf("%d", &agora.horas);
	
	printf("Informe os minutos...: ");
	scanf("%d", &agora.minutos);
	
	printf("Informe os segundos..: ");
	scanf("%d", &agora.segundos);
	
	printf("\n\n%d:%d:%d\n\n", agora.horas, agora.minutos, agora.segundos);
	*/
	
	
	
	system("pause");
}
