#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//3.Fa�a um programa que leia 20 n�meros quaisquer e conte quantos s�o negativos.
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	
	int i, num, negativos = 0;
	
	for(i = 1; i <= 20; i++)
	{
		printf("\n%d - Digite um n�mero qualquer: ", i);
		scanf("%d", &num);
		if(num < 0)
		{
			negativos++;	
		}	
	} 
	
	printf("\n\n%d s�o negativos\n", negativos);
	
	system("PAUSE");
	return 0;
}
