#include <stdio.h>
#include <stdlib.h>
#include "garabatos.h"
#include "inmues.h"


//(1)FUNCION INGRESE UN ENTERO
int ingresoEntero(char mensaje[])
{
    int numero;
    printf(" %s \n", mensaje);
    scanf(" %d", &numero);
    return numero;
}
//(2)FUNCION INGRESE UN NUMERO FLOTANTE
float ingresoFlotante(char mensaje[])
{
    float numero;
    printf("%s \n", mensaje);
    scanf(" %f", &numero);
    return numero;
}
//(3)FUNCION INGRESE UN CARACTER
char ingresoChar(char mensaje[])
{
    char car;
    printf(" %s \n", mensaje);
    scanf(" %c", &car);
    return car;
}
//(4)FUNCION INGRESE UN ID
int ingresoId(int size)
{
	int id;

	printf("Ingrese su numero de identificación: \n");
	scanf(" %d", &id);

	do
	{
		printf("ERROR, EL ID INGRESADO NO EXISTE!");
		printf("Ingrese su numero de identificación: \n");
		scanf(" %d", &id);
	}while( id > size );//ya que se auto genera y se suma de a uno

	return id;
}
//(5)FUNCION INGRESE RESPUESTA
char ingresoRespuesta(char mensaje[])
{
	char respuesta;

	do
	{
		printf(" %s \n", mensaje);
		scanf(" %c", &respuesta);
	}while(respuesta != 's' && respuesta != 'n' );

	return respuesta;
}

//(6)FUNCION INGRESAR CADENA
int ingresaCadena(char* array, int size, char* mensaje)
{
    int retorno;
    char aux[800];

    puts(mensaje);//IMPRIMO EL MENSAJE

    fflush(stdin);

    gets(aux);
    if(array=!NULL && size>0)
    {   retorno = 0;
        while(strlen(aux) >= size)
        {   retorno = -1;
            printf("Error. %s", mensaje);
            fflush(stdin);
            gets(buffer);
        }
        strcpy(cadena, buffer);
    }
    return retorno;
}


