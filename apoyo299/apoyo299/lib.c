//FUNCION INICIALIZAR
int inicializar( sAsociado* listado,int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            listado[i].estado= -1;
            listado[i].idAsociado= 0;
        }
    }
    return retorno;
}

void mostrarOpciones(void)
{
    linea();
    printf(" /t OPCIONES /n");
    printf(" /t 1) ALTA DEL ASOCIADO /n");
    printf(" /t 2) MODIFICAR DATOS DEL ASOCIADO /n");
    printf(" /t 3) BAJA DEL ASOCIADO /n");
    printf(" /t 4) NUEVA LLAMADA/n");
    printf(" /t 5) ASIGNAR AMBULANCIA/n");
    printf(" /t 6) INFORMAR /n");
    linea();
}

//FUNCION SIGUIENTE ID
int siguienteId(sAsociado* asociado,int limite)
{
    int retorno = 0;
    int i;
    if(limite > 0 && asociado != NULL)
    {
        for(i=0; i<limite; i++)//recorro el array
        {
            if(asociado[i].estado == OCUPADO)
            {
                    if(asociado[i].idAsociado > retorno)
                    {
                         retorno=asociado[i].idAsociado;
                    }
            }
        }
    }

    return retorno+1;
}

//FUNCION DAR DE ALTA
//(2) FUNCION CARGAR UN TIPO DE DATO sAlumno
sAsociado cargarUnTipo_sAsociado()
{
    sAsociado asociado;
    char respuesta;


    printf("Ingrese el nombre : \n");
    fflush(stdin);
    scanf(" %s", asociado.nombre);
    printf("Ingrese el apellido: \n");
    fflush(stdin);
    scanf(" %s", asociado.apellid);
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

//FUNCION MOSTRAR UN TIPO DE DATO sAlumno
void mostrarUnTipo_sAsociado(sAsociado asociado)
{
    printf("_________________________________________________\n");
    printf(" %6d",asociado.idAsociado);
    printf(" %15s",asociado.nombre);
    printf(" %15s",asociado.apellido);


}

int modificar(sAsociado* array,int size, int id)
{
    /**
    *  MODIFICAR DATOS DEL ASOCIADO: Se ingresará el ID de asociado,
    *   permitiendo modificar: NOMBRE y APELLIDO
    **/

    int i;
    sAsociado aux;
    char respuesta;

    printf("MODIFICAR DATOS DEL ASOCIADO: \n");
    printf("\n");
    printf("Ingrese el numero de asociado:\n");
    scanf(" %d", &aux.idAsociado);

    for(i=0; i<size;i++)//itero el array
    {
        if(aux.idAsociado == array[i].idAsociado && array[i].estado != -1)
        {
            printf("_________________________________________________\n");
            printf(" ID \t NOMBRE \t APELLIDO \t  \n");
            mostrarUnTipo_sAsociado(array[i]);//Muestro los datos del alumno
            printf("\n");
            printf("Realmente desea modificar los datos del asociado?(s/n)");//imprimo la pregunta
            fflush(stdin);
            scanf(" %c", &respuesta);
            if(respuesta == 's')//si es s la respuesta modifico
            {
                printf("Ingrese el nombre: \n");
                fflush(stdin);
                scanf(" %s", array[i].nombre);
                printf("Ingrese el apellido: \n");
                fflush(stdin);
                scanf(" %s", array[i].apellido)
                aux=array[i];
            }
        }
    }

    if(respuesta=='s')//si es s la respuesta le muestro los datos nuevos
    {
        printf("DATOS MODIFICADOS!\n \n");
        printf("Nuevos datos del asociado: \n");
        printf("_________________________________________________\n");
        printf(" ID \t NOMBRE \t APELLIDO \t  \n");
        mostrarUnTipo_sAsociado(aux);
        respuesta='a';
    }
    else //si la respuesta no es s
    {
        printf("OPERACION CANCELADA!");
    }
}


