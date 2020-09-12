#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*8.Escreva um algoritmo que imprima os números de 100 a 200 de 10 em 10.*/
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int i = 0;
	for(i = 100; i <= 200; i += 10){
		printf("%d \n", i);
	}	
	
	
	
	
	system("PAUSE");
	return 0;
}
