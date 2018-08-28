#include <stdio.h>
#include <stdlib.h>

int main()
{
   int opcion;

   do
   {
    printf("1-sumar\n");
    printf("2-restar\n");
    printf("3-multiplicar\n");
    printf("4-dividir\n");
    printf("5-salir\n");

    printf("ingrese una opcion:");
    scanf(" %d", &opcion);

    switch(opcion)
    {
        case 1:
            printf("Estoy sumando");
        break;
        case 2:
            printf("Estoy restando");
        break;
        case 3:
            printf("Estoy multiplicando");
        break;
        case 4:
            printf("Estoy dividiendo");
        break;
        case 5:
            printf("saliste");
        default:
            printf("el valor ingresado no es una opcion valida");
    }


    system("pause");
    system("cls");
   }while(opcion != 5);




    return 0;
}
