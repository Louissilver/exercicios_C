#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//4 - Faça um programa que escreva seu nome, seu código de aluno e curso, utilizando apenas um printf.
int main(void) {
	setlocale(LC_ALL, "Portuguese");
	printf("Nome: Luís Fernando da Silveira\nCódigo de aluno: 202020718\nCurso: Ciência da Computação");
	return(0);
}
