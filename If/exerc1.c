#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
//1.Escreva um algoritmo para ler um valor e escrever se � positivo ou negativo. Considere o valor zero como positivo.
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	if(num < 0){
		printf("\nO n�mero � negativo!\n");
	}
	else{
		printf("\nO n�mero � positivo!\n");
	}
	
	
	system("pause");
	return 0;
}
