#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//1 - Fa�a um programa que escreva o seu nome numa s� linha, utilizando apenas um printf.
int main(void) {
	setlocale(LC_ALL, "Portuguese");
	printf("Lu�s Fernando da Silveira");
	return 0;
}
