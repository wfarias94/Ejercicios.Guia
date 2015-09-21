#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main ()
{
	int num1, num2, aux;
	
	printf("\nIngrese primer numero: ");
	scanf("%d",&num1);
	
	printf("\nIngrese segundo numero numero: ");
	scanf("%d",&num2);
	
	aux = num1;
	num1 = num2;
	num2 = aux;
	
	printf("\n\nMuestro numeros invertidos: \n\nPrimer Numero: %d \nSegundo Numero: %d\n\n",num1, num2);
		
	return 0;
}
