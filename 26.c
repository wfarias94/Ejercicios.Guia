#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main ()
{
	char seguir = {'\0'}, salir = {'\0'};
	
	while(salir != 'N')
	{
		printf("\nDesea continuar? S/N: ");
		fflush(stdin);
		scanf("%c",&seguir);
	
		while(seguir != 'S' && seguir != 'N')
		{
			printf("\nError, reingrese S/N: ");
			fflush(stdin);
			scanf("%c",&seguir);
		}
				
		if(seguir == 'N')
		{
			salir = seguir;
		}
	}
	
	return 0;
}
