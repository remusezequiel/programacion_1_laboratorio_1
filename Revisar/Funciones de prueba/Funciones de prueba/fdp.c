#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fdp.h"

//FUNION MOSTRAR ARRAY
int mostrarArray(char* array)
{
    int retorno;
    printf("ELEMENTOS DEL VECTOR: \n");
    if(array != NULL)
    {
        retorno = 0;
        printf("__________________________\n");
        printf(" %s \n", array);
        printf("__________________________\n");
    }

    return retorno;
}

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



int ingresarArray(char* array,int size)
{
    int  i;
    int retorno;
    retorno = -1;
    if(array!=0 && size>0)
    {
        retorno=0;
        for( i=0; i<size; i++)
        {
            printf("Ingrese el elemento del a acumular: \n");
            fflush(stdin);
            scanf(" %c", &array[i]);
        }
    }
    return retorno;
}

