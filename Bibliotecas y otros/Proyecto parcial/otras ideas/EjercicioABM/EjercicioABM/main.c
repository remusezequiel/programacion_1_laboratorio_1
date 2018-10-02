#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "abmAlumno.h"

#define T 10



/*
   * Ordenar por nombre
   * Que muestre los alumnos aprobados nota tiene que ser mayor a 6
   * Muestre los alumnos que se llaman juan
   * Que muestre los alumnos cuyo nombre comienzan con p
   * El alumno con mas nota(sabiendo que puede ser mas que uno)
    X -> El mas mediocre legajo=100 nota=5 se llama pepe, medir 1.74
   * Ingresar un legajo y permitir, la modificacion de la nota
    Transformar la carga de alumnos en una carga aleatoria
*/
//POSIBLES PROTOTIPOS

//FUNCION PRINCIPAL
int main()
{
    system("color 1F");
/*------------VARIABLES----------------------------------------------------------------------------*/
    sAlumno alumno[10];
    int cantidad;
    //int buscar[10];
    int i;
/*-------------------------------------------------------------------------------------------------*/
    //(1)INICIALIZO TODO EL ARRAY CON EL ESTADO EN BAJA
    inicializarVectorEnMenosUno(alumno,10);
    //
        for(i=0;i<10;i++)
        {
            printf(" %d", alumno[i].estado);
        }
    //(2)PREGUNTO CUANTOS ALUMNOS QUIERE DAR DE ALTA Y LEO LA CANTIDAD
    printf("cuantos alumnos quiere agregar? \n");
    scanf("%d",&cantidad);
    //(3)PIDO Y CARGO AL SISTEMA LOS DATOS DE LA CANTIDAD PEDIDA
    cargarPorCantidad(cantidad,alumno,10);
    getch();
    //(4)MUESTRO TODOS LOS DATOS INGRESADOS
    mostrarListaTipo_sAlumno(alumno,10);
    getch();
    //(5)ORDENO ALFABETICAMENTE Y MUESTRO ORDENADOS
    ordenarListaAlfabeticamente(alumno,10);
    printf("-----------------------------------------------------------------------------------\n");
    mostrarListaTipo_sAlumno(alumno,10);
    getch();
    //(6)MUESTRO APROBADOS
    printf("-----------------------------------------------------------------------------------\n");
    aprobados(alumno,10);
    getch();
    //(7)FILTRO POR NOMBRE LOS ALUMNOS
    printf("\n-----------------------------------------------------------------------------------\n");
    filtrarAlumnoPorNombre(alumno,10);
    getch();
    //
    for(i=0;i<10;i++)
    {
        printf(" %d", alumno[i].estado);
    }

    //(8)MUESTRO LOS ALUMNOS CON NOTA MAXIMA
    printf("\n-----------------------------------------------------------------------------------\n");
    notaMasAlta(alumno,10);
    getch();
    //(8)MUESTRO LOS ALUMNOS CON NOTA MAXIMA
    printf("\n-----------------------------------------------------------------------------------\n");
    modificarNota(alumno,10);
    getch();
    //(9)CARGAR DE FORMA ALEATORIA
    printf("\n-----------------------------------------------------------------------------------\n");
    caragaAleatoriaTipo_sAlumno(alumno,10);
    getch();
    //(10)MUESTRO LA NUEVA CARGA
    mostrarListaTipo_sAlumno(alumno,10);
    return 0;
}

//POSIBLES FUNCIONES
//parametros-> (sAlumno* array,int size);







