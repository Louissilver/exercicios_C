#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float eleitores, brancos, nulos, validos;
	
	printf("Informe o total de eleitores: ");
	scanf("%f", &eleitores);
	printf("\nInforme o número de votos brancos: ");
	scanf("%f", &brancos);
	printf("\nInforme o número de votos nulos: ");
	scanf("%f", &nulos);
	printf("\nInforme o número de votos validos: ");
	scanf("%f", &validos);
	
	brancos = (brancos/eleitores) * 100;
	nulos = (nulos/eleitores) * 100;
	validos = (validos/eleitores) * 100;
	
	printf("\n=================================\n");
	printf("      PORCENTAGENS DE VOTOS        ");
	printf("\n=================================\n\n");
	
	printf("\nPercentual de votos brancos %.2f%%", brancos);
	printf("\nPercentual de votos nulos %.2f%%", nulos);
	printf("\nPercentual de votos validos %.2f%%\n\n", validos);
	
	system("PAUSE");
	return 0;
}
