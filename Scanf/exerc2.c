#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, soma, sub, multi, div, raiz1, raiz2;
	
	printf("Digite um número: ");
	scanf("%f", &num1);
	printf("Digite outro número: ");
	scanf("%f", &num2);
	
	soma = num1 + num2;
	sub = num1 - num2;
	multi = num1 * num2;
	div = num1 / num2;
	raiz1 = sqrt(num1);
	raiz2 = sqrt(num2);
	
	printf("Soma = %.2f\n", soma);
	printf("Subtração = %.2f\n", sub);
	printf("Multiplicação = %.2f\n", multi);
	printf("Divisão = %.2f\n", div);
	printf("Raíz do primeiro número = %.2f\n", raiz1);
	printf("Raíz do segundo número = %.2f\n", raiz2);
	
	system("PAUSE");
	return 0;
}
