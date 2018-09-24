#include <stdio.h>
#include <stdlib.h>

int main()
{
    int unNumero = 7;
    float unFlotante = 5.3;
    float suma;
    char unChar = 'u';



    //printf("El numero es:   \n %d", unNumero);
    //printf("El flotante es: \n %f", unFlotante);
    //printf("El caracter es: \n %c", unChar);

    //printf("El numero es:   \n %d \n El flotante es: \n %f \n El caracter es: \n %c", unNumero, unFlotante, unChar);

    //printf("direccion de un numero: %d \n Valor: %d", &unNumero, unNumero);

    printf("Ingrese un numero: ");
    scanf(" %d", &unNumero);

    printf("El numero es: %d", unNumero);
   //--------------------------------------
    printf("\n Ingrese un numero real: ");
    //fflush(stdin);sirve para indos
    setbuf(stdin,NULL);//sirve parra linux
    scanf(" %f", &unFlotante);

    printf("\n El numero es: %.2f", unFlotante);
    //-----------------------------------------
    suma = unNumero + unFlotante;

    printf("\n La suma es: %.2f", suma);
    //------------------------------------------
    //printf("Ingrese un caracter: ");
    //scanf(" %c", &unChar);
    //fflush(stdin);

    //printf("El numero es: %d", unNumero);



    return 0;
}
