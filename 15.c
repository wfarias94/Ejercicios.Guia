#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main ()
{
	int i;
	
	for(i=0; i<100; i++)
	{
		if(i%6 == 0)
		{
			printf("%d\n",i);
		}
	}

	return 0;
}
