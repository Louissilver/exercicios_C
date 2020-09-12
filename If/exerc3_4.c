#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
/*
3.Escreva um algoritmo para ler as notas das duas avaliações de um aluno no semestre, 
calcular e escrever a média semestral e a seguinte mensagem: 
'PARABÉNS! Você foi aprovado' somente se o aluno foi aprovado (considere 6.0 a nota mínima para aprovação). 
4.Acrescente ao exercício acima a mensagem 'Você foi REPROVADO! Estude mais' caso a média calculada seja menor que 6,0.
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
	else
	{
		printf("\nVocê foi REPROVADO! Estude mais\n");
	}
	
	system("pause");
	return 0;
}
