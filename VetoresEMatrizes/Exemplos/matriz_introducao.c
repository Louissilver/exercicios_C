#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[3][3] = {{1, 2, 3},
						{4, 5, 6},
						{7, 8, 9}};

	printf("%d\n", matriz[0][0]);
	
	system("pause");
}
