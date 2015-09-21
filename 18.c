#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main ()
{
	int num, i, suma = 0, multiplicacion = 0, aux = 0;;
	
	printf("\nIngrese 10 numeros: \n\n");
	for(i=0; i<10; i++)
	{
		printf("\nIngrese: ");
		scanf("%d",&num);
		
		if(num == 0)
		{
			printf("\nIngrese numero distinto a 0: ");
			scanf("%d",&num);
		}
		
		if(num > 0)
		{
			suma += num;
		}
		
		if(num < 0)
		{
			 if(multiplicacion == 0)
			 {
			 	aux = num;
			 	multiplicacion = num;
			 }
			 
			 multiplicacion = aux * num;
		}
	}
	
	printf("\nMuestro suma: %d", suma);
	printf("\nMuestro Multiplicacion: %d", multiplicacion);

	return 0;
}
