#include <stdio.h>
#include <stdlib.h>
#include "garabatos.h"
#include "lib.h"

#define T 10
/**********************COMENTARIOS************************

**********************************************************/


int main()
{
    /*----------------------VARIABLES--------------------------------*/
    int cantidad;
    int id;
    int opcion;
    sAsociado asociado[T];
    /*---------------------------------------------------------------*/
    inicializar(asociado,T);
    //SENTENCIAS:
    do
    {
        //SE DAN A CONOCER LAS OPCIONES
        linea();
        printf("\t OPCIONES \n");
        linea();
        printf("1)  ALTA DEL ASOCIADO \n");
        linea();
        printf("2) MODIFICAR DATOS DEL ASOCIADO \n");
        linea();
        printf("3) BAJA DEL ASOCIADO: \n");
        linea();
        printf("4) NUEVA LLAMADA: \n");
        linea();
        printf("5) ASIGNAR AMBULANCIA:ASIGNAR AMBULANCIA: \n");
        linea();
        printf("6) INFORMAR \n");
        linea();
        opcion = ingresarOpcion();                //LLAMO A LA FUNCION INGRESAR OPCION
        switch(opcion)
        {
            case 1:                               //CASO DE LA SUMA
                printf("1)\n \t ALTA DEL ASOCIADO \n");

                printf("A cuantas personas quiere asociar?: \n");
                scanf(" %d", &cantidad);
                siguienteId(asociado,T);
                cargarPorCantidad(cantidad,asociado,T);

                mostrarListaTipo_sAsociado(asociado,T);

            break;
            case 2:
                printf("2) \n \t MODIFICAR DATOS DEL ASOCIADO \n");
                printf("Ingrese el numero de asociado");
                scanf(" %d",&id);
                modificar(asociado,T,id);
            break;
            case 3:
                printf("3) \n \t BAJA DEL ASOCIADO: \n");
                printf("Ingrese el numero de asociado");
                scanf(" %d",&id);
                darBaja(asociado,T,id);
            break;
            case 4:
                printf("4) \n \t NUEVA LLAMADA: \n");


            break;
            case 5:
                printf("5) \n \t ASIGNAR AMBULANCIA:ASIGNAR AMBULANCIA: \n");


                break;
            case 6:
                printf("6) \n \t INFORMES \n");

            break;
            default :
                printf("Ingrese una opcion valida!");
        }

        system("pause");
        system("cls");
    }while(opcion < 6);

    return 0;
}


