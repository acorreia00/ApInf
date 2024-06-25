#include <stdio.h>

int main()
{
	float n=1;
		while(n!=0){
		printf("Escreva um numero\n\n");
		scanf("%f", &n);
		if(n<0)
		{
			printf("O numero e negativo\n\n");
		}
		if(n>0)
		{
			printf("O numero e positivo\n\n");
		}
	}
	printf("Digitou 0 vai sair");
}

