//()FUNCION GENERAR NEXT ID
int generarNextId()
{
    int id = -1;
    id ++;
    return id;
}
//()FUNCION TRAER INDICE VACIO
int traerIndiceVacio(STRUCT* array,int size)
{
    int retorno = -1, i;
    if(array != NULL && size>0)
    {
        for (i=0; i<size; i++)
        {
            if (array[i].isEmpty == LIBRE)//si el estado del struct corresponde al dado de baja
            {
                retorno = i;//retorno el valor del indice. Luego, al otorgarle a una variable
                break;		//el valor que otorga esta funcion es el del primer lugar en estado libre
            }
        }
    }
    return retorno;
}
//()FUNCION INICIALIZAR ARRAY
int inicializar(STRUCT* array, int size)
{
    int retorno = 0, i; /// Valor que retorna si esta todo mal
    if(array != NULL && size>0)
    {
        retorno = 1;
        for (i=0; i<size; i++)
        {
            array[i].isEmpty = LIBRE;//inicializo todo el vector con el estado en libre
        }
    }
    return retorno;
}
//FUNCION GET BY ID
int getById(STRUCT* array, int size, int idABuscar)//idABuscar sera un id que se le pide al usuario
{
    int retorno = -1, i;

    if(array != NULL && size>0)
    {
        for (i=0; i<size; i++)//itero el array
        {
            if (array[i].id == idABuscar)//cuando se cumpla esta condicion
            {
                retorno = i;//devuelvo el valor del indice
                break;
            }
        }
    }
    return retorno;
}




//()FUNCION DAR DE ALTA A UN STRUCT
int altaPersona(STRUCT* array, int size)//EN ESTE CASO ES UN STRUCT EPersona
{
    EPersona auxPersona;//se crea un auxiliar del tipo struct
    int retorno = 0;
    int indice = traerIndiceVacio(array, size);//se trae al primer elemento del struct con estado sin ingresar

    if (indice>-1 && indice <= TAMANIO)//si el [i] del array va de 0 en adelante
    {
		//INGRESO EL NOMBRE (con todo array puede hacerse el strlen)
        do
        {
            printf("Ingrese su nombre: ");
            fflush(stdin);
            gets(auxPersona.nombre);
        } while (strlen(auxPersona.nombre) == 0);//Esto es para que si no se ingresa nada volver a llamar
		//INGRESO EL APELLIDO
        do
        {
            printf("Ingrese su apellido: ");
            fflush(stdin);
            gets(auxPersona.apellido);
        } while (strlen(auxPersona.apellido) == 0);//Esto es para que si no se ingresa nada volver a llamar


        printf("Ingrese su dia de nacimiento: ");
        fflush(stdin);
        scanf("%d", &auxPersona.nacimiento.dia);

        printf("Ingrese su mes de nacimiento: ");
        fflush(stdin);
        scanf("%d", &auxPersona.nacimiento.mes);

        printf("Ingrese su anio de nacimiento: ");
        fflush(stdin);
        scanf("%d", &auxPersona.nacimiento.anio);


        /// IMPORTANT
        auxPersona.id = generarNextId();//Le doy el siguiente id libre al auxiliar
        auxPersona.isEmpty = OCUPADO;        //doy el alta al auxiliar
        array[indice] = auxPersona;   //al array en el indice vacio le pongo el valor del auxiliar
        /// IMPORTANT ^^

        retorno = 1;
    }
    else
    {
        printf("No HAY ESPACIO!\n");
    }
    return retorno;
}
//()FUNCION DAR DE ALTA A UN STRUCT POR CANTIDAD
int altaPorCantidad(int cantidad,STRUCT* array,int size)
{
    int retorno = 0, i;
    if(array != NULL && size>0)
    {
            retorno = 1;
        for(i=0;i<cantidad;i++)
        {
            array[i]=altaPersona();
        }
    }

    return retorno;
}
//()FUNCION DAR BAJA A UN STRUCT
int baja(STRUCT* array, int size, int id)//antes debe pedirse el id
{
    int retorno = -1;
    int indice;

    if(size > 0 && array != NULL)
    {
        retorno = -2;
        indice = getById(array,size,id);//busco por id. Tomo el valor del ide en la variable indice.

        if(indice >= 0)//si el indice es valido
        {
            array[indice].estado = LIBRE;//se da baja al elemento del array correspondiente al indice
			retorno = 1;

			printf("La baja se realizo satisfactoriamente");
		}
        else
        {
            printf("No se encontro el Id");//sino, informa que no se a encontrado el indice
        }
	}

    return retorno;
}





//()FUNCION MOSTRAR UN SOLO STRUCT
int mostrarUnTipo_STRUCT(STRUCT alumno)//EJEMPLO CON UN STRUCT STRUCT
{
    printf("_________________________________________________\n");
    printf(" %6d",alumno.legajo);
    printf(" %15s",alumno.nombre);
    printf(" %10d",alumno.nota);
    printf(" %6d\n",alumno.estado);

    return 0;
}
//()FUNCION MOSTRAR LISTADO DE STRUCT
int mostrarListaTipo_STRUCT(STRUCT* array, int size)//EJEMPLO CON UN TIPO STRUCT
{
    int retorno;
    int i;
    retorno = -1;

    printf("LISTA DE ALUMNOS: \n");
    printf("_________________________________________________\n");
    printf(" LEGAJO \t NOMBRE \t NOTA \n");
    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<size; i++)
        {
            if(array[i].estado == 0)
            {
                mostrarUnTipo_STRUCT(array[i]);
            }
        }
    }
    printf("_________________________________________________\n");

    return retorno;
}




//()FUNCION MODIFICAR A PARTIR DEL INGRESO DEL ID
int modificacionById(STRUCT* array,int size, int id)
{
    int retorno = -1;
    char nombre[50];
    int indice;

    if(size > 0 && array != NULL)
    {
        retorno = -2;
        indice = getById(listado, limite, id);

        if(indice >= 0)
        {
			//INTRODUCIR LEER LO QUE DESEAMOS MODIFICAR
            puts("Introduzca nuevo nombre: ");
            gets(nombre);
            validaLargoCadena(nombre, indice, 50);
            strcpy(array[indice].nombre, nombre);
        }
        else
        {
            printf("No se encontro el Id");
        }

    }
    return retorno;
}


