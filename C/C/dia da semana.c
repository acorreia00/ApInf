#include <stdio.h>
int main()
{
	int d=8;
	printf("Escreva o numero de um dia da semana:\n");
	scanf("%d" , &d);
	switch(d){
		case 1:printf("Domingo");break;
		case 2:printf("Segunda");break;
		case 3:printf("Terca");break;
		case 4:printf("Quarta");break;
		case 5:printf("Quinta");break;
		case 6:printf("Sexta");break;
		case 7:printf("Sabado");break;
		default:printf("Nao e um dia da semana");
	}
	
}
