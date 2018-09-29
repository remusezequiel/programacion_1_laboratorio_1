#include <stdio.h>
#include <stdlib.h>
#include "garabatos.h"
#include "lib.h"

//FUNCION INICIALIZAR
int inicializar(sAsociado* array,int size)
{
    int retorno = -1;
    int i;
    if(size > 0 && array!= NULL)
    {
        retorno = 0;
        for(i=0; i<size; i++)
        {
            array[i].estado = BAJA;
            array[i].idAsociado = 0;
        }
    }
    return retorno;
}
//FUNCION SIGUIENTE ID
int siguienteId(sAsociado* asociado,int size)
{
    /*ALTA=1 & BAJA=0*/
    int retorno = -1;
    int i;
    if(size > 0 && asociado != NULL)
    {
        for(i=0; i<size; i++)//recorro el array
        {
            if(asociado[i].estado == ALTA)//si el asociado esta dado de alta
            {
                    if(asociado[i].idAsociado > retorno)
                    {
                        //asociado[i].idAsociado=i;
                        retorno=asociado[i].idAsociado;
                    }
            }
        }
    }

    return retorno+1;
}
//FUNCION BUSCAR POR ID
int buscarPorId(sAsociado* array,int size, int id)
{
    int retorno = -1;
    int i;
    if(size > 0 && array!= NULL)
    {
        retorno = -2;
        for(i=0;i<size;i++)
        {
            if(array[i].estado == ALTA && array[i].idAsociado == id)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}
//FUNCION INGRESAR OPCION
int ingresarOpcion(void)
{
    int opcion;
    linea();
    printf("Ingrese una opcion: \n");
    scanf(" %d", &opcion);
    linea();
    while(opcion>7 || opcion <1)
    {
        printf(" \a EL DATO INGRESADO NO CORRESPONDE A UNA OPCION \n");
        linea();
        printf("Ingrese una opcion: \n");
        scanf(" %d", &opcion);
        break;
    }
    return opcion;
}


/**********************************ALTAS Y BAJAS****************************************************************/
//FUNCION CARGAR UN TIPO DE DATO sAsociado
sAsociado cargarUnTipo_sAsociado(int id)
{
    sAsociado asociado;

    asociado.estado=ALTA;
    asociado.idAsociado=id;
    printf("Ingrese el nombre : \n");
    fflush(stdin);
    scanf(" %s", asociado.nombre);
    printf("Ingrese el apellido: \n");
    fflush(stdin);
    scanf(" %s", asociado.apellido);
    printf("ingrese la edad : \n");
    scanf(" %d", &asociado.edad);

    return asociado;
}
//FUNCION CARGAR POR CANTIDAD
void cargarPorCantidad(int cantidad,sAsociado* array,int size)
{
    int i;
    int id;

    for(i=0;i<cantidad;i++)
    {
        if(array[i].estado != ALTA)
        {
            id=i+1;
            array[i]=cargarUnTipo_sAsociado(id);
        }
    }

}
//FUNCION DAR DE BAJA
int darBaja(sAsociado* array,int size, int id)
{
    /**
    *  MODIFICAR DATOS DEL ASOCIADO: Se ingresará el ID de asociado,
    *   permitiendo modificar: NOMBRE y APELLIDO
    **/
    /*-----------VARIABLES----------------------*/
    int i;
    int retorno;
    char respuesta;
    sAsociado aux;
    retorno = -2;
   /*-------------------------------------------*/
   /** printf("MODIFICAR DATOS DEL ASOCIADO: \n");
    printf("\n");
    printf("Ingrese el numero de asociado:\n");
    scanf(" %d", &aux.idAsociado);**/
    for(i=0; i<size;i++)//itero el array
    {   //si el id del asociado es igual al id ingresado y el asociado existe
        if(id == array[i].idAsociado && array[i].estado != BAJA)
        {
            linea();
            printf(" ID \t NOMBRE \t APELLIDO \t EDAD  \n");
            mostrarUnTipo_sAsociado_SE(array[i]);//Muestro los datos del alumno
            linea();
            printf("\n");
            printf("Realmente desea dar baja al asociado?(s/n) \n");//imprimo la pregunta
            fflush(stdin);
            scanf(" %c", &respuesta);
            if(respuesta == 's')//si la respuesta es s -> modifico
            {
                array[i].estado=BAJA;
                aux=array[i];
                retorno=0;
            }
        }
    }

    if(respuesta=='s')//si es s la respuesta le muestro los datos nuevos
    {
        printf("DATOS MODIFICADOS!\n \n");
        printf("Nuevos datos del asociado: \n");
        linea();
        printf(" ID \t NOMBRE \t APELLIDO \t EDAD \t ESTADO \n");
        mostrarUnTipo_sAsociado_CE(aux);
        linea();
        respuesta='a';
    }
    else //si la respuesta no es s
    {
        retorno = -1;
        printf("OPERACION CANCELADA!");
    }
    return retorno;
}
/***************************************************************************************************************/



//FUNCION MOSTRAR UN TIPO DE DATO sAlumno SIN EL ESTADO
void mostrarUnTipo_sAsociado_SE(sAsociado asociado)
{
    printf("_________________________________________________\n");
    printf(" %d" , asociado.idAsociado);
    printf(" %10s", asociado.nombre);
    printf(" %15s", asociado.apellido);
    printf(" %10d \n" , asociado.edad);
}
//FUNCION MOSTRAR UN TIPO DE DATO
void mostrarUnTipo_sAsociado_CE(sAsociado asociado)
{
    printf("_________________________________________________\n");
    printf(" %d" , asociado.idAsociado);
    printf(" %10s", asociado.nombre);
    printf(" %15s", asociado.apellido);
    printf(" %10d " , asociado.edad);
    printf(" %10d \n", asociado.estado);
}
//FUNCION MOSTRAR LISTADO
void mostrarListaTipo_sAsociado(sAsociado* array, int size)
{
    int i;
    printf("LISTA DE ASOCIADOS: \n");
    linea();
    printf(" ID \t NOMBRE \t APELLIDO \t EDAD  \n");
    for(i=0; i<size; i++)
    {
        if(array[i].estado == ALTA)
        {
            mostrarUnTipo_sAsociado_SE(array[i]);
        }
    }
    linea();
}

//FUNCION MODIFICAR
int modificar(sAsociado* array,int size, int id)
{
    /**
    *  MODIFICAR DATOS DEL ASOCIADO: Se ingresará el ID de asociado,
    *   permitiendo modificar: NOMBRE y APELLIDO
    **/
    /*-----------VARIABLES----------------------*/
    int i;
    int retorno;
    char respuesta;
    sAsociado aux;
    retorno = -2;
   /*-------------------------------------------*/
   /** printf("MODIFICAR DATOS DEL ASOCIADO: \n");
    printf("\n");
    printf("Ingrese el numero de asociado:\n");
    scanf(" %d", &aux.idAsociado);**/
    for(i=0; i<size;i++)//itero el array
    {
        if(id == array[i].idAsociado && array[i].estado != BAJA)
        {
            linea();
            printf(" ID \t NOMBRE \t APELLIDO \t EDAD  \n");
            mostrarUnTipo_sAsociado_SE(array[i]);//Muestro los datos del alumno
            linea();
            printf("\n");
            printf("Realmente desea modificar los datos del asociado?(s/n) \n");//imprimo la pregunta
            fflush(stdin);
            scanf(" %c", &respuesta);
            if(respuesta == 's')//si la respuesta es s -> modifico
            {
                printf("Ingrese el nombre: \n");  //PIDO EL NOMBRE
                fflush(stdin);
                scanf(" %s", array[i].nombre);
                printf("Ingrese el apellido: \n");//PIDO EL APELLIDO
                fflush(stdin);
                scanf(" %s", array[i].apellido);
                aux=array[i];
                retorno=0;
            }
        }
    }

    if(respuesta=='s')//si es s la respuesta le muestro los datos nuevos
    {
        printf("DATOS MODIFICADOS!\n \n");
        printf("Nuevos datos del asociado: \n");
        linea();
        printf(" ID \t NOMBRE \t APELLIDO \t EDAD  \n");
        mostrarUnTipo_sAsociado_SE(aux);
        linea();
        respuesta='a';
    }
    else //si la respuesta no es s
    {
        retorno = -1;
        printf("OPERACION CANCELADA!");
    }
    return retorno;
}


