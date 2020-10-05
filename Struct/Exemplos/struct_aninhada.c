#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//Definindo a struct
struct tp_endereco{
	char rua[100];
	int numero;
	char bairro[40];
	char cidade[40];
	char estado[2];
	int cep;
};

struct tp_data_nascimento{
	int dia;
	int mes;
	int ano;
};

struct cadastro_cliente{
	char nomeCliente[40];
	int telefone;
	struct tp_endereco endereco;
	struct tp_data_nascimento dataNascimento;
}
cad_cliente[2];

int main (){
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	printf("\n=========== Cadastro de cliente ============\n\n\n");
	
	//COLETA
	for(i = 0; i < 2; i++){
		printf("\n\nNome do cliente..........: ");
		fflush(stdin); //Limpa o buffer do teclado
		gets(cad_cliente[i].nomeCliente); //Lê uma string, nesse caso o nome do cliente
		
		printf("Telefone do cliente..........: ");
		scanf("%d", &cad_cliente[i].telefone);
		
		
		printf("\n\n====== Endereço ======\n\n");
		
		printf("Rua..........: ");
		fflush(stdin); //Limpa o buffer do teclado
		gets(cad_cliente[i].endereco.rua); //Lê uma string, nesse caso a rua do cliente
		
		printf("Número.......: ");
		scanf("%d", &cad_cliente[i].endereco.numero);
		
		printf("Bairro.......: ");
		fflush(stdin); //Limpa o buffer do teclado
		gets(cad_cliente[i].endereco.bairro); //Lê uma string, nesse caso o bairro do cliente
		
		printf("Cidade.......: ");
		fflush(stdin); //Limpa o buffer do teclado
		gets(cad_cliente[i].endereco.cidade); //Lê uma string, nesse caso a cidade do cliente
		
		printf("Estado.......: ");
		fflush(stdin); //Limpa o buffer do teclado
		gets(cad_cliente[i].endereco.estado); //Lê uma string, nesse caso o estado do cliente
		
		printf("CEP..........: ");
		scanf("%d", &cad_cliente[i].endereco.cep);
		
		
		printf("\n\n====== Data de nascimento ======\n\n");
		
		printf("Dia.......: ");
		scanf("%d", &cad_cliente[i].dataNascimento.dia);
		
		printf("Mês.......: ");
		scanf("%d", &cad_cliente[i].dataNascimento.mes);
		
		printf("Ano.......: ");
		scanf("%d", &cad_cliente[i].dataNascimento.ano);
	}
	
	//IMPRESSÃO
	for(i = 0; i < 2; i++){
		printf("\n Nome.........: %s", cad_cliente[i].nomeCliente);
		printf("\n Telefone.....: %d\n", cad_cliente[i].telefone);
		printf("\n Rua..........: %s", cad_cliente[i].endereco.rua);
		printf("\n Número.......: %d", cad_cliente[i].endereco.numero);
		printf("\n Bairro.......: %s", cad_cliente[i].endereco.bairro);
		printf("\n Cidade.......: %s", cad_cliente[i].endereco.cidade);
		printf("\n Estado.......: %s", cad_cliente[i].endereco.estado);
		printf("\n CEP..........: %d\n", cad_cliente[i].endereco.cep);
		printf("\n Nascimento...: %d/%d/%d\n", cad_cliente[i].dataNascimento.dia, cad_cliente[i].dataNascimento.mes, cad_cliente[i].dataNascimento.ano);
	}
	
	system("pause");
}
