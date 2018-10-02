#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "abmAlumno.h"


//(1) FUNCION INICIALIZAR VECTOR EN MENOS 1
int inicializarVectorEnMenosUno(sAlumno* array, int size)
{
    int retorno = -1;
    int i;

    if(size > 0 && array != NULL)
    {
        retorno = 0;
        for(i=0; i<size; i++)
        {
            array[i].estado= -1;
            array[i].legajo= 0;
        }
    }
    return retorno;
}
//(2) FUNCION CARGAR UN TIPO DE DATO sAlumno
sAlumno cargarUnTipo_sAlumno()
{
    sAlumno alumno;
    char respuesta;

        printf("Ingrese el legajo del alumno: \n");
        scanf(" %d", &alumno.legajo);
        if(alumno.legajo < 0 || alumno.legajo==0)
        {
            do
            {
                printf("NO PUEDE GUARDAR UN ALUMNO CON LEGAJO CERO O NEGATIVO \a \n");
                printf("Ingrese el legajo del alumno: \n");
                scanf(" %d", &alumno.legajo);
            }while(alumno.legajo < 0 || alumno.legajo==0);
        }

        printf("Ingrese el nombre del alumno: \n");
        fflush(stdin);
        scanf(" %s", alumno.nombre);
        printf("Ingrese la nota del alumno: \n");
        scanf(" %d", &alumno.nota);
        printf("Quiere dar de alta al alumno? (s/n)");
        fflush(stdin);
        scanf(" %c", &respuesta);
        if(respuesta == 's')
        {
            alumno.estado = 0;////ACA VA ALTA PERO NO FUNCA
        }
        else if(respuesta=='n')
        {
            printf("EL ALUMNO EXISTE PERO ESTA DADO DE BAJA!");
            alumno.estado = -1;
        }

    return alumno;
}
//(3)FUNCION MOSTRAR UN TIPO DE DATO sAlumno
void mostrarUnTipo_sAlumno(sAlumno alumno)
{
    printf("_________________________________________________\n");
    printf(" %6d",alumno.legajo);
    printf(" %15s",alumno.nombre);
    printf(" %10d",alumno.nota);
    printf(" %6d\n",alumno.estado);

}
//(4)FUNCION CARGAR POR CANTIDAD
void cargarPorCantidad(int cantidad,sAlumno* array,int size)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        array[i]=cargarUnTipo_sAlumno();
    }
}
//(5)FUNCION MOSTRAR LISTADO
void mostrarListaTipo_sAlumno(sAlumno* array, int size)
{
    int i;
    printf("LISTA DE ALUMNOS: \n");
    printf("_________________________________________________\n");
    printf(" LEGAJO \t NOMBRE \t NOTA \n");
    for(i=0; i<size; i++)
    {
        if(array[i].estado == 0)
        {
            mostrarUnTipo_sAlumno(array[i]);
        }
    }
    printf("_________________________________________________\n");
}
//(6)FUNCION ORDENAR ALFABETICAMENTE
void ordenarListaAlfabeticamente(sAlumno* array , int size)
{
    int i;
    int j;
    sAlumno auxiliar;
    //printf("_________________________________________________\n");
    //printf("LEGAJO \t NOMBRE \t NOTA \n");
    for(i = 1; i < size; i++)//inicializa i en 1
    {
        j = i-1; //inicializa j en 0
        auxiliar = array[i];
        //Mientras se cumpla la condicion. El array en i ocupara el lugar en j
        while( j>=0 && stricmp(array[j].nombre, auxiliar.nombre)>0)
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1]= auxiliar;
    }

}
//(7)FUNCION APROBADOS
void aprobados(sAlumno* array,int size)
{
    int i;
    printf("LOS ALUMNOS APROBADOS SON:\n");
    printf("_________________________________________________\n");
    printf(" LEGAJO \t NOMBRE \t NOTA \n");
    for(i=0;i<size;i++)
    {
        if(array[i].nota>6 && array[i].estado == 0)//ACA VA ALTA PERO NO FUNCA
        {
          mostrarUnTipo_sAlumno(array[i]);
        }
    }
    printf("_________________________________________________\n");
}
//(8)FUNCION FILTRAR POR PRIMER LETRA DEL NOMBRE
void filtrarAlumnoPorNombre(sAlumno* array,int size)
{
    int i;
    char letra;
    printf("OPCION FILTRAR POR ALUMNO: \n");
    printf("Ingrese con que letra comienza el nombre del alumno:\n");
    fflush(stdin);
    scanf(" %c",&letra);
    printf("_________________________________________________\n");
    printf(" LEGAJO \t NOMBRE \t NOTA \n");
    for(i=0;i<size;i++)
    {
        if(array[i].nombre[0] == letra)
        {
            mostrarUnTipo_sAlumno(array[i]);
        }
    }
    printf("_________________________________________________\n");
}
//(9)FUNCION NOTA MAS ALTA
void notaMasAlta(sAlumno* array, int size)
{
    int i;
    int max;
    max = 0;

    //AVERIGUO CUAL ES LA NOTA MAXIMA
    for(i = 0; i < size; i++)
    {
        if(array[i].estado==0 && array[i].nota>max)//ACA VA BAJA PERO NO FUNCA
        {
            max = array[i].nota;
        }
    }

    //IMPRIMO EN PANTALLA TODOS LOS ALUMUMNOS
    //QUE CUMPLEN LA CONDICION NOTA MAXIMA
    printf("ALUMNOS QUE OBTUVIERON LA NOTA MAS ALTA: \n ");
    printf("_________________________________________________\n");
    printf(" LEGAJO \t NOMBRE \t NOTA \n");

    for(i = 0; i < size; i++)
    {
        if(array[i].estado==0 && array[i].nota == max)//ACA VA BAJA PERO NO FUNCA
        {
            mostrarUnTipo_sAlumno(array[i]);
        }

    }
    printf("_________________________________________________\n");

}
//(10)FUNCION MODIFICAR NOTA
void modificarNota(sAlumno* array, int size)
{
    int i;
    sAlumno aux;
    char respuesta;
    printf("MODIFICAR NOTA DE UN ALUMNO: \n");
    printf("\n");
    printf("Ingrese el legajo del alumno:\n");
    scanf(" %d", &aux.legajo);

    for(i=0; i<size;i++)//itero el array
    {
        if(aux.legajo == array[i].legajo && array[i].estado != -1)
        {
            printf("_________________________________________________\n");
            printf("LEGAJO \t NOMBRE \t NOTA \n");
            mostrarUnTipo_sAlumno(array[i]);//Muestro los datos del alumno
            printf("\n");
            printf("Realmente desea modificar la nota del alumno?(s/n)");//imprimo la pregunta
            fflush(stdin);
            scanf(" %c", &respuesta);
            if(respuesta == 's')//si es s la respuesta modifico
            {
                printf("Ingrese la nueva nota: \n");
                scanf(" %d", &array[i].nota);
                aux=array[i];
            }
        }
    }

    if(respuesta=='s')//si es s la respuesta le muestro los datos nuevos
    {
        printf("Nota ingresada satisfactoriamente\n \n");
        printf("Nuevos datos del alumno:\n");
        printf("_________________________________________________\n");
        printf("LEGAJO \t NOMBRE \t NOTA \n");
        mostrarUnTipo_sAlumno(aux);
        respuesta='a';
    }
    else //si la respuesta no es s
    {
        printf("OPERACION CANCELADA!");
    }
}
//(11)FUNCION BUSCAR UN ESPACIO LIBRE
int buscaEspacioLibre(sAlumno* array, int size)
{
    int retorno = -1;
    int i;

    if(size > 0 && array != NULL)
    {
        retorno = -2;
        for(i=0; i<size; i++)
        {
            if(array[i].estado == -1)
            {
                retorno = i;
                printf(" %d", retorno);
                break;
            }
        }
    }
    return retorno;
}
//(12)FUNCION QUE CARGA ALUMNOS SOLO EN ESPACIOS LIBRES(NO RESCRIBE)
void cargarAlumnosEspaciosLibres(sAlumno* array, int size)
{
    int posicion;
    posicion = buscaEspacioLibre(array, size);

    if(posicion != -1)
    {
        array[posicion] = cargarUnTipo_sAlumno();
    }
    else
    {
        printf("SIN LUGARES!");
    }
}
//(13)FUNCION CARGAR ALEATORIAMENTE (EN EL LUGAR DESEADO)
void caragaAleatoriaTipo_sAlumno(sAlumno* array,int size)
{
    //VARIABLES
    int posicion;
    char respuesta;
    char continua;

    printf("CARGA ALEATORIA:\n");
    do
    {
        printf("Ingrese en que posicion desea cargar al alumno: \n");
        scanf(" %d", &posicion);
        //MIENTRAS SE INGRESE UN VALOR DIFERENTE AL SIZE
        while(posicion < 0 || posicion > size - 1)
        {
            printf(" \a ERROR!. POSICION INEXISTENTE! \n");
            printf("Ingrese una posicion valida \n");
            scanf(" %d", &posicion);
        }
        //MIENTRAS LA POSICION ESTE OCUPADA
        while(array[posicion].estado == 0)////ACA VA ALTA PERO NO FUNCA
        {
            printf("\a LUGAR OCUPADO! \n");
            printf("Desea volver a intentarlo?\n");
            fflush(stdin);
            scanf(" %c", &respuesta);
            printf("\n");
            if(respuesta == 's')
            {
                printf("Ingrese en que posicion desea cargar al alumno: \n");
                scanf(" %d", &posicion);
            }
        }
        //UNA VEZ INGRESADA LA POSICION EN UN ESPACIO CON BAJA
        if(array[posicion].estado == -1)//ACA VA BAJA PERO NO FUNCA
        {
            array[posicion] = cargarUnTipo_sAlumno();
            getch();
            printf("Desea realizar otra carga? s/n \n");
            fflush(stdin);
            scanf(" %c", &continua);
        }
        //SI NO SE QUIZO INGRESAR
        if(respuesta == 'n')
        {
            printf("OPERACION CANCELADA!\n");
        }
    }
    while(continua == 's');

}

