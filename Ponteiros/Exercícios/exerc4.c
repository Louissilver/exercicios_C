#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
4.	Implementar uma fun��o que calcule m�dia aritm�tica de 3 valores. Essa fun��o deve obedecer ao prot�tipo:

void media_arit (float a, float b, float c, float *media); 
*/
void media_arit (float a, float b, float c, float *media)
{
	*media = (a + b + c) / 3;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float nota1 = 8.0;
	float nota2 = 9.5;
	float nota3 = 5.5;
	float media = 0;
	media_arit(nota1, nota2, nota3, &media);
	printf("%.2f\n", media);
	system("pause");
}


