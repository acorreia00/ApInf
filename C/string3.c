#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("color a");
	system("title STRINGS ");
	/*system("color a");
	char str[] = "Bom dia turma";
	printf("%s\n%c%c", str, str[1], str[5]);*/
	
	/*char nome[]="1";
	puts("asd");*/
	
	int a=1;
	char nome[50];
	while(a=1)
	{
		puts("Escreva o nome completo");
		gets(nome);
		if(nome[0] != '\0')
		{
	printf("O nome e: %s\n", nome);
}
	else
	{
		printf("O programa vai sair");
	return(0);
}
}

}
