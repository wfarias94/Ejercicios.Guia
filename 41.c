#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#define MES 5

int main ()
{
	int i, mayor, menor, num, flag = 0;
	
	for(i=0; i<5; i++)
	{
		printf("\nIngrese numero: ");
		scanf("%d",&num);
		
		if(num<menor || flag == 0)
		{
			menor = num;
		}
		else if(num > mayor || flag == 0)
		{
			mayor = num;
		}
		flag++;
	}
	
	system("cls");
	printf("\nMayor: %d\nMenor: %d\n\n", mayor, menor);
	
	return 0;
}
