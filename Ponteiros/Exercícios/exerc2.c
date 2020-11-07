#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
2.Implementar uma função que calcule a média ponderada de duas notas. 
Essa função deve obedecer ao protótipo:
void media_pond (float n1, float p1, float n2, float p2, float *media);
*/
void media_pond (float n1, float p1, float n2, float p2, float *media)
{
	*media = (n1 + n2) / (p1 + p2);
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float media = 0;
	float nota1 = 9.5;
	float peso1 = 1;
	float nota2 = 5.5;
	float peso2 = 2;
	
	media_pond(nota1, peso1, nota2, peso2, &media);
	printf("%.2f\n", media);
	system("pause");
}


