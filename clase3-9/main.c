#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h" //las comillas me indica que la biblioteca esta dentro del directorio que estas utilizando


//funcion principal
int main()
{
    /**Primer parte de la clase
    int edad;
    int nota;
    int legajo;


    edad=pedirEntero("Ingrese edad:");//funciona como un prompt
    printf("Edad: %d", edad);
    nota=pedirEntero("Ingrese nota:");
    printf(" %d", nota);
    legajo=pedirEntero("ingrese legajo:");
    printf(" %d", legajo);
    */

    int x;



    return 0;




}


//funciones
int pedirEntero(char texto[])
{
    int numero;

    printf("%s", texto);
    scanf(" %d", &numero);

    return numero;
}

