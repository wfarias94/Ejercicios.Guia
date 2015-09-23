#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "mylib.h"
#include "estructuras.h"

//USAR CANTIDAD DEFINIDA PARA LLEVAR CUENTA DE ITERACIONES DE LOS ARRAYS, EJ: alta(codigoProd, descripcion, importe, cantidad, CANTIDAD);
//USAR PROXIMO PARA LLEVAR CUENTA DE LOS INDICES DE LOS ARRAYS.

int main ()
{
	int proximo = 0, salir = -1;
	
	do
	{
		switch(menu())
		{
			case 1:
					if(proximo == 0)
					{
						inicializar();
					}
					
					alta(codigoProd, descripcion, importe, cantidad);
					proximo++;
					break;
			case 2:
					modificacion(codigoProd, descripcion, importe, cantidad);
					break;
			case 3:
					baja(codigoProd, descripcion, importe, cantidad);
					break;
			case 4:
					informar(codigoProd, descripcion, importe, cantidad);
					break;
			case 5:
					listar(codigoProd, descripcion, importe, cantidad);
					break;
			case 9:
					salir = 0;
					break;
		}
		
	}while(salir !=0 );
	
	return 0;	
}
