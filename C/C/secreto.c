#include <stdio.h>

int main()
{
	int x,q;
	printf("Introduza o numero secreto entre 1 e 10\n");
	scanf("%d", &x);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	if(x>10 || x<0)
{
	printf("ERROR");
}
	else
	{
	do
	{
		scanf("%d", &q);
	}
		while(x!=q);
		printf("CONGRATULATIONS");
}
}
