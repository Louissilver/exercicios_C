#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float f, c;
	
	printf("Informe a temperatura em °C: ");
	scanf("%f", &c);
	
	f = ((c * 9) / 5) + 32;
	
	printf("\nTemperatura em °F = %.2f\n\n", f);
	
	system("PAUSE");
	return 0;
}
