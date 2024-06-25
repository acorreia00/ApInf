#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a,b,m;
	char operacao;
	char continuacao='s';

    while(continuacao == 's')
    {

	    printf("Insira uma operacao\n");
	    scanf(" %c", &operacao);

	    
	   		if(operacao == '+')
	    {	
		    	printf("Insira um numero:\n");
		    	scanf(" %d", &a);
		   		scanf(" %d", &b);
		   		m=a+b;
		    	printf("A soma e %d\n",m);
		}
			else if(operacao == '-')
		{	
		    	printf("Insira um numero:\n");
		    	scanf(" %d", &a);
		    	scanf(" %d", &b);
		    	m=a-b;
		    	printf("A diferenca e %d\n",m);
		}
			else if(operacao == '*')
		{	
		    	printf("Insira um numero:\n");
		    	scanf(" %d", &a);
		    	scanf(" %d", &b);
		    	m=a*b;
		    	printf("A multiplicacao e %d\n",m);
		}
	    	else if(operacao == '/')
		{	
		    	printf("Insira um numero:\n");
		    	scanf(" %d", &a);
		    	scanf(" %d", &b);
		    	m=a/b;
		    	printf("A divisao e %d\n",m);
		}
			else
		{
				printf("Operacao nao reconhecida\n");
		}

			do
		{
				printf("deseja continuar? s/n\n");
				scanf(" %c", &continuacao);
	    }	while(continuacao != 's' && continuacao != 'n');

    }




	return 0;
}
