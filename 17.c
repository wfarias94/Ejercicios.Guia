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
	
	if(num%2 == 0)
	{
		system("cls");
		printf("\nEl numero ingresado es PAR\n\n");
	}
	else if(num%2 == 1)
	{
		system("cls");
		printf("\nEl numero ingresado es IMPAR\n\n");
	}

	return 0;
}
