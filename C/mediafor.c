#include <stdio.h>

int main()
{
	float n1,n2,m,ma;
	int a,b;
	printf("Quantos alunos tem a turma\?\n");
	scanf("%d", &b);
	for(a=1;a<=b;a++)
	{
		printf("Qual foi a nota do primeiro teste\?\n");
		scanf("%f", &n1);
		printf("Qual foi a nota do segundo teste\?\n");
		scanf("%f", &n2);
		ma=(n1+n2)/2;
		printf("A media do aluno e %f\n", ma);
		m+=ma;
	}
	
	printf("A media da turma e %f", m/b);
}
