#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*13.Programa para gerar e imprimir os números pares menores que 51 e sua soma. Os números devem ser impressos em ordem decrescente.*/
int main() {
	setlocale(LC_ALL, "Portuguese");
	int i = 0;
	
	for(i = 51; i >= 0; i--){
		if(i%2 == 0){
			printf("%d \n", i);
		}
	}
			
	system("PAUSE");
	return 0;
}
