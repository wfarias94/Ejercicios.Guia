#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main ()
{
	int i, suma = 0;
	
	for(i=3; i<100; i++)
	{
		if(i%3 == 0)
		{
			printf("%d\n",i);
			suma += i;
		}
	}
	
	printf("\n\nLa suma es: %d \n",suma);

	return 0;
}
