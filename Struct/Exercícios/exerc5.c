#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
/*
5) Uma ind�stria faz a folha mensal de pagamentos de seus  80 empregados baseada no seguinte:
- existe uma tabela com os dados de cada funcionalidade: matr�cula, nome e sal�rio bruto.
Escreva um programa que leia e processe a tabela e emita (escreva na tela), para cada funcion�rio, seu contra-cheque, conforme o formato abaixo:
Matr�cula:
Nome:
Sal�rio bruto:
Dedu��o INSS:
Sal�rio liquido: 
(Dicas: INSS desconto de 12% do sal�rio bruto. Sal�rio liquido � a diferen�a entre sal�rio bruto e a dedu��o do INSS).
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
		printf("\n=========== Cadastro de funcion�rio ============\n\n\n");
		
		printf("Matr�cula.....: ");
		scanf("%d", &funcionario[i].Matricula);
		
		printf("Nome..........: ");
		fflush(stdin);
		gets(funcionario[i].Nome); 
		
		printf("Sal�rio.......: ");
		scanf("%f", &funcionario[i].SalarioBruto);
	}
	
	
	printf("\n=========== Funcion�rios cadastrados ============\n\n");
	
	for(i = 0; i < 80; i++){
		printf("\n Matr�cula.......: %d", funcionario[i].Matricula);
		printf("\n Nome............: %s", funcionario[i].Nome);
		printf("\n Sal�rio bruto...: %.2f", funcionario[i].SalarioBruto);
		printf("\n INSS............: 12%%");
		printf("\n Sal�rio l�quido.: %.2f\n\n", funcionario[i].SalarioBruto*0.88);
	}
	system("pause");
}
