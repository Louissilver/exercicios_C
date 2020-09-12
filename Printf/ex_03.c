#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//3 - Faça um programa que escreva, em linhas diferentes, o seu nome e o sobrenome, utilizando mais de um printf.
int main(void) {
	setlocale(LC_ALL, "Portuguese");
	printf("Luís\n");
	printf("Fernando\n");
	printf("da\n");
	printf("Silveira");
	
}
