#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>

int suma (int, int);

int main ()
{
	int num1, num2;
	
	printf("\nIngrese primer numero: ");
	fflush(stdin);
	scanf("%d",&num1);
	
	printf("\n\nIngrese segundo numero: ");
	fflush(stdin);
	scanf("%d",&num2);
	
	system("cls");
	system("color 0A");
	
	printf("\nLa suma entre %d y %d es: %d \n\n\n",num1, num2, suma(num1, num2));
	
	system("pause");
	return 0;
}

int suma (int a , int b)
{
	int res;
	
	res = a + b;
	
	return res;
}
