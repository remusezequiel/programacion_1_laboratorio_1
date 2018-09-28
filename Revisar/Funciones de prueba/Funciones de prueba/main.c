#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "opMath.h"
#include "fdp.h"

#define T 3


int main()
{
    char vector[T];

    inicializar(vector,T);
    ingresarArray(vector,T);
    mostrarArray(vector);


    return 0;
}

