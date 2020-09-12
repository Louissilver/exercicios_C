#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//6.Escreva um algoritmo que imprima os números ímpares existentes de entre 1(inclusive) e 9 (inclusive).
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	
	int i;
	
	for(i = 1; i <= 9; i++)
	{
		if(!(i%2 == 0))
		{
			printf("%d é impar\n", i);		
		}
	} 
	
	system("PAUSE");
	return 0;
}
