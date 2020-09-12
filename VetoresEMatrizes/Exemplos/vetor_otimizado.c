#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int nota[5];
	int i;
	
	nota[0] = 10;
	nota[1] = 5;
	nota[2] = 4;
	nota[3] = 2;
	nota[4] = 7;
	
	for(i = 0; i < 5; i++)
	{
		printf("%d\n", nota[i]);
	}
	
	system("pause");
}
