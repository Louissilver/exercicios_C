#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*11.Escreva um algoritmo para ler uma quantidade indeterminada de valores inteiros. 
Para cada valor fornecido escrever uma mensagem que indica se cada valor fornecido � PAR ou �MPAR. 
O algoritmo ser� encerrado imediatamente ap�s a leitura de um valor NULO ou NEGATIVO.*/
int main() {
	setlocale(LC_ALL, "Portuguese");
	int num = 0;
	int condicao = 1;
	
	while(condicao != 0){
		printf("Digite um n�mero: ");
		scanf("%d", &num);
		
		if((num > 0) && (num%2 == 0)){
			printf("PAR\n\n");
		} 
		else if((num > 0) && num%2 != 0){
			printf("�MPAR\n\n");
		}
		else{
			condicao = 0;
		}
	} 
			
	system("PAUSE");
	return 0;
}
