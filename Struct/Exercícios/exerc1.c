#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Crie um registro com o nome do funcion�rio, cargo e sal�rio. 
Leia este registro p/ um funcion�rio e ao final escreva o conte�do do registro.
*/
int main (){
	setlocale(LC_ALL, "Portuguese");
	
	//Definindo a struct
	struct ficha_funcionario{
		char Nome[40];
		char Cargo[40];
		float Salario;
	};
	
	//Iniciando a struct
	struct ficha_funcionario funcionario;
	
	printf("\n=========== Cadastro de funcion�rio ============\n\n\n");
	
	printf("Nome...........: ");
	fflush(stdin); //Limpa o buffer do teclado
	gets(funcionario.Nome); //L� uma string, nesse caso o nome do funcion�rio
	
	printf("Cargo..........: ");
	fflush(stdin); //Limpa o buffer do teclado
	gets(funcionario.Cargo); //L� uma string, nesse caso o cargo do funcion�rio
	
	printf("Sal�rio........: ");
	scanf("%f", &funcionario.Salario);
	
	printf("\n=========== Funcion�rios cadastrados ============\n\n");
	printf("\n Nome.........: %s", funcionario.Nome);
	printf("\n Cargo.........: %s", funcionario.Cargo);
	printf("\n Telefone.....: %.2f\n\n", funcionario.Salario);
	
	system("pause");
}
