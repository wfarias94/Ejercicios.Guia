#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main ()
{
	int num;
	
	printf("\nIngrese un numero: ");
	scanf("%d",&num);
	
	if(num < 0)
	{
		system("cls");
		printf("\nEl numero ingresado es NEGATIVO\n\n");
	}
	else if(num == 0)
	{
		system("cls");
		printf("\nEl numero ingresado es NULO\n\n");
	}
	else
	{
		system("cls");
		printf("\nEl numero ingresado es POSITIVO\n\n");
	}

	return 0;
}
