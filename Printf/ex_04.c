#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//4 - Fa�a um programa que escreva seu nome, seu c�digo de aluno e curso, utilizando apenas um printf.
int main(void) {
	setlocale(LC_ALL, "Portuguese");
	printf("Nome: Lu�s Fernando da Silveira\nC�digo de aluno: 202020718\nCurso: Ci�ncia da Computa��o");
	return(0);
}
