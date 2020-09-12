#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//1 - Faça um programa que escreva o seu nome numa só linha, utilizando apenas um printf.
int main(void) {
	setlocale(LC_ALL, "Portuguese");
	printf("Luís Fernando da Silveira");
	return 0;
}
