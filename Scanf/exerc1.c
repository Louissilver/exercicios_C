#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num1, num2; 
	float media;
	
	printf("Digite um n�mero: ");
	scanf("%i", &num1);
	printf("Digite outro n�mero: ");
	scanf("%i", &num2);
	
	media = (float)(num1 + num2) / 2;
	
	printf("M�dia = %.2f\n\n", media);
	
	system("PAUSE");
	return 0;
}
