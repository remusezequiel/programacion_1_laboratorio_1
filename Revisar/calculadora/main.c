#include <stdio.h>
#include <stdlib.h>
#include "opMath.h"
/******************COMENTARIOS***********************************************************************
 * La calculadora toma valores flotantes y devuelve valores flotantes, exepto cuando se factoriza.
 * Hay una funcion para cada tarea realizada. Es decir, una que pide que ingreses la opcion, otra
 * para ingresar un numero y luego una para cada operacion matematica.
 *
 * -> NOMBRE Y APELLIDO: EZEQUIEL REMUS
 * -> DIVICION: 1° C
****************************************************************************************************/

//*****************FUNCION PRINCIPAL*****************************************************************
int main()
{
    //VARIABLES:
    int numeroFactorial;
    float numeroUno;
    float numeroDos;
    int opcion;

    //SE DAN A CONOCER LAS OPCIONES
    printf("Ingrese una de las siguientes opciones:\n");
    printf("1) Suma\n");
    printf("2) Resta\n");
    printf("3) Producto\n");
    printf("4) Divicion\n");
    printf("5) Factorial\n");

    //SENTENCIAS:
    do
    {
        opcion = ingresarOpcion();                //LLAMO A LA FUNCION INGRESAR OPCION

        switch(opcion)
        {
            case 1:                               //CASO DE LA SUMA
                printf("Estas sumando\n");

                numeroUno = ingresarNumero();     //LLAMO A LA FUNCION INGRESAR NUMERO
                numeroDos = ingresarNumero();     //LLAMO A LA FUNCION INGRESAR NUMERO

                sumar(numeroUno,numeroDos);       //LLAMO A LA FUNCION SUMA
            break;
            case 2:                               //CASO DE LA RESTA
                printf("Estas restando");

                numeroUno= ingresarNumero();      //LLAMO A LA FUNCION INGRESAR NUMERO
                numeroDos= ingresarNumero();      //LLAMO A LA FUNCION INGRESAR NUMERO

                resta(numeroUno,numeroDos);       //LLAMO A LA FUNCION RESTA
            break;
            case 3:
                printf("Estas multiplicando");

                numeroUno= ingresarNumero();      //LLAMO A LA FUNCION INGRESAR NUMERO
                numeroDos= ingresarNumero();      //LLAMO A LA FUNCION INGRESAR NUMERO

                producto(numeroUno,numeroDos);    //LLAMO A LA FUNCION PRODUCTO
            break;
            case 4:
                printf("Estas dividiendo");

                numeroUno= ingresarNumero();      //LLAMO A LA FUNCION INGRESAR NUMERO
                numeroDos= ingresarNumero();      //LLAMO A LA FUNCION INGRESAR NUMERO

                division(numeroUno,numeroDos);    //LLAMO A LA FUNCION DIVICION
            break;
            case 5:
                printf("Estas factorizando");

                numeroFactorial= ingresarNumero();//LLAMO A LA FUNCION INGRESAR NUMERO

                factorial(numeroFactorial);      //LLAMO A LA FUNCION FACTORIAL
                break;
            default :
                printf("no es una opcion valida");
        }

        system("pause");
        system("cls");
    }while(opcion < 6);

    return 0;
}
//***************************************************************************************************








