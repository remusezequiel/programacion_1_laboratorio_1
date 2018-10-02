#define TAMANIO 10
#define OCUPADO 0
#define LIBRE 1

//////////////////////////////ESTRUCTURAS//////////////////////////////////////////////////////////////
typedef struct
{
    int id;
    /**/
    int estado;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////PROTOTIPOS//////////////////////////////////////////////////////////////////////////////////
//()FUNCION GENERAR NEXT ID
/** \brief
 *
 * \return int
 *
 */
int generarNextId();
//()FUNCION TRAER INDICE VACIO
/** \brief
 *
 * \return int traerIndiceVacio(EPersona* array,int
 *
 */
int traerIndiceVacio(EPersona* array,int cantidad);
//()FUNCION INICIALIZAR ARRAY
/** \brief
 *
 * \return int inicializar(EPersona* array,int
 *
 */
int inicializar(EPersona* array,int cantidad);



//()FUNCION DAR DE ALTA A UN STRUCT
/** \brief
 *
 * \return int altaPersona(EPersona* array, int
 *
 */
int altaPersona(EPersona* array, int cantidad);
//()FUNCION DAR BAJA A UN STRUCT
/** \brief
 *
 * \param array EPersona
 * \param size int
 * \param id int
 * \return int
 *
 */
int baja(EPersona array, int size, int id);
//FUNCION GET BY ID
/** \brief
 *
 * \param array EPersona*
 * \param cantidad int
 * \param id int
 * \return int
 *
 */
int getById(EPersona* array, int cantidad, int id);






//()FUNCION MOSTRAR UN SOLO STRUCT
/** \brief
 *
 * \param alumno STRUCT
 * \return int
 *
 */
int mostrarUnTipo_STRUCT(STRUCT alumno);
//()FUNCION MOSTRAR LISTADO DE STRUCT
/** \brief
 *
 * \param array STRUCT*
 * \param size int
 * \return int
 *
 */
int mostrarListaTipo_STRUCT(STRUCT* array, int size);






//()FUNCION MODIFICAR A PARTIR DEL INGRESO DEL ID
/** \brief Esta funcion es un general para entrar a una estructura
 *      y modificar datos (hay que plantearle que queremos modificar)
 * \param array STRUCT* un puntero que simbolisa a un array de una estructura
 * \param size int  es el tamaño del array
 * \param id int
 * \return int
 *
 */
int modificacionById(STRUCT* array,int size, int id);
////////////////////////////////////////////////////////////////////////////////////////////////////////
