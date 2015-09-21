#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main ()
{
	int num, i;
	
	printf("\nIngrese un numero: ");
	scanf("%d",&num);
	
	printf("\nMuestro numeros desde 0 hasta %d \n\n",num);
	
	for(i=0; i<num; i++)
	{
		printf("%d\n",i);
	}
	
	return 0;
}
