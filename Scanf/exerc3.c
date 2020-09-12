#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float f, c;
	
	printf("Informe a temperatura em °F: ");
	scanf("%f", &f);
	
	c = (5 * (f - 32)) / 9;
	
	printf("\nTemperatura em °C = %.2f\n\n", c);
	
	system("PAUSE");
	return 0;
}
