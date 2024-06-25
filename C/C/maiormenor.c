#include <stdio.h>

kek(){
	int a,b,c;
	printf("Escreva um numero:\n");
	scanf("%d", &a);	
	printf("Escreva um numero:\n");
	scanf("%d", &b);
	printf("Escreva um numero:\n");
	scanf("%d", &c);
	if(a>b && a>c)
	{
		printf("O numero %d e o maior.", a);
	}
	else
	if(b>c)
	{
		printf("O numero %d e o maior.", b);
	}
	else
	{
		printf("O numero %d e o maior.", c);
	}
}

int main()
{
	int a,b,c;
	kek();
}
