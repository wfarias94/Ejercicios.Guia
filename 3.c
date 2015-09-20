#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{
	printf("Muestro la limpieza de pantalla..");
	printf("\n\n Presione una tecla.. \n");
	getch();	
	
	system("cls");
	system("color F0");
	
	int numero1 = 2, numero2 = 5, res;
	
	res = numero1*numero2;
	
	printf("Muestro los numeros: %d, %d \n\n",numero1, numero2);
	
	printf("\nMuestro producto: %d \n\n",res);
	
	printf("\nMuestro cuadrado del primer numero: %d \n\n",numero1*numero1);

	return 0;
	
}
