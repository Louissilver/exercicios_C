#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	//Definindo a struct
	struct ficha_aluno{
		char Nome[40];
		int CodigoMatricula;
		float Nota1;
		float Nota2;
		float Media;
	};
	
	//Iniciando a struct
	struct ficha_aluno aluno;
	
	printf("\n=========== Cadastro de aluno ============\n\n\n");
	
	printf("Nome do aluno: ");
	fgets(aluno.Nome, 40, stdin);
	
	printf("Matrícula do aluno: ");
	scanf("%d", &aluno.CodigoMatricula);
	
	printf("Nota 1 do aluno: ");
	scanf("%f", &aluno.Nota1);
	
	printf("Nota 2 do aluno: ");
	scanf("%f", &aluno.Nota2);
	
	aluno.Media = (aluno.Nota1 + aluno.Nota2) / 2;
	
	printf("\n\n%s%d\nNota 1: %.2f\nNota 2: %.2f\nMédia final: %.2f\n\n", aluno.Nome, aluno.CodigoMatricula, aluno.Nota1, aluno.Nota2, aluno.Media);
	system("pause");
}
