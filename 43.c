#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main ()
{
	int materia, i, acum = 0;
	float prom;
	
	char nombre[100], seguir = {'\0'};
	
	for(i=0; seguir!='n'; i++)
	{
		printf("\nIngrese Nombre de Alumno: ");
		fflush(stdin);
		gets(nombre);
		
		for(i=0; i<6; i++)
		{
			printf("\nIngrese nota de materia %d: ",i+1);
			scanf("%d",&materia);
			
			acum+=materia;
		}
		
		prom = (float)(acum/6);
		
		system("cls");
		printf("NOMBRE DE ALUMNO: \t\t PROMEDIO: \n%s \t\t\t\t %.2f\n\n",nombre,prom);
		
		printf("\n\nDesea seguir? s/n: ");
		fflush(stdin);
		seguir = tolower(getchar());
				
		acum = 0;		
		system("cls");
	}
	
	return 0;
	
}
