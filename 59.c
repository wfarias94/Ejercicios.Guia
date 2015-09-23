#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main ()
{
	int vec[20], i, max, pos, flag = 0;
	
	for(i=0; i<20; i++)
	{
		printf("Ingrese numero: ");
		scanf("%d",&vec[i]);
		
		while(vec[i] < 0)
		{
			printf("Error, ingrese un numero positivo: ");
			scanf("%d",&vec[i]);
		}
		
		if(flag == 0 || vec[i] > max)
		{
			max = vec[i];
			pos = i;
		}
		flag++;
	}
	
	system("cls");
	printf("\nEl mayor es: %d ubicado en la posicion: %d",max,pos);
	printf("\n\nMuestro contenido del vector:\n\n");
	
	for(i=0; i<20; i++)
	{
		printf("%d\n", vec[i]);
	}
	
	return 0;
}
