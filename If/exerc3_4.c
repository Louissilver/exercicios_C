#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
/*
3.Escreva um algoritmo para ler as notas das duas avalia��es de um aluno no semestre, 
calcular e escrever a m�dia semestral e a seguinte mensagem: 
'PARAB�NS! Voc� foi aprovado' somente se o aluno foi aprovado (considere 6.0 a nota m�nima para aprova��o). 
4.Acrescente ao exerc�cio acima a mensagem 'Voc� foi REPROVADO! Estude mais' caso a m�dia calculada seja menor que 6,0.
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
	else
	{
		printf("\nVoc� foi REPROVADO! Estude mais\n");
	}
	
	system("pause");
	return 0;
}
