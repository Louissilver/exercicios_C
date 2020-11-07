#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
1.Implementar uma função que calcule a área da superfície e volume de uma esfera de raio r. 
Essa função deve obedecer ao protótipo:

void calc_esfera (float r, float* área, float* volume);
Área = 4r2
Volume = 4r3/3
  
*/
void calc_esfera (float r, float *area, float *volume)
{
	float pi = 3.1415;
	*area = 4*pi*r*r;
	*volume = (4*pi*r*r*r)/3;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int r = 5;
	float area = 0;
	float volume = 0;
	calc_esfera(r, &area, &volume);
	printf("%.2f\n", area);
	printf("%.2f\n", volume);
	system("pause");
}


