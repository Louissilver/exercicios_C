#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//2 - Fa�a um programa que escreva, em linhas diferentes, o seu nome e o sobrenome, utilizando apenas um printf.
int main(void) {
	setlocale(LC_ALL, "Portuguese");
	printf("Lu�s\nFernando\nda\nSilveira");
	return 0;
}
