#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main ()
{
	int num, i, cont = 0;
	
	printf("\nIngrese un numero: ");
	scanf("%d",&num);
	
	printf("\nMuestro multiplos de 3 desde 0 hasta %d \n\n",num);
	
	for(i=0; i<num; i++)
	{
		if(i%3 == 0 && i!= 0)
		{
			printf("%d\n",i);
			cont++;
		}
	}
	
	printf("\n\nCantidad de multiplos: %d\n\n",cont);
	
	
	return 0;
}
