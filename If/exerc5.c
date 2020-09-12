#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
/*
5.	Escreva um algoritmo para ler as notas das duas avaliações de um aluno no semestre, 
calcular e escrever a média semestral. Se a média for maior que 6.0 imprimir a mensagem "APROVADO". 
Se a média for menor que 6.0 e maior que 3.0, imprimir a mensagem "EXAME", 
se a média for menor que 3.0 imprimir a mensagem "REPROVADO".
*/
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	float media = 0;
	
	printf("Informe a primeira nota: ");
	scanf("%d", &num1);
	printf("Informe a primeira nota: ");
	scanf("%d", &num2);
	
	media = (float) ((num1+num2)/2);
	
	if(media >= 6)
	{
		printf("\nPARABÉNS! Você foi aprovado\n");
	}
	else if(media < 6 && media >= 3)
	{
		printf("\nEXAME!\n");
	}
	else
	{
		printf("\nVocê foi REPROVADO! Estude mais\n");
	}
	
	system("pause");
	return 0;
}
