#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*12.Escreva um algoritmo que gere os números de 1000 a 1999 e escreva aqueles que, divididos por 11, dão resto igual a 5.*/
int main() {
	setlocale(LC_ALL, "Portuguese");
	int i = 0;
	
	for(i = 1000; i < 2000; i++){
		if(i%11 == 5){
			printf("%d \n", i);
		}
	}
			
	system("PAUSE");
	return 0;
}
