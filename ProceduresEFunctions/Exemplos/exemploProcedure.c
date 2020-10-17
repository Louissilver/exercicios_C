#include <stdio.h>
#include <stdlib.h>

int num, N;

void EscreveNoVideo ( )
{
    for (num = 1; num <= N; num++)
 	printf ("%d\n", num);
}

main ()
{
	printf("Digite um numero\n");
	scanf ("%d", &N);
	EscreveNoVideo( );
	printf ("FIM");
    system ("pause");
}

