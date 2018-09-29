#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "garabatos.h"

//FUNCION LINEA
void linea(void)
{
    printf("________________________________________________");
    printf("|\n");
}


//FUNCION MOSTRAR ARRAY ENTRE LINEAS
void mostrarArrayEntreLineas(char* array)
{
    printf("__________________________\n");

    printf(" %s /t", array);

    printf("__________________________\n");
}
//
