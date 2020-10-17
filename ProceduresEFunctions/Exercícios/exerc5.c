#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
5.Faça uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o número de divisores desse valor.   
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

int RetornaNumeroDeDivisores(num){
	int i, numeroDeDivisores = 0;
  	for(i = 1; i <= num; i++){
    	 if(num%i==0){
    	    numeroDeDivisores++;
    	 }
  	}
  	return numeroDeDivisores;
}

void EscreveNaTela(int num){
	printf("\nO número de divisores é: %d\n\n", num);
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int num, numeroDeDivisores;
	num = LeEntrada();
	numeroDeDivisores = RetornaNumeroDeDivisores(num);
	EscreveNaTela(numeroDeDivisores);
	system("pause");
}


