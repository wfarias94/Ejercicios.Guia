#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{
	printf("Muestro la limpieza de pantalla..");
	printf("\n\nPresione una tecla.. \n");
	getch();	
	
	system("cls");
	system("color F0");
	
	int numero1, numero2, res;
	
	printf("\nIngrese primer numero: ");
	scanf("%d",&numero1);
	
	printf("\nIngrese segundo numero: ");
	scanf("%d",&numero2);
	
	system("cls");
	
	printf("\nMuestro los numeros: %d, %d \n\n",numero1, numero2);
	
	res = numero1-numero2;
	
	if(res < 0)
	{
		printf("\nEl resultado es NEGATIVO: %d \n\n",res);
	}
	else
	{
		printf("\nEl resultado es POSITIVO: %d",res);
	}

	return 0;
}
