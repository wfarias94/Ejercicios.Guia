#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>
#define TAM 10

int main ()
{
	char ingreso[TAM];
	int acumA = 0, acumE = 0, acumI = 0, acumO = 0, acumU = 0, i;
	
	for(i=0; i<TAM; i++)
	{
		printf("\nIngrese caracter: ");
		fflush(stdin);
		ingreso[i] = tolower(getchar());
		
		if(ingreso[i] == 'a')
		{
			acumA++;
		}
		else if(ingreso[i] == 'e')
		{
			acumE++;
		}
		else if(ingreso[i] == 'i')
		{
			acumI++;
		}
		else if(ingreso[i] == 'o')
		{
			acumO++;
		}
		else if(ingreso[i] == 'u')
		{
			acumU++;
		}		
	}
	
	system("cls");
	
	printf("\t\nMuestro acumuladores:\n\n");
	printf("Caracter A acumulado: %d\n",acumA);
	printf("Caracter E acumulado: %d\n",acumE);
	printf("Caracter I acumulado: %d\n",acumI);
	printf("Caracter O acumulado: %d\n",acumO);
	printf("Caracter U acumulado: %d\n",acumU);
	
	return 0;
}
