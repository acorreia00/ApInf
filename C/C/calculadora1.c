#include <stdio.h>

soma(int a,int b){
	return(a+b);
}
sub(int a,int b){
	return(a-b);
}
div(int a,int b){
	return(a/b);
}
multi(int a,int b){
	return(a*b);
}
resto(){
 	int a,b;
 	char o,c;
 		do
	{
	printf("Insira o primeiro numero:\n");
	scanf("%d", &a);
	printf("Insira o segundo numero:\n");
	scanf("%d", &b);
	printf("Escreva a operacao\n");
	scanf(" %c", &o);
	switch(o)
	{
		case '+':printf("%d %c %d = %d\n", a,o,b,soma(a,b));break;
		case '-':printf("%d %c %d = %d\n", a,o,b,sub(a,b));break;
		case '/':printf("%d %c %d = %dn", a,o,b,div(a,b));break;
		case '*':printf("%d %c %d = %d\n", a,o,b,multi(a,b));break;
		default :printf("Essa nao e uma operacao\n");break;
	}
	printf("Deseja continuar Y/N \n");
	scanf(" %c", &c);
}
while(c=='Y');
return(0);
 }
 
int main()
{
	int a,b;
	char o,c;
	resto();
}
