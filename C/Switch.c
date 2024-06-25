#include <stdio.h>

int main()
{
	char ec;
	printf("======================================== \n      Escolha o seu estado civil       \n======================================== \nC         -->            Casado         \nD         -->            Divorciado     \nS         -->            Solteiro       \nV         -->            Viuvo          \n======================================== \n");
	scanf("%c", &ec);
	switch(ec){
		case 'C':printf("E casado.");break;
		case 'D':printf("E divorciado.");break;
		case 'S':printf("E solteiro.");break;
		case 'V':printf("E viuvo.");break;
	}
	getch();
}
