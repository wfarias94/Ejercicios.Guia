#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main ()
{
	int i, cont = 0;
	
	for(i=0; i<101; i++)
	{
		if(i%2 == 1)
		{
			printf("%d \n",i);
			cont++;
		}
	}
	
	printf("\n\nCantidad de num impares: %d\n\n", cont);
	
	return 0;
}
