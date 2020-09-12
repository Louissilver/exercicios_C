#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float nota[5] = {0};
	float total = 0;
	float media = 0;
	int i = 0;
	
	for(i = 0; i < 5; i++)
	{
		printf("Digite a %dª nota: ", i+1);
		scanf("%f", &nota[i]);
		
		printf("\n");
		total += nota[i];
	}
	
	media = total / 5;
	printf("\n\nSua média final é de %.2f\n\n\n", media);
	
	
	
	system("pause");
}
