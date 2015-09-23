//#include "estructuras.h"
#define MAX 51
#define CANT 10

typedef struct
{
	int cod, cantidad;
	char descripcion[MAX];
	float importe;
	
}eProductos;

int validarCod(int, int, eProductos[]);
int validarDesc(int, eProductos[]);
int validarImporte(int, eProductos[]);
int validarCant(int, eProductos[]);
void alta(int[][MAX], eProductos[]);
void modificacion(eProductos[]);
void baja(eProductos[]);
void informar(eProductos[]);
void listar(eProductos[]);
void inicializar();
float promedio(float);
float promedio(float);
int menu();
int buscarLibre (eProductos[]);

float mayorImp, promImp = 0, totalImp = 0;
int flag, i, j, indice = -1, acumCod = 0;

void inicializar()
{
	eProductos vec[CANT];
	
	vec[0].cod = {-1};
	vec[0].descripcion = {'\0'};
	flag = 0;
	
	system("cls");
	if(flag == 0)
	{
		printf("\n\nSe han inicializado los vectores");
	}
	else
	printf("\n\nNo se han inicializado los vectores..");
	getch();
}

int buscarLibre (int productos[][MAX])
{
	int indice = -1;
	
	for(i = 0 ; i < CANT ; i++)
	{
		if(productos[i] == -1)
		{
			indice = i;
			break;
		}
	}
	
	return indice;
}

int menu()
{
	int menu;
	
	system("cls");
  	system("color 0A");
  	printf("\n 			  *MENU PRINCIPAL* 		 \n\n\n");
  	printf("1.ALTA \n\n");
  	printf("2.MODIFICACION\n\n");
  	printf("3.BAJA\n\n");
  	printf("4.INFORMAR\n\n");
  	printf("5.LISTAR\n\n\n");
  	printf("9.Salir.\n\n\n");
  	printf("INGRESE OPCION: ");
  	scanf("%d",&menu);
  	
	while(menu <1 || menu >9)
  	{
  		printf("\nError, reingrese opcion: ");
  		fflush(stdin);
  		scanf("%d",&menu);
	}
	
	return menu;
}

int validarCod (int desde, int hasta, int cod[])
{
	int supera;
	
	for(i=0; i<MAX; i++)
	{
		if(cod[i] < desde || cod[i] > hasta)
			supera = 1; // 1 = FALSE;
			
		while(supera == 1)
		{
			printf("\nError, reingrese codigo valido: ");
			scanf("%d", &cod[i]);
		}
		
		break;
	}
	
	return 0;  //  0 = TRUE;
}

int validarDesc (int max, char desc[])
{
	int supera;
	
	for(i=0; i<MAX; i++)
	{
		if(strlen(desc[i]) > max)
			supera = 1;
	}
	
	while(supera == 1)
	{
		printf("\nError, reingrese descripcion mas corta: ");
		fflush(stdin);
		gets(desc);
	}
	
	return 0;
}

int validarImporte (int menor, int imp[])
{
	int supera;
	
	for(i=0; i<MAX; i++)
	{
		if(imp[i] < menor)
		supera = 1;
		
		while(supera == 1)
		{
			printf("\nError, reingrese importe valido: ");
			scanf("%f", &imp[i]);
		}
	}
	
	return 0;
}

int validarCant (int menor, int cant[])
{
	int supera;
	
	for(i=0; i<MAX; i++)
	{
		if(cant[i] < menor)
			supera = 1;
			
		while(supera == 1)
		{
			printf("\nError, reingrese cantidad valida: ");
			scanf("%d", &cant[i]);
		}
	}
	
	return 0;
}

void alta (int cod[CANT], char desc[CANT][MAX], float importe[CANT], int cant[CANT])
{	
	int val;
	
	system("cls");
	system("color 0A");
	printf("\n 			  *MENU ALTAS* 		 \n\n\n");
	
	indice = buscarLibre(cod);
	
	if(cod[indice] != -1)
	{
		system("cls");
		system("color 0A");
		printf("\n\nNo hay mas lugar.");
		printf("\n\nPresione una tecla para continuar..");
		getch();
	}
	else
	{
		printf("\nIngrese Codigo: ");
		scanf("%d", &cod[indice]);
		validarCod(1, 1000, cod[indice]);
				
		printf("\nIngrese Descripcion: ");
		fflush(stdin);
		gets(desc[indice]);
		validarDesc(50, desc[indice]);
		
		printf("\nIngrese Importe: ");
		scanf("%f",&importe[indice]);
		validarImporte(0, importe[indice]);
		
		printf("\nIngrese Cantidad: ");
		scanf("%d",&cant[indice]);
		validarCant(0, cant[indice]);
		
		flag = 0;
		
		mayorImp = importe[indice];
		
		if(importe[indice] > mayorImp)
		{
			mayorImp = importe[indice];
		}
		
		totalImp+=importe[indice];
		acumCod++;
	
		system("cls");
		
		if(flag == 0)
		{
			system("color 0C");
			printf("\nSe completo el registro exitosamente\n\nPresione una tecla para volver al menu..");
			getch();
		}
		else
		{
			system("color 0C");
			printf("\nNo se han guardado los cambios\n\nPresione una tecla para volver al menu..");
			getch();
		}
	}
}

