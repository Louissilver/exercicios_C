#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
5.Fa�a uma fun��o que recebe, por par�metro, um valor inteiro e positivo e retorna o n�mero de divisores desse valor.   
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
	printf("\nO n�mero de divisores �: %d\n\n", num);
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int num, numeroDeDivisores;
	num = LeEntrada();
	numeroDeDivisores = RetornaNumeroDeDivisores(num);
	EscreveNaTela(numeroDeDivisores);
	system("pause");
}


