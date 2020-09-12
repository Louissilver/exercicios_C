#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float repC, repD, aprD, totRep;
	
	printf("Informe o total de alunos reprovados na turma C: ");
	scanf("%f", &repC);
	printf("\nInforme o total de alunos aprovados na turma D: ");
	scanf("%f", &aprD);
	
	repC = (repC/100) * 60;
	repD = (1 - (aprD/100)) * 20;
	totRep = ((repC + repD)/80)*100;
	
	printf("\n================================\n");
	printf("             RESULTADOS             ");
	printf("\n================================\n\n");
	
	printf("\nAlunos Reprovados na Turma C: %.2f%%", repC);
	printf("\nAlunos Reprovados na Turma D: %.2f%%", repD);
	printf("\nAlunos Reprovados nas duas turmas: %.2f%%\n\n", totRep);
	
	system("PAUSE");
	return 0;
}
