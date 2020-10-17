#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
6.Escreva uma fun��o que recebe, por par�metro, um valor inteiro e positivo e retorna o somat�rio desse valor. 
*/
int LeEntrada (){
	int num;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	while(num < 0){	
		printf("O n�mero deve ser inteiro e positivo, tente de novo.\n");
		printf("Digite um n�mero: ");
		scanf("%d", &num);
	}
	return num;
}

int RetornaSomatorio(int num){
	int soma = 0, i;
   
    for(i = 0; i <= num; i++){
        soma += i;
    }
    return soma;
}

void EscreveNaTela(int n){
	printf("\n\nO n�mero informado foi: %d\n", n);
}

main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, somatorio;
	num = LeEntrada();
	somatorio = RetornaSomatorio(num);
	EscreveNaTela(somatorio);
	system("pause");
}


