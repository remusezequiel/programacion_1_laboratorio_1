#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "biblioClase284.h"

#define T 3
/******************************CLASE*14*09****************************************************************************
    definir:

    -> vacio(ilogico) = -1
    -> OCUPADO = 1
    -> borrado = 0

    "Hace que todas las funciones que hiciste devuelvan algo"

    (1)int buscarLibre(char*,int(tam),iligico)
    (2)int inicializar(char*,int);
    (3)Para un if cualquier numero distinto de 0 es tomado como verdadero
    solo el 0 significa falso
    (4)HAcer la baja en el programa del ABM -> como modificar, solo que modificas el estado.
*********************************************************************************************************************/


int main()
{
    eAlumno listado[T];
    int opcion;
    int cargo;
    int auxInt;
    int i;
    //int flag;
    char respuesta;

    inicializarArrayIlogicamenteNota(listado, T);

    do
    {
        opcion = menuOpciones();

        switch(opcion)
        {
        case 1:
            if(cargarAlumnosPorEspacioLibre(listado, T) != -1)
            {
                printf("Carga satisfactoria");
            }
            else
            {
                printf("No hay espacio!");
            }
        break;
        case 2:
            mostrarListadoDeAlumnos(listado, T);
            break;
        case 3:
            ordenarPorNombre(listado, T);
            break;
        case 4:
            alumnosAprobados(listado, T);
            break;
        case 5:
            alumnoNombreConP(listado, T);
            break;
        case 6:
            alumnosNotaMasAlta(listado, T);
            break;
        case 7:

            cargo = 0;
            printf("Ingrese un legajo: ");
            scanf("%d", &auxInt);

            for(i=0; i<T; i++)
            {

                if(listado[i].estado!=VACIO &&
                        auxInt == listado[i].legajo)
                {
                    printf("Ingrese la nueva nota: ");
                    scanf("%d", &listado[i].nota);
                    cargo = 1;
                }

            }

            if(cargo==0)
            {
                printf("Legajo inexistente");
            }


            /*
                            1-pedir legajo
            2-busco ese legajo en los alumnos
                si lo encuentra, pide una nueva nota
                no lo encuentra, notifico al usuario
            */




        break;
        case 8:
           // flag=0;
            printf("Ingrese un legajo: ");
            scanf("%d", &auxInt);
            //printf("Quiere realmente darle la baja?(s=si/n=no) : ");

            for(i=0; i<T; i++)
            {
                if(listado[i].estado!=VACIO &&
                    auxInt == listado[i].legajo)
                {
                    printf("Quiere realmente darle la baja?(s=si/n=no) : ");
                    scanf("%c", &respuesta);
                   // flag = 1;
                    if(respuesta=='s')
                    {
                        listado[i].estado=VACIO;
                    }

                }
            }
            if(respuesta=='s')
            {
                listado[i].estado=VACIO;
            }

        break;
        case 9:
            opcion = 9;
        break;
        default:
            printf("Ingrese opcion valida");
        }

    }
    while(opcion != 9);

    return 0;
}
