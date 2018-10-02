#include <stdio.h>
#include <stdlib.h>
#include "garabatos.h"
//(1)FUNCION LINEA
void linea(void)
{
    printf("__________________________________\n");
}

//(2)FUNCION MOSTRAR ARRAY ENTRE LINEAS
void mostrarArrayEntreLineas(char* array)
{
    printf("__________________________\n");

    printf(" %s /t", array);

    printf("__________________________\n");
}

