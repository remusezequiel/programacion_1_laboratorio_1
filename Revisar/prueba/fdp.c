#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fdp.h"

//(1)FUNCION VOLVER A INGRESAR
int volverAIngresar(void)
{
    char respuesta;

    printf("Desea seguir ingresando datos? (s/n)");
    fflush(stdin);
    scanf(" %c",&respuesta);

    return respuesta;
}
//(2)FUNION MOSTRAR ARRAY
int mostrarArray(char* array, int size)
{
    int i;
    int retorno;
    printf("ELEMENTOS DEL VECTOR: \n");
    if(array != NULL)
    {
        retorno = 0;
        printf("__________________________\n");
        for(i=0;i<size;i++)
        {
            printf(" %c \n", array[i]);
        }
        printf("__________________________\n");
    }

    return retorno;
}
//(3)FUNCION INICIALIZAR ARRAY
int inicializar(char* array, int size)
{
    int i;
    int retorno=-1;

    if(array!=NULL && size>0)
    {
        retorno = 0;
        for(i=0; i<size; i++)
        {
            array[i] = -1;
        }
    }
    return retorno;
}
//(4)FUNCION BUSCAR LIBRE EN UN CHAR
int Char_buscarLugarLibre(char* array,int size)
{
    int retorno = -1;
    int i;

    if(size > 0 && array != NULL)
    {
        retorno = -2;
        for(i=0;i<size;i++)
        {
            if(array[i] == -1)
            {
                retorno = i;

                break;
            }
        }
    }
    return retorno;
}
//(5)FUNCION INGRESAR ARRAY
int ingresarArray(char* array,int size)
{
    int  i;
    int retorno = -1;
    char pregunta;
    char aux;
    if(array!=0 && size>0)
    {
        retorno = -2;
        for( i=0; i<size; i++)
        {
            printf("Ingrese el elemento del a acumular: \n");
            fflush(stdin);
            scanf(" %c", &array[i]);
            pregunta = volverAIngresar();
            aux=array[i];
            if(pregunta == 'n')
            {
                array[i]=aux;
                i=size;
            }
        }
    }
    return retorno;
}

