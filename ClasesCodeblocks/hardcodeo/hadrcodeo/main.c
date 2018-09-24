#include <stdio.h>
#include <stdlib.h>

/**FUNCION PARA HARDCODEAR DATOS
(HACER LA FUNCION)

void inicializarAlumnos(SAlumno* ,int);
void inicializarAlumnos(SAlumno* listado,int tam)
{
    float promedio[3]={5,9,7};
    int legajo[]={1,2,3};
    char nombre[3][35]={"Juan","Maria","Luis"};
    int edad[3]={18,26,47};

    int i;
    for(i=0; i<3 ;i++)
    {
        listado[i].legajo=legajo[i];
        listado[i].promedio=promedio[i];
        listado[i].edad=edad[i];
        strcpy(listado[i].nombre. nombre[i]);
        listado[i].estado[i]=1;
    }
}
**/
typedef struct
{
    int day;
    int month;
    int year;
}sFecha;

typedef struct
{
    int id;
    char nombre[50];
    sFecha nacimiento;
    sFecha ingreso;
}sEmpleado;

int main()
{
    sEmpleado miEmpleado;

    miEmpleado.id = 25;
    miEmpleado.nacimiento.day = 20;
    miEmpleado.nacimiento.month = 3;



    return 0;
}

