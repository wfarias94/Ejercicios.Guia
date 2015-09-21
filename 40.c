#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#define MES 5

int main ()
{
	int i;
	float agua, mayor = 0, menor = 0, flag = 0, prom = 0;
	
	for(i=0; i<MES; i++)
	{
		printf("Ingrese cantidad de agua del dia %d: ",i+1);
		scanf("%f",&agua);
		
		if(agua < menor || flag == 0)
		{
			menor = agua;
		}
		else if(agua > mayor || flag == 0)
		{
			mayor = agua;
		}
		
		flag++;
		prom += agua;
	}
	
	system("cls");
	printf("\nDia de mayor agua caida: %.2f mm\n\nDia de menor agua caida: %.2f mm\n\nPromedio de agua caida: %.2f mm\n\n",mayor, menor, (float)(prom/MES));
		
	return 0;
}
