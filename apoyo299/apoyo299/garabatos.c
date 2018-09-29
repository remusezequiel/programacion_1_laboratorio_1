#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "fdp.h"
#include "garabatos.h"

//FUNCION LINEA
void linea(void)
{
    printf("__________________________________________\n");
}

void mostrarOpciones(void)
{
    linea();
    printf(" /t OPCIONES /n");
    printf(" /t 1) ALTA DEL ASOCIADO /n");
    printf(" /t 2) MODIFICAR DATOS DEL ASOCIADO /n");
    printf(" /t 3) BAJA DEL ASOCIADO /n");
    printf(" /t 4) NUEVA LLAMADA/n");
    printf(" /t 5) ASIGNAR AMBULANCIA/n");
    printf(" /t 6) INFORMAR /n");
    linea();
}
//FUNCION MOSTRAR ARRAY ENTRE LINEAS
void mostrarArrayEntreLineas(char* array)
{
    printf("__________________________\n");

    printf(" %s /t", array);

    printf("__________________________\n");
}
//
