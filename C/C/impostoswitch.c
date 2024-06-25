#include <stdio.h>

int main()
{
	char h;
	int d;
	float imp;
	printf("Qual e o seu sexo\?\nH --> Homem\nM --> Mulher\n");
	scanf("%c", &h);
	printf("Quanto recebe\?\n");
	scanf("%d", &d);
	switch(h)
	{
		case 'H': imp=d*0.15; printf("Imposto igual a %f", imp);break;
		case 'M': imp=d*0.10; printf("Imposto igual a %f", imp);break;
		case 'h': imp=d*0.15; printf("Imposto igual a %f", imp);break;
		case 'm': imp=d*0.10; printf("Imposto igual a %f", imp);break;
	}
}
