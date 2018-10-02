#define BAJA -1
#define ALTA 0
/**********TIPOS DE DATOS**************************/
    //TIPO DE DATO sAlumno
    typedef struct
    {
        int legajo;
        char nombre[30];
        int nota;
        int estado;
    }sAlumno;
/**************************************************/


/**************PROTORIPOS**************************/

//(1) FUNCION INICIALIZAR VECTOR EN MENOS 1
/** \brief Esta funcion inicializa un vector
 *          otorgandole el valor de baja al
 *          estado.
 * \param sAlumno*
 * \param int
 * \return int
 *
 */
int inicializarVectorEnMenosUno(sAlumno* , int);
/*------------------------------------------------*/
//(2) FUNCION CARGAR UN TIPO DE DATO sAlumno
/** \brief Esta funcion pide los datos
 *        representativos de un tipo de
 *        dato sAlumno
 * \return sAlumno
 *
 */
sAlumno cargarUnTipo_sAlumno();
/*------------------------------------------------*/
//(3)FUNCION MOSTRAR UN TIPO DE DATO sAlumno
/** \brief Esta funcion muestra en pantalla
 *         los datos ingresados de una
 *         variable tipo sAlumno.
 * \param alumno sAlumno
 * \return void
 *
 */
void mostrarUnTipo_sAlumno(sAlumno alumno);
/*------------------------------------------------*/
//(4)FUNCION CARGAR POR CANTIDAD
/** \brief Esta funcion recivira un parametro
 *      el cual inicializara un contador segun
 *      esta condicion se podra agregar una
 *      cierta cantidad de arrays
 * \param int
 * \param sAlumno*
 * \param int
 * \return void
 *
 */
void cargarPorCantidad(int,sAlumno*,int);
/*------------------------------------------------*/
//(5)FUNCION MOSTRAR LISTADO
/** \brief Esta funcion muestra de a uno los
 *      datos ingresados.
 * \param array sAlumno*
 * \param size int
 * \return void
 *
 */
void mostrarListaTipo_sAlumno(sAlumno* , int );
/*------------------------------------------------*/
//(6)FUNCION ORDENAR ALFABETICAMENTE
/** \brief Esta funcion ordena alfabeticamente
 *      por nombre de un tipo sAlumno.
 * \param sAlumno*
 * \param int
 * \return void
 *
 */
void ordenarListaAlfabeticamente(sAlumno* , int);
/*------------------------------------------------*/
//(7)FUCNION APROBADOS
/** \brief Esta funcion muestra el elemento
 *      de un array cuyo campo nota es mayor a 6.
 * \param array sAlumno*
 * \param size int
 * \return void
 *
 */
void aprobados(sAlumno* array,int size);
/*------------------------------------------------*/
//(8)FUNCION FILTRAR POR PRIMER LETRA DEL NOMBRE
/** \brief Esta funcion pide la primer letra
 *      de un nombre y devuelve los nombres que
 *      empiezan con dicha letra.
 * \param array sAlumno*
 * \param size int
 * \return void
 *
 */
void filtrarAlumnoPorNombre(sAlumno* array,int size);
/*------------------------------------------------*/
//(9)FUNCION NOTA MAS ALTA
/** \brief Esta funcion te muestra en pantalla
 *      todos los alumnos que tienen la nota mas alta.
 * \param sAlumno*
 * \param int
 * \return void
 *
 */
void notaMasAlta(sAlumno* ,int );
/*------------------------------------------------*/
//(10)FUNCION MODIFICAR NOTA
/** \brief Esta funcion pide el legajo del alumno
 *      para luego modificar la nota.
 * \param sAlumno*
 * \param int
 * \return void
 *
 */
void modificarNota(sAlumno* , int);
/*------------------------------------------------*/
//(11)FUNCION BUSCAR UN ESPACIO LIBRE
/** \brief Esta funcion busca un array inicializado
 *      con el campo estado en BAJA.
 * \param array sAlumno*
 * \param size int
 * \return int
 *
 */
int buscaEspacioLibre(sAlumno* array, int size);
/*------------------------------------------------*/
//(12)FUNCION QUE CARGA ALUMNOS SOLO EN ESPACIOS LIBRES(NO RESCRIBE)
/** \brief Esta funcion deja hacer una carga de
 *      un dato siempre y cuando se sigan las
 *      reglas de la funcion buscaEspacioLibre.
 * \param sAlumno*
 * \param int
 * \return void
 *
 */
void caragaAleatoriaTipo_sAlumno(sAlumno* , int);
/*------------------------------------------------*/
//(13)FUNCION CARGAR ALEATORIAMENTE (EN EL LUGAR DESEADO)
/** \brief Esta funcion cargara (siempre que se pueda)
 *      un alumno en una posicion del array elegida
 *      por el usuario. ¡CUIDADO! tener en cuenta que
 *      la primer posicion del array es "0".
 * \param array sAlumno*
 * \param size int
 * \return void
 *
 */
void cargarAlumnosEspaciosLibres(sAlumno* array, int size);
/*------------------------------------------------*/



/**************************************************/



