#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{
	int may = 0, men = 0, num, i;
	
	for(i=0; i<10; i++)
	{
		printf("\nIngrese un numero: ");
		scanf("%d",&num);
		
		if(num > 0)
			may++;		
		else
			men++;
	}
	system("cls");
	printf("\nIngresos mayores a 0: %d, menores a 0: %d \n\n",may, men);
	exit(1);
}
