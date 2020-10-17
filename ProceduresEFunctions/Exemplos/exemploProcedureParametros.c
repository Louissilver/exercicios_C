#include <stdio.h>
#include <stdlib.h>

void Troca (int A, int B)
{
	int aux;

	aux = A;
	A = B;
	B = aux;
	printf ("\n\n%d  %d\n", A,B);
}
main()
{
	int L, M;

	L = 2;
	M = 5;
	printf ("%d   %d\n\n", L,M);
	Troca (L, M);
	system ("pause");
}

