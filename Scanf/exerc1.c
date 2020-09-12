#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num1, num2; 
	float media;
	
	printf("Digite um número: ");
	scanf("%i", &num1);
	printf("Digite outro número: ");
	scanf("%i", &num2);
	
	media = (float)(num1 + num2) / 2;
	
	printf("Média = %.2f\n\n", media);
	
	system("PAUSE");
	return 0;
}
