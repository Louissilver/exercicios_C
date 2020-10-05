#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
/*
5) Uma indústria faz a folha mensal de pagamentos de seus  80 empregados baseada no seguinte:
- existe uma tabela com os dados de cada funcionalidade: matrícula, nome e salário bruto.
Escreva um programa que leia e processe a tabela e emita (escreva na tela), para cada funcionário, seu contra-cheque, conforme o formato abaixo:
Matrícula:
Nome:
Salário bruto:
Dedução INSS:
Salário liquido: 
(Dicas: INSS desconto de 12% do salário bruto. Salário liquido é a diferença entre salário bruto e a dedução do INSS).
*/

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int i = 0;
	
	struct ficha_funcionario{
		int Matricula;
		char Nome[40];
		float SalarioBruto;
	};
	
	struct ficha_funcionario funcionario[80];
	
	for(i = 0; i < 80; i++){	
		printf("\n=========== Cadastro de funcionário ============\n\n\n");
		
		printf("Matrícula.....: ");
		scanf("%d", &funcionario[i].Matricula);
		
		printf("Nome..........: ");
		fflush(stdin);
		gets(funcionario[i].Nome); 
		
		printf("Salário.......: ");
		scanf("%f", &funcionario[i].SalarioBruto);
	}
	
	
	printf("\n=========== Funcionários cadastrados ============\n\n");
	
	for(i = 0; i < 80; i++){
		printf("\n Matrícula.......: %d", funcionario[i].Matricula);
		printf("\n Nome............: %s", funcionario[i].Nome);
		printf("\n Salário bruto...: %.2f", funcionario[i].SalarioBruto);
		printf("\n INSS............: 12%%");
		printf("\n Salário líquido.: %.2f\n\n", funcionario[i].SalarioBruto*0.88);
	}
	system("pause");
}
