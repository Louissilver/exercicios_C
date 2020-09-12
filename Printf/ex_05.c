#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//5 - Faça um programa que escreva seu nome, endereço e telefone, utilizando mais de um printf.
int main(void) {
	setlocale(LC_ALL, "Portuguese");
	printf("Nome: Luís Fernando da Silveira\n");
	printf("Endereço: Av. 14 de julho, 1014 - Bairro Das Rosas, Estância Velha - RS\n");
	printf("Telefone: (51) 9 8493 5515");
	return(0);
}
