#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{
	int acum = 0,i,num;
	
	for(i=0; i<5; i++)
	{
		printf("Ingrese numero %d: ",i+1);
		fflush(stdin);
		scanf("%d",&num);
		
		acum+=num;
		
		system("cls");
	}
	
	acum = acum / 5;
	
	system("color 0A");
	printf("\nLa media de los numeros ingresados es: %d \n\n\n", acum);
	
	system("pause");
	return 0;
}
