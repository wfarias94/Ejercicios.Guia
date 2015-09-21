#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main ()
{
	int peso, mas=0, menos=0;
	char sigo = {'\0'};
	
	do
	{
		printf("\nIngrese peso de empleado: ");
		scanf("%d",&peso);
		
		if(peso <= 80)
		{
			menos++;
		}
		else
		{
			mas++;
		}
		
		printf("Desea seguir registrando empleados? s/n: ");
		fflush(stdin);
		sigo = tolower(getchar());
		
	}while(sigo != 'n');
	
	system("cls");
	printf("\nCantidad de empleados con peso mayor a 80: %d \n\nCantidad de empleados con peso menor o igual a 80: %d\n\n\n",mas, menos);
	
	return 0;
}
