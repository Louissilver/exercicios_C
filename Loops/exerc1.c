#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//1.Escreva um algoritmo para escrever a palavra PROGRAMACAO 5 vezes.
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char palavra[11] = "PROGRAMAÇÃO";
	int i = 1;
	while(i <= 5)
	{
		printf("%d - %s\n", i, palavra);
		i++;	
	} 
	
	system("PAUSE");
	return 0;
}
