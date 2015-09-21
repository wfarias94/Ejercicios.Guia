#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#define MES 5

int main ()
{
	int flag = 0;
	float altura, mayor;
	char nombre[100], apellido[100], seguir = {'\0'}, nombremay[100], apemay[100];
	
	do
	{
		printf("\nIngrese nombre de alumno: ");
		fflush(stdin);
		scanf("%s",nombre);
		
		printf("\nIngrese apellido de alumno: ");
		fflush(stdin);
		scanf("%s",apellido);
		
		printf("\nIngrese altura de alumno en mm: ");
		scanf("%f",&altura);
		
		if(altura > mayor || flag == 0)
		{
			strcpy(nombremay, nombre);
			strcpy(apemay, apellido);
			mayor = altura;
		}
		
		flag++;
		
		printf("\nDesea seguir? s/n: ");
		fflush(stdin);
		seguir = tolower(getchar());
		
	}while(seguir != 'n');	
	
	system("cls");
	printf("\nALUMNO MAS ALTO:\n\nNombre: \tApellido: \tAltura:\n");
	printf("%s \t%s \t%.1f mm \n\n",nombremay, apemay, mayor);
	
	return 0;
}
