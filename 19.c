#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main ()
{
	int num, i, suma = 0;
	
	printf("\nIngrese un numero: ");
	scanf("%d",&num);
	
	for(i=num; i>0; i--)
	{
		suma += i;
	}
	
	printf("\nMuestro suma de los antecesores de %d: %d\n\n",num,suma-num);

	return 0;
}
