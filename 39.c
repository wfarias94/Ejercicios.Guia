#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main ()
{
	int num1, num2, num3, num4;
	
	printf("\nIngrese primer numero: ");
	scanf("%d",&num1);
	
	printf("\n\nIngrese segundo numero: ");
	scanf("%d",&num2);
	
	printf("\n\nIngrese tercer numero: ");
	scanf("%d",&num3);
	
	printf("\n\nIngrese cuarto numero: ");
	scanf("%d",&num4);
	
	if(num4 > num3 && num4 > num2 && num4 > num1)
	{
		printf("\n\nEl cuarto numero es el mayor\n\n");
	}
	else if(num3 > num1 && num3 > num2 && num3 > num4)
	{
		printf("\n\nEl tercer numero es el mayor\n\n");
	}
	else if(num2 > num1 && num2 > num3 && num2 > num4)
	{
		printf("\n\nEl segundo numero es el mayor\n\n");
	}
	else
	{
		printf("\n\nEl primer numero es el mayor\n\n");
	}
		
	return 0;
}
