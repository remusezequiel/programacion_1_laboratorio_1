#include <stdio.h>
#include <stdlib.h>
#include "opMath.h"
#include "fdp.h"
#include "estilo.h"
void lineaLisa(void)
{
    printf("_________________________________\n");
}
void lineaPunteada(void)
{
    printf("---------------------------------\n");
}
void titulosDeTabla(char* array, int size)
{
    //int i;
    lineaLisa();
    puts(array);
    lineaLisa();
}
