#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
/*
5.	Escreva um algoritmo para ler as notas das duas avalia��es de um aluno no semestre, 
calcular e escrever a m�dia semestral. Se a m�dia for maior que 6.0 imprimir a mensagem "APROVADO". 
Se a m�dia for menor que 6.0 e maior que 3.0, imprimir a mensagem "EXAME", 
se a m�dia for menor que 3.0 imprimir a mensagem "REPROVADO".
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
		printf("\nPARAB�NS! Voc� foi aprovado\n");
	}
	else if(media < 6 && media >= 3)
	{
		printf("\nEXAME!\n");
	}
	else
	{
		printf("\nVoc� foi REPROVADO! Estude mais\n");
	}
	
	system("pause");
	return 0;
}
