#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, soma, sub, multi, div, raiz1, raiz2;
	
	printf("Digite um n�mero: ");
	scanf("%f", &num1);
	printf("Digite outro n�mero: ");
	scanf("%f", &num2);
	
	soma = num1 + num2;
	sub = num1 - num2;
	multi = num1 * num2;
	div = num1 / num2;
	raiz1 = sqrt(num1);
	raiz2 = sqrt(num2);
	
	printf("Soma = %.2f\n", soma);
	printf("Subtra��o = %.2f\n", sub);
	printf("Multiplica��o = %.2f\n", multi);
	printf("Divis�o = %.2f\n", div);
	printf("Ra�z do primeiro n�mero = %.2f\n", raiz1);
	printf("Ra�z do segundo n�mero = %.2f\n", raiz2);
	
	system("PAUSE");
	return 0;
}
