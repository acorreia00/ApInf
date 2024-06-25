#include <stdio.h>

int main()
{
	int a;
	printf("Introduza a sua idade:\n");
	scanf("%d", &a);
	if(a>=0 && a<=3)
	{
		printf("E um bebe");
	}
	else if(a>=4 && a<= 10){
		printf("E uma crianca");
	}
	else if(a>=11 && a<= 17){
		printf("E um adolescente");
	}
	else if(a>=18){
		printf("E um adulto");
	}
	else if(a<0){
		printf("Vai nascer em %d anos.", a-a-a);
	}
}
