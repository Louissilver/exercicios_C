#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int nota[5];
	
	nota[0] = 10;
	nota[1] = 5;
	nota[2] = 4;
	nota[3] = 2;
	nota[4] = 7;
	
	printf("%d\n", nota[1]);
	
	system("pause");
}
