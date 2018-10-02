#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "garabatos.h"
#include "lib.h"
#include "inmues.h"

#define
#define


//POSIBLES PROTOTIPOS

//FUNCION PRINCIPAL
int main()
{
    system("color 1F");

/*________________________________VARIABLES_______________________________________________*/
    int opcion;

    // Tipo struct y se inicializa


    // Tipo struct y se inicializa

/*_______________________________________________________________________________________*/
    // Carga datos de test


    do
    {
        system("clr");
        //MOSTRAR MENU DE OPCIONES

        //PEDIR OPCION
        switch(opcion)
        {
            case 1: // OPCION (1)
                break;
            case 2: // OPCION (2)
                //FUNCIONES DE LA OPCION
                break;
            case 3: // OPCION (3)
                //FUNCIONES DE LA OPCION
                break;
            case 4: // OPCION (4)
                //FUNCIONES DE LA OPCION
                break;
            case 5: // OPCION (5)
                //FUNCIONES DE LA OPCION
                break;
            case 6: // OPCION (6)
                //FUNCIONES DE LA OPCION
                break;
            case 7: // OPCION (7)
                //FUNCIONES DE LA OPCION
                system("pause");
                break;
            case 8: // OPCION (8)
               //FUNCIONES DE LA OPCION
                system("pause");
                break;
            case 9:
                //SALIR
                break;
            default:
                linea();
                printf("\n NO ES UNA OPCION VALIDA!!!\n");
                linea();
                pause();
                break;
        }

    }while(menuOpcionElegida != 9);

    return 0;

}

//POSIBLES FUNCIONES

