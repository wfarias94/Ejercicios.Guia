#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#define CANT 10

int main ()
{
	int opc, i, j, vec[CANT], salir, aux;
	
	do
	{
		system("cls");
		printf("\n1.Cargar vector \n2.Ordenar Vector \n3.Mostrar Vector \n4.Salir\n\nIngrese opcion: ");
		scanf("%d",&opc);
		system("cls");
		switch(opc)
		{
			case 1:
					for(i=0; i<CANT; i++)
					{
						printf("Ingrese numeros: ");
						scanf("%d",&vec[i]);
					}					
					break;
			case 2:	
					for(i=0; i<CANT; i++)
					{
						for(j=i+1; j<CANT; j++)
						{
							if(vec[i] < vec[j])
							{
								aux = vec[i];
								vec[i] = vec[j];
								vec[j] = aux;
							}
						}
					}
					
					printf("\n\nSe ha ordenado el vector..\n\n");
					getch();
					break;
			case 3:
					printf("\n\nMuestro el vector ordenado:\n\n");
					
					for(i=0; i<CANT; i++)
					{
						printf("%d\n", vec[i]);
					}
					getch();
					break;
		}
		
						
	}while(opc!=4);
	
	return 0;
}

