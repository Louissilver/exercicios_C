#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Crie um registro com o nome do funcionário, cargo e salário. 
Leia este registro p/ um funcionário e ao final escreva o conteúdo do registro.
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
	
	printf("\n=========== Cadastro de funcionário ============\n\n\n");
	
	printf("Nome...........: ");
	fflush(stdin); //Limpa o buffer do teclado
	gets(funcionario.Nome); //Lê uma string, nesse caso o nome do funcionário
	
	printf("Cargo..........: ");
	fflush(stdin); //Limpa o buffer do teclado
	gets(funcionario.Cargo); //Lê uma string, nesse caso o cargo do funcionário
	
	printf("Salário........: ");
	scanf("%f", &funcionario.Salario);
	
	printf("\n=========== Funcionários cadastrados ============\n\n");
	printf("\n Nome.........: %s", funcionario.Nome);
	printf("\n Cargo.........: %s", funcionario.Cargo);
	printf("\n Telefone.....: %.2f\n\n", funcionario.Salario);
	
	system("pause");
}
