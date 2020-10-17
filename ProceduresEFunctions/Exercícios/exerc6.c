#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
6.Escreva uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o somatório desse valor. 
*/
int LeEntrada (){
	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	while(num < 0){	
		printf("O número deve ser inteiro e positivo, tente de novo.\n");
		printf("Digite um número: ");
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
	printf("\n\nO número informado foi: %d\n", n);
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


