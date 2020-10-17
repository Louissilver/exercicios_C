#include <stdio.h>
#include <stdlib.h>

// declaração da função
int Soma (int V1, int V2)
{
	int S;
	S = V1 + V2;
	return (S);
}

main()
{
	int K;
	K = Soma (2,3);
	printf ("Resultado: %d\n", K);
}


