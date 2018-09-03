#include "biblioteca.h"
#include <stdio.h>

/*
    En los archivos .c van los desarrollos de las funciones de los prototipos definidos
*/

//funciones

int pedirEntero(char texto[])//funciona como un prompt
{
    int numero;

    printf("%s", texto);
    scanf(" %d", &numero);

    return numero;
}


//Pasaje por valor
/**trabaja copiando los valores de la variable. es decir en los espacios de memoria se guardan los mismos valores
int incrementarValor(int x)
{
    x++;
    return x;
}
*/

//paseaje por referencia
/**
    puntero = * -> me indica que lo que vas a usar de la variable es la direccion de memoria
    es decir en el espacio de memoria de y se guarda el espacio de mamoria de x
*/

void incrementarValor(int* y)
{
   *y++;
}



