#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{
	int num;
	
	printf("\nIngrese numero: ");
	scanf("%d",&num);
	
	while(num < 0)
	{
		printf("Error, el numero debe ser mayor que 0. Reingrese: ");
		scanf("%d",&num);
	}
	
	system("cls");
	
	printf("\nMuestro el cuadrado del numero ingresado: %d \n\n",num*num);
	
	return 0;
}
