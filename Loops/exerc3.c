#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//3.Faça um programa que leia 20 números quaisquer e conte quantos são negativos.
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	
	int i, num, negativos = 0;
	
	for(i = 1; i <= 20; i++)
	{
		printf("\n%d - Digite um número qualquer: ", i);
		scanf("%d", &num);
		if(num < 0)
		{
			negativos++;	
		}	
	} 
	
	printf("\n\n%d são negativos\n", negativos);
	
	system("PAUSE");
	return 0;
}
