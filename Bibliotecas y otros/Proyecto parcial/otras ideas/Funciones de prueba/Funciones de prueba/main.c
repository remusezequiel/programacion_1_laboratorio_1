#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "fdp.h"
#include "garabatos.h"

#define T 20

/**
Crea un programa que usando puts y gets (sin usar printf ni scanf) pida al usuario
su nombre y ciudad de nacimiento. Tras esto se deberá mostrar el siguiente mensaje:
“Bienvenido nombre, encantado de hablar con alguien de ciudad”.
Donde nombre y ciudad deben ser reemplazados por los datos proporcionados por el
usuario. Por ejemplo si el usuario introduce como nombre Juan y como ciudad Lima,
deberá mostrarse “Bienvenido Juan, encatando de hablar con alguien de Lima”.
**/

int main()
{
    /*
    char nombre[T];
    char ciudad[T];

    puts("Ingrese su nombre: ");
    gets(nombre);
    puts("Ingrese su ciudad de nacimiento: ");
    gets(ciudad);
    puts("Bienvenido");
    puts(nombre);
    puts(", encantado de hablar con alguien de ");
    puts(ciudad);
    */

    /**JUGANDO CON PUNTEROS**/
    int i,cant,tam;

    printf("Ingresar una cantidad de datos: ");
    scanf("%d",&cant);
    printf("Ingresar el tamanio: ");
    scanf("%d",&tam);

    char *arreglo[cant];
    char* dato;

    for(i=0; i<cant; i++){
        printf("Ingresar dato %i: ",i);
        dato = (char*) malloc(tam);
        scanf("%s",dato);
        arreglo[i] = dato;
    }

    printf("\nLos datos ingresados son: \n");
    for(i=0; i<cant; i++){
        printf("=>%s\n",arreglo[i]);
    }

    return 0;
}
