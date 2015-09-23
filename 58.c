#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main ()
{
	int vec[10], i;
	
	for(i=0; i<10; i++)
	{
		printf("Ingrese numero: ");
		scanf("%d",&vec[i]);
	}
	
	system("cls");
	printf("Muestro contenido del vector:\n");
	
	for(i=0; i<10; i++)
	{
		printf("%d\n", vec[i]);
	}
	
	return 0;	
}
