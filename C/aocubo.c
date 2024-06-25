#include <stdio.h>

int cubo(int n)
{
	int cubo;
	cubo=n*n*n;
	return(cubo);
}

int main()
{
	int n;
	printf("Insira um numero:\n");
	scanf("%d", &n);
	printf("\nO cubo desse numero e %d\n", cubo(n));
}