void modificacion(int cod[CANT], char desc[CANT][MAX],  float importe[CANT], int cant[CANT])
{
	int auxcod[MAX];
	
	system("cls");
	system("color 0A");
	printf("\n 			  *MENU MODIFICACION* 		 \n\n\n");

	for(i=0; i<CANT; i++)
	{
		printf("\nIngrese Codigo de Producto a Modificar: ");
		scanf("%d",&auxcod[i]);
		validarCod(1,1000,auxcod[i]);
		
		if(auxcod[i] != cod[i])
		{
			printf("\nEl registro no se ha encontrado..\n\nPresione una tecla para volver al menu..\n\n");
			getch();
			break;
		}
		else
		{
			system("cls");
			system("color 0F");
			printf("\nEl registro se ha encontrado..\nPresione una tecla..");			
			getch();
			
			system("cls");
			system("color 0A");
			printf("\n 			  *MENU MODIFICACION* 		 \n\n\n");
			
			printf("\nIngrese Descripcion: ");
			fflush(stdin);
			gets(desc[i]);
			validarDesc(50, desc[i]);
			
			printf("\nIngrese Importe: ");
			scanf("%f",&importe[i]);
			validarImporte(0, importe[i]);
			
			printf("\nIngrese Cantidad: ");
			scanf("%d",&cant[i]);
			validarCant(0, cant[i]);
			
			flag = 1;
		}
		
		if(flag == 1)
		{
			system("cls");
			system("color 0C");
			printf("\nSe completo el registro exitosamente\n\nPresione una tecla para volver al menu..");
			getch();
		}
		else
		{
			system("cls");
			system("color 0C");
			printf("\nNo se han guardado los cambios\n\nPresione una tecla para volver al menu..");
			getch();
		}
		break;
	}
}

void baja(int cod[CANT], char desc[CANT][MAX], float importe[CANT], int cant[CANT])
{
	int auxcod[CANT];
	
	auxcod[CANT] = cod[CANT];
	
	system("cls");
	system("color 0A");
	printf("\n 			  *MENU BAJA* 		 \n\n\n");
	
	for(i=0; i<CANT; i++)
	{
		printf("\nIngrese Codigo de Producto a dar de Baja: ");
		scanf("%d",&auxcod[i]);
		validarCod(1,1000,auxcod[i]);
		
		if(auxcod[i] != cod[i])
		{
			printf("\nEl registro no se ha encontrado..\n\nPresione una tecla para volver al menu..\n\n");
			getch();
			break;
		}		
		else
		{
			system("cls");
			system("color 0F");
			printf("\nEl registro se ha encontrado..\nPresione una tecla..");			
			getch();
						
			cod[i] = -1;
			desc[i][0] = '\0';
			importe[i] = 0;
			cant[i] = 0;
			flag = 1;
		}
		
		if(flag == 1)
		{
			system("cls");
			system("color 0F");
			printf("\nEl registro se ha boleteado..\nPresione una tecla..");
		}
		else
		{
			system("cls");
			system("color 0F");
			printf("\nEl registro se no se ha boleteado..\nPresione una tecla..");
		}
		
		break;
	}
}

float promedio(float imp)
{
	imp = (float)(totalImp/acumCod);
	
	return imp;
}

void informar(int cod[CANT], char desc[CANT][MAX], float importe[CANT], int cant[CANT])
{
	int acumSup = 0;
	
	system("cls");
	system("color 0A");
	printf("\n 			  *MENU INFORMAR* 		 \n\n\n");
	
	printf("\nMayor Importe:\n\n");
	printf("Importe: \t Codigo: \t Descripcion: \t Cantidad: \n\n");
	
	for(i=0; i<CANT; i++)
	{	
		if(cod[i]!= -1)
		printf("%.1f \t\t %d \t\t %s \t\t %d\n",mayorImp,cod[i],desc[i],cant[i]);
	}
	
	promImp = promedio(importe[indice]);
	printf("\nPromedio:\n\n");
	printf("\n%.1f",promImp);
	
	printf("\n\nCantidad que superan:\n\n");
	
	if(importe[indice] > promImp)
	{
		acumSup++;
	}			
	printf("%d",acumSup);
	
	printf("\n\n\nIngrese una tecla para volver al menu..");
	getch();
}

void listar (int cod[CANT], char desc[CANT][MAX], float importe[CANT], int cant[CANT])
{
	int auxcant, bandera;
	char auxString[100];
	
	system("cls");
	system("color 0A");
	printf("\n 			  *MENU INFORMAR* 		 \n\n\n");
	
	for(i=0; i<CANT-1; i++)
	{
		for(j=i+1; j<CANT; j++)
		{
			if(cant[i] < cant[j])
			{
				auxcant = cant[i];
				cant[i] = cant[j];
				cant[j] = auxcant;
			}
		}
	}
	
	for(i=0; i<CANT-1; i++)
	{
		for(j=i+1; j<CANT; j++)
		{
			if(strcmp(desc[i], desc[j])>0)
			{
				strcpy(auxString, desc[i]);
				strcpy(desc[i], desc[j]);
				strcpy(desc[j], auxString);
				bandera = 1;
			}
		}
	}
	
	printf("\n\nMuestro Cantidad Descendentemente:\n");
	
	for(i=0; i<CANT; i++)
	{
		if(cod[i]!= -1)
		printf("%d\n",cant[i]);
	}
	
	printf("\n\nMuestro Descripcion Ascendentemente:\n");
	
	for(i=0; i<CANT; i++)
	{
		if(cod[i]!= -1 && bandera == 1)
		printf("%s\n",desc[i]);
	}
	
	printf("\n\nPresione una tecla para vovler al menu..\n");
	getch();
}
