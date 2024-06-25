#include <stdio.h>

long int main()
{
	int a,b,c;
	printf("Escreva dois numeros\n");
	scanf("%d %d", &a, &b);
	if(a<=b)
	while(a<=b)
	{
		printf("%d+", a);
		c+=a;
		a++;
	}
	else
		while(a>=b)
	{
		printf("%d+", b);
		c+=b;
		b++;
	}
		printf("0");
		printf("=%d", c);
		return(c);
}
