#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//5 - Fa�a um programa que escreva seu nome, endere�o e telefone, utilizando mais de um printf.
int main(void) {
	setlocale(LC_ALL, "Portuguese");
	printf("Nome: Lu�s Fernando da Silveira\n");
	printf("Endere�o: Av. 14 de julho, 1014 - Bairro Das Rosas, Est�ncia Velha - RS\n");
	printf("Telefone: (51) 9 8493 5515");
	return(0);
}
