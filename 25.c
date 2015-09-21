#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main ()
{
	int ven1, ven2, ven3, vendedor = -1;
	float importe1, importe2, importe3, importe;
	
	while(vendedor != 0)
	{
		printf("\nVendedor: ");
		scanf("%d",&vendedor);
	
		while(vendedor < 0 || vendedor > 3)
		{
			printf("\nError, reingrese vendedor: ");
			scanf("%d",&vendedor);
		}
		
		if(vendedor != 0)
		{
			printf("Ingrese importe: ");
			scanf("%f",&importe);
		}
			
		if(vendedor == 1)
		{
			ven1 = vendedor;
			importe1 += importe;
		}
		else if(vendedor == 2)
		{
			ven2 = vendedor;
			importe2 += importe;
		}
		else if(vendedor == 3)
		{
			ven3 = vendedor;
			importe3 += importe;
		}
		
	}
	
	system("cls");
	printf("\nNO HAY MAS BOLETAS PARA CARGAR..\n\n");
	printf("\n\nRECAUDACION DE CADA VENDEDOR: \n\n");
	printf("VENDEDOR 1 \t\t VENDEDOR 2 \t\t VENDEDOR 3\n");
	printf("$%.2f \t\t\t $%.2f \t\t\t $%.2f \t\n\n",importe1*0.05,importe2*0.05,importe3*0.05);
	
	return 0;
}
